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

// Function: sub_003FB938
// Address: 0x3fb938 - 0x3fba10
void sub_003FB938_0x3fb938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FB938_0x3fb938");
#endif

    switch (ctx->pc) {
        case 0x3fb984u: goto label_3fb984;
        case 0x3fb990u: goto label_3fb990;
        case 0x3fb9a8u: goto label_3fb9a8;
        default: break;
    }

    ctx->pc = 0x3fb938u;

    // 0x3fb938: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3fb938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3fb93c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3fb93cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3fb940: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3fb940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3fb944: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3fb944u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb948: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3fb948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3fb94c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3fb94cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb950: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3fb950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3fb954: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3fb954u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb958: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3fb958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x3fb95c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3fb95cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb960: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3fb960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3fb964: 0x12200022  beqz        $s1, . + 4 + (0x22 << 2)
    ctx->pc = 0x3FB964u;
    {
        const bool branch_taken_0x3fb964 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FB968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB964u;
        // 0x3fb968: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fb964) {
            ctx->pc = 0x3FB9F0u;
            goto label_3fb9f0;
        }
    }
    ctx->pc = 0x3FB96Cu;
    // 0x3fb96c: 0x52000021  beql        $s0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x3FB96Cu;
    {
        const bool branch_taken_0x3fb96c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fb96c) {
            ctx->pc = 0x3FB970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FB96Cu;
            // 0x3fb970: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FB9F4u;
            goto label_3fb9f4;
        }
    }
    ctx->pc = 0x3FB974u;
    // 0x3fb974: 0x12600010  beqz        $s3, . + 4 + (0x10 << 2)
    ctx->pc = 0x3FB974u;
    {
        const bool branch_taken_0x3fb974 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FB978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB974u;
        // 0x3fb978: 0x24062000  addiu       $a2, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fb974) {
            ctx->pc = 0x3FB9B8u;
            goto label_3fb9b8;
        }
    }
    ctx->pc = 0x3FB97Cu;
    // 0x3fb97c: 0xc0f838e  jal         func_3E0E38
    ctx->pc = 0x3FB97Cu;
    SET_GPR_U32(ctx, 31, 0x3FB984u);
    ctx->pc = 0x3FB980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB97Cu;
    // 0x3fb980: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E0E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E0E38u, 0x3FB97Cu, 0x3FB984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB984u;
label_3fb984:
    // 0x3fb984: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3fb984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb988: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3FB988u;
    SET_GPR_U32(ctx, 31, 0x3FB990u);
    ctx->pc = 0x3FB98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB988u;
    // 0x3fb98c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3FB988u, 0x3FB990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB990u;
label_3fb990:
    // 0x3fb990: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x3fb990u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x3fb994: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3fb994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb998: 0xae220278  sw          $v0, 0x278($s1)
    ctx->pc = 0x3fb998u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 632), GPR_U32(ctx, 2));
    // 0x3fb99c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3fb99cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb9a0: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3FB9A0u;
    SET_GPR_U32(ctx, 31, 0x3FB9A8u);
    ctx->pc = 0x3FB9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB9A0u;
    // 0x3fb9a4: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3FB9A0u, 0x3FB9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB9A8u;
label_3fb9a8:
    // 0x3fb9a8: 0xde0300f0  ld          $v1, 0xF0($s0)
    ctx->pc = 0x3fb9a8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x3fb9ac: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x3fb9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x3fb9b0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3fb9b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3fb9b4: 0xfe0300f0  sd          $v1, 0xF0($s0)
    ctx->pc = 0x3fb9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 240), GPR_U64(ctx, 3));
label_3fb9b8:
    // 0x3fb9b8: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x3FB9B8u;
    {
        const bool branch_taken_0x3fb9b8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FB9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB9B8u;
        // 0x3fb9bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fb9b8) {
            ctx->pc = 0x3FB9DCu;
            goto label_3fb9dc;
        }
    }
    ctx->pc = 0x3FB9C0u;
    // 0x3fb9c0: 0x6a830007  ldl         $v1, 0x7($s4)
    ctx->pc = 0x3fb9c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3fb9c4: 0x6e830000  ldr         $v1, 0x0($s4)
    ctx->pc = 0x3fb9c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3fb9c8: 0x86840008  lh          $a0, 0x8($s4)
    ctx->pc = 0x3fb9c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x3fb9cc: 0xb2030067  sdl         $v1, 0x67($s0)
    ctx->pc = 0x3fb9ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3fb9d0: 0xb6030060  sdr         $v1, 0x60($s0)
    ctx->pc = 0x3fb9d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3fb9d4: 0xa6040068  sh          $a0, 0x68($s0)
    ctx->pc = 0x3fb9d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 4));
    // 0x3fb9d8: 0x52900a  movz        $s2, $v0, $s2
    ctx->pc = 0x3fb9d8u;
    if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
label_3fb9dc:
    // 0x3fb9dc: 0xde020010  ld          $v0, 0x10($s0)
    ctx->pc = 0x3fb9dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3fb9e0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3fb9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3fb9e4: 0xa6120026  sh          $s2, 0x26($s0)
    ctx->pc = 0x3fb9e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 18));
    // 0x3fb9e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3fb9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3fb9ec: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x3fb9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
label_3fb9f0:
    // 0x3fb9f0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3fb9f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3fb9f4:
    // 0x3fb9f4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3fb9f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3fb9f8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3fb9f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3fb9fc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3fb9fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3fba00: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3fba00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3fba04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3fba04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3fba08: 0x3e00008  jr          $ra
    ctx->pc = 0x3FBA08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FBA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBA08u;
        // 0x3fba0c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FBA08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FBA10u;
}
