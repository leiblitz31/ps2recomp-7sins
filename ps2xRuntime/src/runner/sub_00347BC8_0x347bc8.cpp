#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00347BC8
// Address: 0x347bc8 - 0x3483b0
void sub_00347BC8_0x347bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00347BC8_0x347bc8");
#endif

    switch (ctx->pc) {
        case 0x347bf4u: goto label_347bf4;
        case 0x347c08u: goto label_347c08;
        case 0x347c30u: goto label_347c30;
        case 0x347c88u: goto label_347c88;
        case 0x347cf4u: goto label_347cf4;
        case 0x347d08u: goto label_347d08;
        case 0x347dacu: goto label_347dac;
        case 0x347dc0u: goto label_347dc0;
        case 0x347e64u: goto label_347e64;
        case 0x347e78u: goto label_347e78;
        case 0x347e90u: goto label_347e90;
        case 0x347ebcu: goto label_347ebc;
        case 0x347ed0u: goto label_347ed0;
        case 0x347f34u: goto label_347f34;
        case 0x347f48u: goto label_347f48;
        case 0x347f8cu: goto label_347f8c;
        case 0x347fa0u: goto label_347fa0;
        case 0x347fb8u: goto label_347fb8;
        case 0x347ff4u: goto label_347ff4;
        case 0x348018u: goto label_348018;
        case 0x348174u: goto label_348174;
        case 0x348190u: goto label_348190;
        case 0x34819cu: goto label_34819c;
        case 0x3481a4u: goto label_3481a4;
        case 0x3481dcu: goto label_3481dc;
        case 0x348200u: goto label_348200;
        case 0x348360u: goto label_348360;
        case 0x34837cu: goto label_34837c;
        case 0x348388u: goto label_348388;
        case 0x348390u: goto label_348390;
        default: break;
    }

    ctx->pc = 0x347bc8u;

    // 0x347bc8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x347bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x347bcc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x347bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x347bd0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x347bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x347bd4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x347bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x347bd8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x347bd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347bdc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x347bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x347be0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x347be0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347be4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x347be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x347be8: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x347be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x347bec: 0xc0d120c  jal         func_344830
    ctx->pc = 0x347BECu;
    SET_GPR_U32(ctx, 31, 0x347BF4u);
    ctx->pc = 0x347BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347BECu;
    // 0x347bf0: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x347BECu, 0x347BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347BF4u;
label_347bf4:
    // 0x347bf4: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x347bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x347bf8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x347bf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347bfc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x347bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x347c00: 0xc0d120c  jal         func_344830
    ctx->pc = 0x347C00u;
    SET_GPR_U32(ctx, 31, 0x347C08u);
    ctx->pc = 0x347C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347C00u;
    // 0x347c04: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x347C00u, 0x347C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347C08u;
label_347c08:
    // 0x347c08: 0x6020037  bltzl       $s0, . + 4 + (0x37 << 2)
    ctx->pc = 0x347C08u;
    {
        const bool branch_taken_0x347c08 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x347c08) {
            ctx->pc = 0x347C0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347C08u;
            // 0x347c0c: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x347CE8u;
            goto label_347ce8;
        }
    }
    ctx->pc = 0x347C10u;
    // 0x347c10: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x347C10u;
    {
        const bool branch_taken_0x347c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x347C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347C10u;
        // 0x347c14: 0x2502821  addu        $a1, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347c10) {
            ctx->pc = 0x347CE4u;
            goto label_347ce4;
        }
    }
    ctx->pc = 0x347C18u;
    // 0x347c18: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x347c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x347c1c: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x347c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x347c20: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x347c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x347c24: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x347C24u;
    {
        const bool branch_taken_0x347c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x347C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347C24u;
        // 0x347c28: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347c24) {
            ctx->pc = 0x347C84u;
            goto label_347c84;
        }
    }
    ctx->pc = 0x347C2Cu;
    // 0x347c2c: 0x24a200a0  addiu       $v0, $a1, 0xA0
    ctx->pc = 0x347c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 160));
label_347c30:
    // 0x347c30: 0x68660007  ldl         $a2, 0x7($v1)
    ctx->pc = 0x347c30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x347c34: 0x6c660000  ldr         $a2, 0x0($v1)
    ctx->pc = 0x347c34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x347c38: 0x6867000f  ldl         $a3, 0xF($v1)
    ctx->pc = 0x347c38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x347c3c: 0x6c670008  ldr         $a3, 0x8($v1)
    ctx->pc = 0x347c3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x347c40: 0x68680017  ldl         $t0, 0x17($v1)
    ctx->pc = 0x347c40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x347c44: 0x6c680010  ldr         $t0, 0x10($v1)
    ctx->pc = 0x347c44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x347c48: 0x6869001f  ldl         $t1, 0x1F($v1)
    ctx->pc = 0x347c48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x347c4c: 0x6c690018  ldr         $t1, 0x18($v1)
    ctx->pc = 0x347c4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x347c50: 0xb0860007  sdl         $a2, 0x7($a0)
    ctx->pc = 0x347c50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x347c54: 0xb4860000  sdr         $a2, 0x0($a0)
    ctx->pc = 0x347c54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x347c58: 0xb087000f  sdl         $a3, 0xF($a0)
    ctx->pc = 0x347c58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x347c5c: 0xb4870008  sdr         $a3, 0x8($a0)
    ctx->pc = 0x347c5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x347c60: 0xb0880017  sdl         $t0, 0x17($a0)
    ctx->pc = 0x347c60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x347c64: 0xb4880010  sdr         $t0, 0x10($a0)
    ctx->pc = 0x347c64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x347c68: 0xb089001f  sdl         $t1, 0x1F($a0)
    ctx->pc = 0x347c68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x347c6c: 0xb4890018  sdr         $t1, 0x18($a0)
    ctx->pc = 0x347c6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x347c70: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x347c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x347c74: 0x1462ffee  bne         $v1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x347C74u;
    {
        const bool branch_taken_0x347c74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x347C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347C74u;
        // 0x347c78: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347c74) {
            ctx->pc = 0x347C30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_347c30;
        }
    }
    ctx->pc = 0x347C7Cu;
    // 0x347c7c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x347C7Cu;
    {
        const bool branch_taken_0x347c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x347c7c) {
            ctx->pc = 0x347CB4u;
            goto label_347cb4;
        }
    }
    ctx->pc = 0x347C84u;
label_347c84:
    // 0x347c84: 0x24a200a0  addiu       $v0, $a1, 0xA0
    ctx->pc = 0x347c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 160));
label_347c88:
    // 0x347c88: 0xdc660000  ld          $a2, 0x0($v1)
    ctx->pc = 0x347c88u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x347c8c: 0xdc670008  ld          $a3, 0x8($v1)
    ctx->pc = 0x347c8cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x347c90: 0xdc680010  ld          $t0, 0x10($v1)
    ctx->pc = 0x347c90u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x347c94: 0xdc690018  ld          $t1, 0x18($v1)
    ctx->pc = 0x347c94u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x347c98: 0xfc860000  sd          $a2, 0x0($a0)
    ctx->pc = 0x347c98u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
    // 0x347c9c: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x347c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x347ca0: 0xfc880010  sd          $t0, 0x10($a0)
    ctx->pc = 0x347ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 8));
    // 0x347ca4: 0xfc890018  sd          $t1, 0x18($a0)
    ctx->pc = 0x347ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 9));
    // 0x347ca8: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x347ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x347cac: 0x1462fff6  bne         $v1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x347CACu;
    {
        const bool branch_taken_0x347cac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x347CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347CACu;
        // 0x347cb0: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347cac) {
            ctx->pc = 0x347C88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_347c88;
        }
    }
    ctx->pc = 0x347CB4u;
label_347cb4:
    // 0x347cb4: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x347cb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x347cb8: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x347cb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x347cbc: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x347cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x347cc0: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x347cc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x347cc4: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x347cc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x347cc8: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x347cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x347ccc: 0x8ca300a4  lw          $v1, 0xA4($a1)
    ctx->pc = 0x347cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 164)));
    // 0x347cd0: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x347CD0u;
    {
        const bool branch_taken_0x347cd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x347cd0) {
            ctx->pc = 0x347CD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347CD0u;
            // 0x347cd4: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x347CE8u;
            goto label_347ce8;
        }
    }
    ctx->pc = 0x347CD8u;
    // 0x347cd8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x347cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x347cdc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x347cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x347ce0: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x347ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
label_347ce4:
    // 0x347ce4: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x347ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_347ce8:
    // 0x347ce8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x347ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x347cec: 0xc0d120c  jal         func_344830
    ctx->pc = 0x347CECu;
    SET_GPR_U32(ctx, 31, 0x347CF4u);
    ctx->pc = 0x347CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347CECu;
    // 0x347cf0: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x347CECu, 0x347CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347CF4u;
label_347cf4:
    // 0x347cf4: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x347cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x347cf8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x347cf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347cfc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x347cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x347d00: 0xc0d120c  jal         func_344830
    ctx->pc = 0x347D00u;
    SET_GPR_U32(ctx, 31, 0x347D08u);
    ctx->pc = 0x347D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347D00u;
    // 0x347d04: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x347D00u, 0x347D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347D08u;
label_347d08:
    // 0x347d08: 0x6020025  bltzl       $s0, . + 4 + (0x25 << 2)
    ctx->pc = 0x347D08u;
    {
        const bool branch_taken_0x347d08 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x347d08) {
            ctx->pc = 0x347D0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347D08u;
            // 0x347d0c: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x347DA0u;
            goto label_347da0;
        }
    }
    ctx->pc = 0x347D10u;
    // 0x347d10: 0x4400022  bltz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x347D10u;
    {
        const bool branch_taken_0x347d10 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x347D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347D10u;
        // 0x347d14: 0x2501821  addu        $v1, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347d10) {
            ctx->pc = 0x347D9Cu;
            goto label_347d9c;
        }
    }
    ctx->pc = 0x347D18u;
    // 0x347d18: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x347d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x347d1c: 0x68690007  ldl         $t1, 0x7($v1)
    ctx->pc = 0x347d1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x347d20: 0x6c690000  ldr         $t1, 0x0($v1)
    ctx->pc = 0x347d20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x347d24: 0x6864000f  ldl         $a0, 0xF($v1)
    ctx->pc = 0x347d24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x347d28: 0x6c640008  ldr         $a0, 0x8($v1)
    ctx->pc = 0x347d28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x347d2c: 0x68650017  ldl         $a1, 0x17($v1)
    ctx->pc = 0x347d2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x347d30: 0x6c650010  ldr         $a1, 0x10($v1)
    ctx->pc = 0x347d30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x347d34: 0x6866001f  ldl         $a2, 0x1F($v1)
    ctx->pc = 0x347d34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x347d38: 0x6c660018  ldr         $a2, 0x18($v1)
    ctx->pc = 0x347d38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x347d3c: 0xb0490007  sdl         $t1, 0x7($v0)
    ctx->pc = 0x347d3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x347d40: 0xb4490000  sdr         $t1, 0x0($v0)
    ctx->pc = 0x347d40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x347d44: 0xb044000f  sdl         $a0, 0xF($v0)
    ctx->pc = 0x347d44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x347d48: 0xb4440008  sdr         $a0, 0x8($v0)
    ctx->pc = 0x347d48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x347d4c: 0xb0450017  sdl         $a1, 0x17($v0)
    ctx->pc = 0x347d4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x347d50: 0xb4450010  sdr         $a1, 0x10($v0)
    ctx->pc = 0x347d50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x347d54: 0xb046001f  sdl         $a2, 0x1F($v0)
    ctx->pc = 0x347d54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x347d58: 0xb4460018  sdr         $a2, 0x18($v0)
    ctx->pc = 0x347d58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x347d5c: 0x68690027  ldl         $t1, 0x27($v1)
    ctx->pc = 0x347d5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x347d60: 0x6c690020  ldr         $t1, 0x20($v1)
    ctx->pc = 0x347d60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x347d64: 0x6864002f  ldl         $a0, 0x2F($v1)
    ctx->pc = 0x347d64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x347d68: 0x6c640028  ldr         $a0, 0x28($v1)
    ctx->pc = 0x347d68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x347d6c: 0x68650037  ldl         $a1, 0x37($v1)
    ctx->pc = 0x347d6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x347d70: 0x6c650030  ldr         $a1, 0x30($v1)
    ctx->pc = 0x347d70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x347d74: 0x6866003f  ldl         $a2, 0x3F($v1)
    ctx->pc = 0x347d74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x347d78: 0x6c660038  ldr         $a2, 0x38($v1)
    ctx->pc = 0x347d78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x347d7c: 0xb0490027  sdl         $t1, 0x27($v0)
    ctx->pc = 0x347d7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x347d80: 0xb4490020  sdr         $t1, 0x20($v0)
    ctx->pc = 0x347d80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x347d84: 0xb044002f  sdl         $a0, 0x2F($v0)
    ctx->pc = 0x347d84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x347d88: 0xb4440028  sdr         $a0, 0x28($v0)
    ctx->pc = 0x347d88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x347d8c: 0xb0450037  sdl         $a1, 0x37($v0)
    ctx->pc = 0x347d8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x347d90: 0xb4450030  sdr         $a1, 0x30($v0)
    ctx->pc = 0x347d90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x347d94: 0xb046003f  sdl         $a2, 0x3F($v0)
    ctx->pc = 0x347d94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x347d98: 0xb4460038  sdr         $a2, 0x38($v0)
    ctx->pc = 0x347d98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_347d9c:
    // 0x347d9c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x347d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_347da0:
    // 0x347da0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x347da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x347da4: 0xc0d120c  jal         func_344830
    ctx->pc = 0x347DA4u;
    SET_GPR_U32(ctx, 31, 0x347DACu);
    ctx->pc = 0x347DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347DA4u;
    // 0x347da8: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x347DA4u, 0x347DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347DACu;
label_347dac:
    // 0x347dac: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x347dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x347db0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x347db0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347db4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x347db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x347db8: 0xc0d120c  jal         func_344830
    ctx->pc = 0x347DB8u;
    SET_GPR_U32(ctx, 31, 0x347DC0u);
    ctx->pc = 0x347DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347DB8u;
    // 0x347dbc: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x347DB8u, 0x347DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347DC0u;
label_347dc0:
    // 0x347dc0: 0x6020025  bltzl       $s0, . + 4 + (0x25 << 2)
    ctx->pc = 0x347DC0u;
    {
        const bool branch_taken_0x347dc0 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x347dc0) {
            ctx->pc = 0x347DC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347DC0u;
            // 0x347dc4: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x347E58u;
            goto label_347e58;
        }
    }
    ctx->pc = 0x347DC8u;
    // 0x347dc8: 0x4400022  bltz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x347DC8u;
    {
        const bool branch_taken_0x347dc8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x347DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347DC8u;
        // 0x347dcc: 0x2501821  addu        $v1, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347dc8) {
            ctx->pc = 0x347E54u;
            goto label_347e54;
        }
    }
    ctx->pc = 0x347DD0u;
    // 0x347dd0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x347dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x347dd4: 0x68670007  ldl         $a3, 0x7($v1)
    ctx->pc = 0x347dd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x347dd8: 0x6c670000  ldr         $a3, 0x0($v1)
    ctx->pc = 0x347dd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x347ddc: 0x6868000f  ldl         $t0, 0xF($v1)
    ctx->pc = 0x347ddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x347de0: 0x6c680008  ldr         $t0, 0x8($v1)
    ctx->pc = 0x347de0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x347de4: 0x68690017  ldl         $t1, 0x17($v1)
    ctx->pc = 0x347de4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x347de8: 0x6c690010  ldr         $t1, 0x10($v1)
    ctx->pc = 0x347de8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x347dec: 0x6864001f  ldl         $a0, 0x1F($v1)
    ctx->pc = 0x347decu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x347df0: 0x6c640018  ldr         $a0, 0x18($v1)
    ctx->pc = 0x347df0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x347df4: 0xb0470007  sdl         $a3, 0x7($v0)
    ctx->pc = 0x347df4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x347df8: 0xb4470000  sdr         $a3, 0x0($v0)
    ctx->pc = 0x347df8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x347dfc: 0xb048000f  sdl         $t0, 0xF($v0)
    ctx->pc = 0x347dfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x347e00: 0xb4480008  sdr         $t0, 0x8($v0)
    ctx->pc = 0x347e00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x347e04: 0xb0490017  sdl         $t1, 0x17($v0)
    ctx->pc = 0x347e04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x347e08: 0xb4490010  sdr         $t1, 0x10($v0)
    ctx->pc = 0x347e08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x347e0c: 0xb044001f  sdl         $a0, 0x1F($v0)
    ctx->pc = 0x347e0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x347e10: 0xb4440018  sdr         $a0, 0x18($v0)
    ctx->pc = 0x347e10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x347e14: 0x68670027  ldl         $a3, 0x27($v1)
    ctx->pc = 0x347e14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x347e18: 0x6c670020  ldr         $a3, 0x20($v1)
    ctx->pc = 0x347e18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x347e1c: 0x6868002f  ldl         $t0, 0x2F($v1)
    ctx->pc = 0x347e1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x347e20: 0x6c680028  ldr         $t0, 0x28($v1)
    ctx->pc = 0x347e20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x347e24: 0x68690037  ldl         $t1, 0x37($v1)
    ctx->pc = 0x347e24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x347e28: 0x6c690030  ldr         $t1, 0x30($v1)
    ctx->pc = 0x347e28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x347e2c: 0x6864003f  ldl         $a0, 0x3F($v1)
    ctx->pc = 0x347e2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x347e30: 0x6c640038  ldr         $a0, 0x38($v1)
    ctx->pc = 0x347e30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x347e34: 0xb0470027  sdl         $a3, 0x27($v0)
    ctx->pc = 0x347e34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x347e38: 0xb4470020  sdr         $a3, 0x20($v0)
    ctx->pc = 0x347e38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x347e3c: 0xb048002f  sdl         $t0, 0x2F($v0)
    ctx->pc = 0x347e3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x347e40: 0xb4480028  sdr         $t0, 0x28($v0)
    ctx->pc = 0x347e40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x347e44: 0xb0490037  sdl         $t1, 0x37($v0)
    ctx->pc = 0x347e44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x347e48: 0xb4490030  sdr         $t1, 0x30($v0)
    ctx->pc = 0x347e48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x347e4c: 0xb044003f  sdl         $a0, 0x3F($v0)
    ctx->pc = 0x347e4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x347e50: 0xb4440038  sdr         $a0, 0x38($v0)
    ctx->pc = 0x347e50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_347e54:
    // 0x347e54: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x347e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_347e58:
    // 0x347e58: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x347e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x347e5c: 0xc0d120c  jal         func_344830
    ctx->pc = 0x347E5Cu;
    SET_GPR_U32(ctx, 31, 0x347E64u);
    ctx->pc = 0x347E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347E5Cu;
    // 0x347e60: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x347E5Cu, 0x347E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347E64u;
label_347e64:
    // 0x347e64: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x347e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x347e68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x347e68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347e6c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x347e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x347e70: 0xc0d120c  jal         func_344830
    ctx->pc = 0x347E70u;
    SET_GPR_U32(ctx, 31, 0x347E78u);
    ctx->pc = 0x347E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347E70u;
    // 0x347e74: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x347E70u, 0x347E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347E78u;
label_347e78:
    // 0x347e78: 0x602000d  bltzl       $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x347E78u;
    {
        const bool branch_taken_0x347e78 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x347e78) {
            ctx->pc = 0x347E7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347E78u;
            // 0x347e7c: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x347EB0u;
            goto label_347eb0;
        }
    }
    ctx->pc = 0x347E80u;
    // 0x347e80: 0x440000a  bltz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x347E80u;
    {
        const bool branch_taken_0x347e80 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x347E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347E80u;
        // 0x347e84: 0x2501821  addu        $v1, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347e80) {
            ctx->pc = 0x347EACu;
            goto label_347eac;
        }
    }
    ctx->pc = 0x347E88u;
    // 0x347e88: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x347e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x347e8c: 0x24640080  addiu       $a0, $v1, 0x80
    ctx->pc = 0x347e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_347e90:
    // 0x347e90: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x347e90u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x347e94: 0x78660010  lq          $a2, 0x10($v1)
    ctx->pc = 0x347e94u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x347e98: 0x7c450000  sq          $a1, 0x0($v0)
    ctx->pc = 0x347e98u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
    // 0x347e9c: 0x7c460010  sq          $a2, 0x10($v0)
    ctx->pc = 0x347e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 6));
    // 0x347ea0: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x347ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x347ea4: 0x1464fffa  bne         $v1, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x347EA4u;
    {
        const bool branch_taken_0x347ea4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x347EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347EA4u;
        // 0x347ea8: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347ea4) {
            ctx->pc = 0x347E90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_347e90;
        }
    }
    ctx->pc = 0x347EACu;
label_347eac:
    // 0x347eac: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x347eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_347eb0:
    // 0x347eb0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x347eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x347eb4: 0xc0d120c  jal         func_344830
    ctx->pc = 0x347EB4u;
    SET_GPR_U32(ctx, 31, 0x347EBCu);
    ctx->pc = 0x347EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347EB4u;
    // 0x347eb8: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x347EB4u, 0x347EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347EBCu;
label_347ebc:
    // 0x347ebc: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x347ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x347ec0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x347ec0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347ec4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x347ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x347ec8: 0xc0d120c  jal         func_344830
    ctx->pc = 0x347EC8u;
    SET_GPR_U32(ctx, 31, 0x347ED0u);
    ctx->pc = 0x347ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347EC8u;
    // 0x347ecc: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x347EC8u, 0x347ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347ED0u;
label_347ed0:
    // 0x347ed0: 0x6020015  bltzl       $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x347ED0u;
    {
        const bool branch_taken_0x347ed0 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x347ed0) {
            ctx->pc = 0x347ED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347ED0u;
            // 0x347ed4: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x347F28u;
            goto label_347f28;
        }
    }
    ctx->pc = 0x347ED8u;
    // 0x347ed8: 0x4400012  bltz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x347ED8u;
    {
        const bool branch_taken_0x347ed8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x347EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347ED8u;
        // 0x347edc: 0x2501821  addu        $v1, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347ed8) {
            ctx->pc = 0x347F24u;
            goto label_347f24;
        }
    }
    ctx->pc = 0x347EE0u;
    // 0x347ee0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x347ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x347ee4: 0x68690007  ldl         $t1, 0x7($v1)
    ctx->pc = 0x347ee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x347ee8: 0x6c690000  ldr         $t1, 0x0($v1)
    ctx->pc = 0x347ee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x347eec: 0x6864000f  ldl         $a0, 0xF($v1)
    ctx->pc = 0x347eecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x347ef0: 0x6c640008  ldr         $a0, 0x8($v1)
    ctx->pc = 0x347ef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x347ef4: 0x68650017  ldl         $a1, 0x17($v1)
    ctx->pc = 0x347ef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x347ef8: 0x6c650010  ldr         $a1, 0x10($v1)
    ctx->pc = 0x347ef8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x347efc: 0x6866001f  ldl         $a2, 0x1F($v1)
    ctx->pc = 0x347efcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x347f00: 0x6c660018  ldr         $a2, 0x18($v1)
    ctx->pc = 0x347f00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x347f04: 0xb0490007  sdl         $t1, 0x7($v0)
    ctx->pc = 0x347f04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x347f08: 0xb4490000  sdr         $t1, 0x0($v0)
    ctx->pc = 0x347f08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x347f0c: 0xb044000f  sdl         $a0, 0xF($v0)
    ctx->pc = 0x347f0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x347f10: 0xb4440008  sdr         $a0, 0x8($v0)
    ctx->pc = 0x347f10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x347f14: 0xb0450017  sdl         $a1, 0x17($v0)
    ctx->pc = 0x347f14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x347f18: 0xb4450010  sdr         $a1, 0x10($v0)
    ctx->pc = 0x347f18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x347f1c: 0xb046001f  sdl         $a2, 0x1F($v0)
    ctx->pc = 0x347f1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x347f20: 0xb4460018  sdr         $a2, 0x18($v0)
    ctx->pc = 0x347f20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_347f24:
    // 0x347f24: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x347f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_347f28:
    // 0x347f28: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x347f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x347f2c: 0xc0d120c  jal         func_344830
    ctx->pc = 0x347F2Cu;
    SET_GPR_U32(ctx, 31, 0x347F34u);
    ctx->pc = 0x347F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347F2Cu;
    // 0x347f30: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x347F2Cu, 0x347F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347F34u;
label_347f34:
    // 0x347f34: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x347f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x347f38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x347f38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347f3c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x347f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x347f40: 0xc0d120c  jal         func_344830
    ctx->pc = 0x347F40u;
    SET_GPR_U32(ctx, 31, 0x347F48u);
    ctx->pc = 0x347F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347F40u;
    // 0x347f44: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x347F40u, 0x347F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347F48u;
label_347f48:
    // 0x347f48: 0x602000d  bltzl       $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x347F48u;
    {
        const bool branch_taken_0x347f48 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x347f48) {
            ctx->pc = 0x347F4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347F48u;
            // 0x347f4c: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x347F80u;
            goto label_347f80;
        }
    }
    ctx->pc = 0x347F50u;
    // 0x347f50: 0x440000a  bltz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x347F50u;
    {
        const bool branch_taken_0x347f50 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x347F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347F50u;
        // 0x347f54: 0x2501821  addu        $v1, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347f50) {
            ctx->pc = 0x347F7Cu;
            goto label_347f7c;
        }
    }
    ctx->pc = 0x347F58u;
    // 0x347f58: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x347f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x347f5c: 0x68670007  ldl         $a3, 0x7($v1)
    ctx->pc = 0x347f5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x347f60: 0x6c670000  ldr         $a3, 0x0($v1)
    ctx->pc = 0x347f60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x347f64: 0x6868000f  ldl         $t0, 0xF($v1)
    ctx->pc = 0x347f64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x347f68: 0x6c680008  ldr         $t0, 0x8($v1)
    ctx->pc = 0x347f68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x347f6c: 0xb0470007  sdl         $a3, 0x7($v0)
    ctx->pc = 0x347f6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x347f70: 0xb4470000  sdr         $a3, 0x0($v0)
    ctx->pc = 0x347f70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x347f74: 0xb048000f  sdl         $t0, 0xF($v0)
    ctx->pc = 0x347f74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x347f78: 0xb4480008  sdr         $t0, 0x8($v0)
    ctx->pc = 0x347f78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_347f7c:
    // 0x347f7c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x347f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_347f80:
    // 0x347f80: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x347f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x347f84: 0xc0d120c  jal         func_344830
    ctx->pc = 0x347F84u;
    SET_GPR_U32(ctx, 31, 0x347F8Cu);
    ctx->pc = 0x347F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347F84u;
    // 0x347f88: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x347F84u, 0x347F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347F8Cu;
label_347f8c:
    // 0x347f8c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x347f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x347f90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x347f90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347f94: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x347f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x347f98: 0xc0d120c  jal         func_344830
    ctx->pc = 0x347F98u;
    SET_GPR_U32(ctx, 31, 0x347FA0u);
    ctx->pc = 0x347F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347F98u;
    // 0x347f9c: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x347F98u, 0x347FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347FA0u;
label_347fa0:
    // 0x347fa0: 0x6020006  bltzl       $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x347FA0u;
    {
        const bool branch_taken_0x347fa0 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x347fa0) {
            ctx->pc = 0x347FA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347FA0u;
            // 0x347fa4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x347FBCu;
            goto label_347fbc;
        }
    }
    ctx->pc = 0x347FA8u;
    // 0x347fa8: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x347FA8u;
    {
        const bool branch_taken_0x347fa8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x347FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347FA8u;
        // 0x347fac: 0x2502821  addu        $a1, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347fa8) {
            ctx->pc = 0x347FB8u;
            goto label_347fb8;
        }
    }
    ctx->pc = 0x347FB0u;
    // 0x347fb0: 0xc0d1488  jal         func_345220
    ctx->pc = 0x347FB0u;
    SET_GPR_U32(ctx, 31, 0x347FB8u);
    ctx->pc = 0x347FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347FB0u;
    // 0x347fb4: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345220u, 0x347FB0u, 0x347FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347FB8u;
label_347fb8:
    // 0x347fb8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x347fb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_347fbc:
    // 0x347fbc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x347fbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x347fc0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x347fc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x347fc4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x347fc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x347fc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x347fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x347fcc: 0x3e00008  jr          $ra
    ctx->pc = 0x347FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347FCCu;
        // 0x347fd0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347FCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x347FD4u;
    // 0x347fd4: 0x0  nop
    ctx->pc = 0x347fd4u;
    // NOP
    // 0x347fd8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x347fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x347fdc: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x347fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x347fe0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x347fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x347fe4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x347fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x347fe8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x347fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x347fec: 0xc0d0e5c  jal         func_343970
    ctx->pc = 0x347FECu;
    SET_GPR_U32(ctx, 31, 0x347FF4u);
    ctx->pc = 0x347FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347FECu;
    // 0x347ff0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343970u, 0x347FECu, 0x347FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347FF4u;
label_347ff4:
    // 0x347ff4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x347ff4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347ff8: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x347FF8u;
    {
        const bool branch_taken_0x347ff8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x347ff8) {
            ctx->pc = 0x348010u;
            goto label_348010;
        }
    }
    ctx->pc = 0x348000u;
    // 0x348000: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x348000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x348004: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x348004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x348008: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x348008u;
    {
        const bool branch_taken_0x348008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34800Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348008u;
        // 0x34800c: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348008) {
            ctx->pc = 0x3481A8u;
            goto label_3481a8;
        }
    }
    ctx->pc = 0x348010u;
label_348010:
    // 0x348010: 0xc0d0dae  jal         func_3436B8
    ctx->pc = 0x348010u;
    SET_GPR_U32(ctx, 31, 0x348018u);
    ctx->pc = 0x3436B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3436B8u, 0x348010u, 0x348018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348018u;
label_348018:
    // 0x348018: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x348018u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34801c: 0x12200061  beqz        $s1, . + 4 + (0x61 << 2)
    ctx->pc = 0x34801Cu;
    {
        const bool branch_taken_0x34801c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x348020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34801Cu;
        // 0x348020: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34801c) {
            ctx->pc = 0x3481A4u;
            goto label_3481a4;
        }
    }
    ctx->pc = 0x348024u;
    // 0x348024: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x348024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x348028: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x348028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x34802c: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x34802cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x348030: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x348030u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x348034: 0x32420040  andi        $v0, $s2, 0x40
    ctx->pc = 0x348034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)64);
    // 0x348038: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x348038u;
    {
        const bool branch_taken_0x348038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34803Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348038u;
        // 0x34803c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348038) {
            ctx->pc = 0x348054u;
            goto label_348054;
        }
    }
    ctx->pc = 0x348040u;
    // 0x348040: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x348040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x348044: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x348044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x348048: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x348048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x34804c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x34804cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x348050: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x348050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
label_348054:
    // 0x348054: 0x32420002  andi        $v0, $s2, 0x2
    ctx->pc = 0x348054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
    // 0x348058: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x348058u;
    {
        const bool branch_taken_0x348058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34805Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348058u;
        // 0x34805c: 0x71880  sll         $v1, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348058) {
            ctx->pc = 0x348084u;
            goto label_348084;
        }
    }
    ctx->pc = 0x348060u;
    // 0x348060: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x348060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x348064: 0x3a32821  addu        $a1, $sp, $v1
    ctx->pc = 0x348064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x348068: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x348068u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34806c: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x34806cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x348070: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x348070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x348074: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x348074u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x348078: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x348078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x34807c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x34807cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x348080: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x348080u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_348084:
    // 0x348084: 0x32420004  andi        $v0, $s2, 0x4
    ctx->pc = 0x348084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
    // 0x348088: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x348088u;
    {
        const bool branch_taken_0x348088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34808Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348088u;
        // 0x34808c: 0x71880  sll         $v1, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348088) {
            ctx->pc = 0x3480B0u;
            goto label_3480b0;
        }
    }
    ctx->pc = 0x348090u;
    // 0x348090: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x348090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x348094: 0x3a32821  addu        $a1, $sp, $v1
    ctx->pc = 0x348094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x348098: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x348098u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34809c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x34809cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3480a0: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x3480a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x3480a4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x3480a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x3480a8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3480a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3480ac: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x3480acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
label_3480b0:
    // 0x3480b0: 0x32420008  andi        $v0, $s2, 0x8
    ctx->pc = 0x3480b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)8);
    // 0x3480b4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3480B4u;
    {
        const bool branch_taken_0x3480b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3480B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3480B4u;
        // 0x3480b8: 0x71880  sll         $v1, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3480b4) {
            ctx->pc = 0x3480DCu;
            goto label_3480dc;
        }
    }
    ctx->pc = 0x3480BCu;
    // 0x3480bc: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x3480bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x3480c0: 0x3a32821  addu        $a1, $sp, $v1
    ctx->pc = 0x3480c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x3480c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3480c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3480c8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3480c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3480cc: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x3480ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x3480d0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x3480d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x3480d4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3480d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3480d8: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x3480d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
label_3480dc:
    // 0x3480dc: 0x32420080  andi        $v0, $s2, 0x80
    ctx->pc = 0x3480dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)128);
    // 0x3480e0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3480E0u;
    {
        const bool branch_taken_0x3480e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3480E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3480E0u;
        // 0x3480e4: 0x71880  sll         $v1, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3480e0) {
            ctx->pc = 0x34810Cu;
            goto label_34810c;
        }
    }
    ctx->pc = 0x3480E8u;
    // 0x3480e8: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x3480e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x3480ec: 0x3a32821  addu        $a1, $sp, $v1
    ctx->pc = 0x3480ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x3480f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3480f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3480f4: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x3480f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x3480f8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3480f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3480fc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x3480fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x348100: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x348100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x348104: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x348104u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x348108: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x348108u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_34810c:
    // 0x34810c: 0x32420020  andi        $v0, $s2, 0x20
    ctx->pc = 0x34810cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
    // 0x348110: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x348110u;
    {
        const bool branch_taken_0x348110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x348114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348110u;
        // 0x348114: 0x71880  sll         $v1, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348110) {
            ctx->pc = 0x348138u;
            goto label_348138;
        }
    }
    ctx->pc = 0x348118u;
    // 0x348118: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x348118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x34811c: 0x3a32821  addu        $a1, $sp, $v1
    ctx->pc = 0x34811cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x348120: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x348120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x348124: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x348124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x348128: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x348128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x34812c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x34812cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x348130: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x348130u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x348134: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x348134u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
label_348138:
    // 0x348138: 0x32420010  andi        $v0, $s2, 0x10
    ctx->pc = 0x348138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
    // 0x34813c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x34813Cu;
    {
        const bool branch_taken_0x34813c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x348140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34813Cu;
        // 0x348140: 0x71880  sll         $v1, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34813c) {
            ctx->pc = 0x348168u;
            goto label_348168;
        }
    }
    ctx->pc = 0x348144u;
    // 0x348144: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x348144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x348148: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x348148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x34814c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34814cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x348150: 0x3a22821  addu        $a1, $sp, $v0
    ctx->pc = 0x348150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x348154: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x348154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x348158: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x348158u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x34815c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x34815cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x348160: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x348160u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x348164: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x348164u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_348168:
    // 0x348168: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x348168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34816c: 0xc0d0f36  jal         func_343CD8
    ctx->pc = 0x34816Cu;
    SET_GPR_U32(ctx, 31, 0x348174u);
    ctx->pc = 0x348170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34816Cu;
    // 0x348170: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343CD8u, 0x34816Cu, 0x348174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348174u;
label_348174:
    // 0x348174: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x348174u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348178: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x348178u;
    {
        const bool branch_taken_0x348178 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x34817Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348178u;
        // 0x34817c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348178) {
            ctx->pc = 0x348188u;
            goto label_348188;
        }
    }
    ctx->pc = 0x348180u;
    // 0x348180: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x348180u;
    {
        const bool branch_taken_0x348180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x348184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348180u;
        // 0x348184: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348180) {
            ctx->pc = 0x3481A8u;
            goto label_3481a8;
        }
    }
    ctx->pc = 0x348188u;
label_348188:
    // 0x348188: 0xc0d0e1c  jal         func_343870
    ctx->pc = 0x348188u;
    SET_GPR_U32(ctx, 31, 0x348190u);
    ctx->pc = 0x34818Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348188u;
    // 0x34818c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343870u, 0x348188u, 0x348190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348190u;
label_348190:
    // 0x348190: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x348190u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
    // 0x348194: 0xc0d1054  jal         func_344150
    ctx->pc = 0x348194u;
    SET_GPR_U32(ctx, 31, 0x34819Cu);
    ctx->pc = 0x348198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348194u;
    // 0x348198: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344150u, 0x348194u, 0x34819Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34819Cu;
label_34819c:
    // 0x34819c: 0xc0d3f3e  jal         func_34FCF8
    ctx->pc = 0x34819Cu;
    SET_GPR_U32(ctx, 31, 0x3481A4u);
    ctx->pc = 0x3481A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34819Cu;
    // 0x3481a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34FCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34FCF8u, 0x34819Cu, 0x3481A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3481A4u;
label_3481a4:
    // 0x3481a4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3481a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3481a8:
    // 0x3481a8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3481a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3481ac: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3481acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3481b0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3481b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3481b4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3481b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3481b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3481B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3481BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3481B8u;
        // 0x3481bc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3481B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3481C0u;
    // 0x3481c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3481c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3481c4: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3481c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x3481c8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3481c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x3481cc: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3481ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x3481d0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3481d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3481d4: 0xc0d04c0  jal         func_341300
    ctx->pc = 0x3481D4u;
    SET_GPR_U32(ctx, 31, 0x3481DCu);
    ctx->pc = 0x3481D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3481D4u;
    // 0x3481d8: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341300u, 0x3481D4u, 0x3481DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3481DCu;
label_3481dc:
    // 0x3481dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3481dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3481e0: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3481E0u;
    {
        const bool branch_taken_0x3481e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3481e0) {
            ctx->pc = 0x3481F8u;
            goto label_3481f8;
        }
    }
    ctx->pc = 0x3481E8u;
    // 0x3481e8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3481e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3481ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3481ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3481f0: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x3481F0u;
    {
        const bool branch_taken_0x3481f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3481F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3481F0u;
        // 0x3481f4: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3481f0) {
            ctx->pc = 0x348394u;
            goto label_348394;
        }
    }
    ctx->pc = 0x3481F8u;
label_3481f8:
    // 0x3481f8: 0xc0d0406  jal         func_341018
    ctx->pc = 0x3481F8u;
    SET_GPR_U32(ctx, 31, 0x348200u);
    ctx->pc = 0x341018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341018u, 0x3481F8u, 0x348200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348200u;
label_348200:
    // 0x348200: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x348200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348204: 0x12200062  beqz        $s1, . + 4 + (0x62 << 2)
    ctx->pc = 0x348204u;
    {
        const bool branch_taken_0x348204 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x348208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348204u;
        // 0x348208: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348204) {
            ctx->pc = 0x348390u;
            goto label_348390;
        }
    }
    ctx->pc = 0x34820Cu;
    // 0x34820c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x34820cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x348210: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x348210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x348214: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x348214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x348218: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x348218u;
    {
        const bool branch_taken_0x348218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34821Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348218u;
        // 0x34821c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348218) {
            ctx->pc = 0x348230u;
            goto label_348230;
        }
    }
    ctx->pc = 0x348220u;
    // 0x348220: 0x240200ac  addiu       $v0, $zero, 0xAC
    ctx->pc = 0x348220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
    // 0x348224: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x348224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x348228: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x348228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x34822c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x34822cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_348230:
    // 0x348230: 0x32420002  andi        $v0, $s2, 0x2
    ctx->pc = 0x348230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
    // 0x348234: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x348234u;
    {
        const bool branch_taken_0x348234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x348238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348234u;
        // 0x348238: 0x61880  sll         $v1, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348234) {
            ctx->pc = 0x348260u;
            goto label_348260;
        }
    }
    ctx->pc = 0x34823Cu;
    // 0x34823c: 0x24c20009  addiu       $v0, $a2, 0x9
    ctx->pc = 0x34823cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 9));
    // 0x348240: 0x3a32821  addu        $a1, $sp, $v1
    ctx->pc = 0x348240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x348244: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x348244u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x348248: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x348248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x34824c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x34824cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x348250: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x348250u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x348254: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x348254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x348258: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x348258u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x34825c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x34825cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_348260:
    // 0x348260: 0x32420004  andi        $v0, $s2, 0x4
    ctx->pc = 0x348260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
    // 0x348264: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x348264u;
    {
        const bool branch_taken_0x348264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x348268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348264u;
        // 0x348268: 0x61880  sll         $v1, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348264) {
            ctx->pc = 0x348290u;
            goto label_348290;
        }
    }
    ctx->pc = 0x34826Cu;
    // 0x34826c: 0x24c20009  addiu       $v0, $a2, 0x9
    ctx->pc = 0x34826cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 9));
    // 0x348270: 0x3a32821  addu        $a1, $sp, $v1
    ctx->pc = 0x348270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x348274: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x348274u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x348278: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x348278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x34827c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x34827cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x348280: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x348280u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x348284: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x348284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x348288: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x348288u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x34828c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x34828cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_348290:
    // 0x348290: 0x32420020  andi        $v0, $s2, 0x20
    ctx->pc = 0x348290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
    // 0x348294: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x348294u;
    {
        const bool branch_taken_0x348294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x348298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348294u;
        // 0x348298: 0x61880  sll         $v1, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348294) {
            ctx->pc = 0x3482C0u;
            goto label_3482c0;
        }
    }
    ctx->pc = 0x34829Cu;
    // 0x34829c: 0x24c20009  addiu       $v0, $a2, 0x9
    ctx->pc = 0x34829cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 9));
    // 0x3482a0: 0x3a32821  addu        $a1, $sp, $v1
    ctx->pc = 0x3482a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x3482a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3482a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3482a8: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x3482a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x3482ac: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3482acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3482b0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x3482b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x3482b4: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x3482b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x3482b8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3482b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x3482bc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3482bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3482c0:
    // 0x3482c0: 0x32420040  andi        $v0, $s2, 0x40
    ctx->pc = 0x3482c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)64);
    // 0x3482c4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3482C4u;
    {
        const bool branch_taken_0x3482c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3482C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3482C4u;
        // 0x3482c8: 0x61880  sll         $v1, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3482c4) {
            ctx->pc = 0x3482F0u;
            goto label_3482f0;
        }
    }
    ctx->pc = 0x3482CCu;
    // 0x3482cc: 0x24c20009  addiu       $v0, $a2, 0x9
    ctx->pc = 0x3482ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 9));
    // 0x3482d0: 0x3a32821  addu        $a1, $sp, $v1
    ctx->pc = 0x3482d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x3482d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3482d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3482d8: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x3482d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x3482dc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3482dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3482e0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x3482e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x3482e4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x3482e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3482e8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3482e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x3482ec: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3482ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3482f0:
    // 0x3482f0: 0x32420010  andi        $v0, $s2, 0x10
    ctx->pc = 0x3482f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
    // 0x3482f4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3482F4u;
    {
        const bool branch_taken_0x3482f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3482F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3482F4u;
        // 0x3482f8: 0x61880  sll         $v1, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3482f4) {
            ctx->pc = 0x348320u;
            goto label_348320;
        }
    }
    ctx->pc = 0x3482FCu;
    // 0x3482fc: 0x24c20009  addiu       $v0, $a2, 0x9
    ctx->pc = 0x3482fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 9));
    // 0x348300: 0x3a32821  addu        $a1, $sp, $v1
    ctx->pc = 0x348300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x348304: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x348304u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x348308: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x348308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x34830c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x34830cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x348310: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x348310u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x348314: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x348314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x348318: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x348318u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x34831c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x34831cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_348320:
    // 0x348320: 0x32420008  andi        $v0, $s2, 0x8
    ctx->pc = 0x348320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)8);
    // 0x348324: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x348324u;
    {
        const bool branch_taken_0x348324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x348328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348324u;
        // 0x348328: 0x61880  sll         $v1, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348324) {
            ctx->pc = 0x348350u;
            goto label_348350;
        }
    }
    ctx->pc = 0x34832Cu;
    // 0x34832c: 0x24c20009  addiu       $v0, $a2, 0x9
    ctx->pc = 0x34832cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 9));
    // 0x348330: 0x3a32821  addu        $a1, $sp, $v1
    ctx->pc = 0x348330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x348334: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x348334u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x348338: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x348338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x34833c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x34833cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x348340: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x348340u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x348344: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x348344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x348348: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x348348u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x34834c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x34834cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_348350:
    // 0x348350: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x348350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348354: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x348354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348358: 0xc0d0f36  jal         func_343CD8
    ctx->pc = 0x348358u;
    SET_GPR_U32(ctx, 31, 0x348360u);
    ctx->pc = 0x34835Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348358u;
    // 0x34835c: 0x27a60024  addiu       $a2, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343CD8u, 0x348358u, 0x348360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348360u;
label_348360:
    // 0x348360: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x348360u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348364: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x348364u;
    {
        const bool branch_taken_0x348364 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x348368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348364u;
        // 0x348368: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348364) {
            ctx->pc = 0x348374u;
            goto label_348374;
        }
    }
    ctx->pc = 0x34836Cu;
    // 0x34836c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x34836Cu;
    {
        const bool branch_taken_0x34836c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x348370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34836Cu;
        // 0x348370: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34836c) {
            ctx->pc = 0x348394u;
            goto label_348394;
        }
    }
    ctx->pc = 0x348374u;
label_348374:
    // 0x348374: 0xc0d0480  jal         func_341200
    ctx->pc = 0x348374u;
    SET_GPR_U32(ctx, 31, 0x34837Cu);
    ctx->pc = 0x348378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348374u;
    // 0x348378: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341200u, 0x348374u, 0x34837Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34837Cu;
label_34837c:
    // 0x34837c: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x34837cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
    // 0x348380: 0xc0d1054  jal         func_344150
    ctx->pc = 0x348380u;
    SET_GPR_U32(ctx, 31, 0x348388u);
    ctx->pc = 0x348384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348380u;
    // 0x348384: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344150u, 0x348380u, 0x348388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348388u;
label_348388:
    // 0x348388: 0xc0d3f08  jal         func_34FC20
    ctx->pc = 0x348388u;
    SET_GPR_U32(ctx, 31, 0x348390u);
    ctx->pc = 0x34838Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348388u;
    // 0x34838c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34FC20u, 0x348388u, 0x348390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348390u;
label_348390:
    // 0x348390: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x348390u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_348394:
    // 0x348394: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x348394u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x348398: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x348398u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x34839c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x34839cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3483a0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3483a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3483a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3483A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3483A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3483A4u;
        // 0x3483a8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3483A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3483ACu;
    // 0x3483ac: 0x0  nop
    ctx->pc = 0x3483acu;
    // NOP
    ctx->pc = 0x3483b0u;
}
