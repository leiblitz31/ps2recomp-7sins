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

// Function: sub_003F1DE8
// Address: 0x3f1de8 - 0x3f1ef8
void sub_003F1DE8_0x3f1de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F1DE8_0x3f1de8");
#endif

    switch (ctx->pc) {
        case 0x3f1e40u: goto label_3f1e40;
        case 0x3f1e78u: goto label_3f1e78;
        default: break;
    }

    ctx->pc = 0x3f1de8u;

    // 0x3f1de8: 0xdc820108  ld          $v0, 0x108($a0)
    ctx->pc = 0x3f1de8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 264)));
    // 0x3f1dec: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x3f1decu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x3f1df0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3f1df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3f1df4: 0x3e00008  jr          $ra
    ctx->pc = 0x3F1DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F1DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1DF4u;
        // 0x3f1df8: 0xfc820108  sd          $v0, 0x108($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 264), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F1DF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F1DFCu;
    // 0x3f1dfc: 0x0  nop
    ctx->pc = 0x3f1dfcu;
    // NOP
    // 0x3f1e00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3f1e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3f1e04: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3f1e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3f1e08: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3f1e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3f1e0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f1e0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1e10: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3f1e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3f1e14: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3f1e14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1e18: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3f1e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3f1e1c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3f1e1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1e20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f1e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3f1e24: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3f1e24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1e28: 0x16400007  bnez        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F1E28u;
    {
        const bool branch_taken_0x3f1e28 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F1E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1E28u;
        // 0x3f1e2c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1e28) {
            ctx->pc = 0x3F1E48u;
            goto label_3f1e48;
        }
    }
    ctx->pc = 0x3F1E30u;
    // 0x3f1e30: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f1e30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f1e34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f1e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1e38: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F1E38u;
    SET_GPR_U32(ctx, 31, 0x3F1E40u);
    ctx->pc = 0x3F1E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1E38u;
    // 0x3f1e3c: 0x24a5e790  addiu       $a1, $a1, -0x1870 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F1E38u, 0x3F1E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1E40u;
label_3f1e40:
    // 0x3f1e40: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x3F1E40u;
    {
        const bool branch_taken_0x3f1e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1E40u;
        // 0x3f1e44: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1e40) {
            ctx->pc = 0x3F1EE0u;
            goto label_3f1ee0;
        }
    }
    ctx->pc = 0x3F1E48u;
label_3f1e48:
    // 0x3f1e48: 0xde020108  ld          $v0, 0x108($s0)
    ctx->pc = 0x3f1e48u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x3f1e4c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x3f1e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3f1e50: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3f1e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3f1e54: 0xfe020108  sd          $v0, 0x108($s0)
    ctx->pc = 0x3f1e54u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 264), GPR_U64(ctx, 2));
    // 0x3f1e58: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x3f1e58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3f1e5c: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x3f1e5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3f1e60: 0x86230008  lh          $v1, 0x8($s1)
    ctx->pc = 0x3f1e60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3f1e64: 0xb2020223  sdl         $v0, 0x223($s0)
    ctx->pc = 0x3f1e64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 547); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3f1e68: 0xb602021c  sdr         $v0, 0x21C($s0)
    ctx->pc = 0x3f1e68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 540); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3f1e6c: 0xa6030224  sh          $v1, 0x224($s0)
    ctx->pc = 0x3f1e6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 548), (uint16_t)GPR_U32(ctx, 3));
    // 0x3f1e70: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3F1E70u;
    SET_GPR_U32(ctx, 31, 0x3F1E78u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3F1E70u, 0x3F1E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1E78u;
label_3f1e78:
    // 0x3f1e78: 0xe6000218  swc1        $f0, 0x218($s0)
    ctx->pc = 0x3f1e78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 536), bits); }
    // 0x3f1e7c: 0xa2120214  sb          $s2, 0x214($s0)
    ctx->pc = 0x3f1e7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 532), (uint8_t)GPR_U32(ctx, 18));
    // 0x3f1e80: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F1E80u;
    {
        const bool branch_taken_0x3f1e80 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1E80u;
        // 0x3f1e84: 0xde030108  ld          $v1, 0x108($s0) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1e80) {
            ctx->pc = 0x3F1E90u;
            goto label_3f1e90;
        }
    }
    ctx->pc = 0x3F1E88u;
    // 0x3f1e88: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x3f1e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3f1e8c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3f1e8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3f1e90:
    // 0x3f1e90: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F1E90u;
    {
        const bool branch_taken_0x3f1e90 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1E90u;
        // 0x3f1e94: 0xfe030108  sd          $v1, 0x108($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 264), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1e90) {
            ctx->pc = 0x3F1EB0u;
            goto label_3f1eb0;
        }
    }
    ctx->pc = 0x3F1E98u;
    // 0x3f1e98: 0x9202020a  lbu         $v0, 0x20A($s0)
    ctx->pc = 0x3f1e98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 522)));
    // 0x3f1e9c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3f1e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3f1ea0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x3F1EA0u;
    {
        const bool branch_taken_0x3f1ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f1ea0) {
            ctx->pc = 0x3F1EA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F1EA0u;
            // 0x3f1ea4: 0xde0200f8  ld          $v0, 0xF8($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 248)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F1ED0u;
            goto label_3f1ed0;
        }
    }
    ctx->pc = 0x3F1EA8u;
    // 0x3f1ea8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3F1EA8u;
    {
        const bool branch_taken_0x3f1ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1EA8u;
        // 0x3f1eac: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1ea8) {
            ctx->pc = 0x3F1EE0u;
            goto label_3f1ee0;
        }
    }
    ctx->pc = 0x3F1EB0u;
label_3f1eb0:
    // 0x3f1eb0: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x3f1eb0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3f1eb4: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x3f1eb4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3f1eb8: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F1EB8u;
    {
        const bool branch_taken_0x3f1eb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3f1eb8) {
            ctx->pc = 0x3F1EBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F1EB8u;
            // 0x3f1ebc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F1EE0u;
            goto label_3f1ee0;
        }
    }
    ctx->pc = 0x3F1EC0u;
    // 0x3f1ec0: 0x96220006  lhu         $v0, 0x6($s1)
    ctx->pc = 0x3f1ec0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x3f1ec4: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F1EC4u;
    {
        const bool branch_taken_0x3f1ec4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3f1ec4) {
            ctx->pc = 0x3F1EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F1EC4u;
            // 0x3f1ec8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F1EE0u;
            goto label_3f1ee0;
        }
    }
    ctx->pc = 0x3F1ECCu;
    // 0x3f1ecc: 0xde0200f8  ld          $v0, 0xF8($s0)
    ctx->pc = 0x3f1eccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 248)));
label_3f1ed0:
    // 0x3f1ed0: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x3f1ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x3f1ed4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3f1ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3f1ed8: 0xfe0200f8  sd          $v0, 0xF8($s0)
    ctx->pc = 0x3f1ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 248), GPR_U64(ctx, 2));
    // 0x3f1edc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3f1edcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3f1ee0:
    // 0x3f1ee0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3f1ee0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3f1ee4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3f1ee4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f1ee8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3f1ee8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f1eec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f1eecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f1ef0: 0x3e00008  jr          $ra
    ctx->pc = 0x3F1EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F1EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1EF0u;
        // 0x3f1ef4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F1EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F1EF8u;
}
