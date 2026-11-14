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

// Function: sub_003E00B0
// Address: 0x3e00b0 - 0x3e0128
void sub_003E00B0_0x3e00b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E00B0_0x3e00b0");
#endif

    switch (ctx->pc) {
        case 0x3e00b0u: goto label_3e00b0;
        case 0x3e00b4u: goto label_3e00b4;
        case 0x3e00b8u: goto label_3e00b8;
        case 0x3e00bcu: goto label_3e00bc;
        case 0x3e00c0u: goto label_3e00c0;
        case 0x3e00c4u: goto label_3e00c4;
        case 0x3e00c8u: goto label_3e00c8;
        case 0x3e00ccu: goto label_3e00cc;
        case 0x3e00d0u: goto label_3e00d0;
        case 0x3e00d4u: goto label_3e00d4;
        case 0x3e00d8u: goto label_3e00d8;
        case 0x3e00dcu: goto label_3e00dc;
        case 0x3e00e0u: goto label_3e00e0;
        case 0x3e00e4u: goto label_3e00e4;
        case 0x3e00e8u: goto label_3e00e8;
        case 0x3e00ecu: goto label_3e00ec;
        case 0x3e00f0u: goto label_3e00f0;
        case 0x3e00f4u: goto label_3e00f4;
        case 0x3e00f8u: goto label_3e00f8;
        case 0x3e00fcu: goto label_3e00fc;
        case 0x3e0100u: goto label_3e0100;
        case 0x3e0104u: goto label_3e0104;
        case 0x3e0108u: goto label_3e0108;
        case 0x3e010cu: goto label_3e010c;
        case 0x3e0110u: goto label_3e0110;
        case 0x3e0114u: goto label_3e0114;
        case 0x3e0118u: goto label_3e0118;
        case 0x3e011cu: goto label_3e011c;
        case 0x3e0120u: goto label_3e0120;
        case 0x3e0124u: goto label_3e0124;
        default: break;
    }

    ctx->pc = 0x3e00b0u;

label_3e00b0:
    // 0x3e00b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3e00b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3e00b4:
    // 0x3e00b4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3e00b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3e00b8:
    // 0x3e00b8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3e00b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3e00bc:
    // 0x3e00bc: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x3e00bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3e00c0:
    // 0x3e00c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3e00c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3e00c4:
    // 0x3e00c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e00c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e00c8:
    // 0x3e00c8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3e00c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_3e00cc:
    // 0x3e00cc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3e00ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e00d0:
    // 0x3e00d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e00d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3e00d4:
    // 0x3e00d4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3e00d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3e00d8:
    // 0x3e00d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3e00d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e00dc:
    // 0x3e00dc: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x3e00dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_3e00e0:
    // 0x3e00e0: 0x8d020028  lw          $v0, 0x28($t0)
    ctx->pc = 0x3e00e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 40)));
label_3e00e4:
    // 0x3e00e4: 0x40f809  jalr        $v0
label_3e00e8:
    if (ctx->pc == 0x3E00E8u) {
        ctx->pc = 0x3E00E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E00E4u;
        // 0x3e00e8: 0x8d040030  lw          $a0, 0x30($t0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E00ECu;
        goto label_3e00ec;
    }
    ctx->pc = 0x3E00E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E00ECu);
        ctx->pc = 0x3E00E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E00E4u;
        // 0x3e00e8: 0x8d040030  lw          $a0, 0x30($t0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E00E4u, 0x3E00ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E00ECu;
label_3e00ec:
    // 0x3e00ec: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_3e00f0:
    if (ctx->pc == 0x3E00F0u) {
        ctx->pc = 0x3E00F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E00ECu;
        // 0x3e00f0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E00F4u;
        goto label_3e00f4;
    }
    ctx->pc = 0x3E00ECu;
    {
        const bool branch_taken_0x3e00ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e00ec) {
            ctx->pc = 0x3E00F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E00ECu;
            // 0x3e00f0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E010Cu;
            goto label_3e010c;
        }
    }
    ctx->pc = 0x3E00F4u;
label_3e00f4:
    // 0x3e00f4: 0xa0510010  sb          $s1, 0x10($v0)
    ctx->pc = 0x3e00f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 17));
label_3e00f8:
    // 0x3e00f8: 0xa0520011  sb          $s2, 0x11($v0)
    ctx->pc = 0x3e00f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 17), (uint8_t)GPR_U32(ctx, 18));
label_3e00fc:
    // 0x3e00fc: 0xac530014  sw          $s3, 0x14($v0)
    ctx->pc = 0x3e00fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 19));
label_3e0100:
    // 0x3e0100: 0xac500018  sw          $s0, 0x18($v0)
    ctx->pc = 0x3e0100u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 16));
label_3e0104:
    // 0x3e0104: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3e0104u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_3e0108:
    // 0x3e0108: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3e0108u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3e010c:
    // 0x3e010c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3e010cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3e0110:
    // 0x3e0110: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3e0110u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e0114:
    // 0x3e0114: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3e0114u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e0118:
    // 0x3e0118: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e0118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e011c:
    // 0x3e011c: 0x3e00008  jr          $ra
label_3e0120:
    if (ctx->pc == 0x3E0120u) {
        ctx->pc = 0x3E0120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E011Cu;
        // 0x3e0120: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0124u;
        goto label_3e0124;
    }
    ctx->pc = 0x3E011Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E0120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E011Cu;
        // 0x3e0120: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E011Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E0124u;
label_3e0124:
    // 0x3e0124: 0x0  nop
    ctx->pc = 0x3e0124u;
    // NOP
    ctx->pc = 0x3e0128u;
}
