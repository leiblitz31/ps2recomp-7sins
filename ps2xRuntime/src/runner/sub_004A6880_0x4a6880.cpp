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

// Function: sub_004A6880
// Address: 0x4a6880 - 0x4a68f0
void sub_004A6880_0x4a6880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A6880_0x4a6880");
#endif

    switch (ctx->pc) {
        case 0x4a6880u: goto label_4a6880;
        case 0x4a6884u: goto label_4a6884;
        case 0x4a6888u: goto label_4a6888;
        case 0x4a688cu: goto label_4a688c;
        case 0x4a6890u: goto label_4a6890;
        case 0x4a6894u: goto label_4a6894;
        case 0x4a6898u: goto label_4a6898;
        case 0x4a689cu: goto label_4a689c;
        case 0x4a68a0u: goto label_4a68a0;
        case 0x4a68a4u: goto label_4a68a4;
        case 0x4a68a8u: goto label_4a68a8;
        case 0x4a68acu: goto label_4a68ac;
        case 0x4a68b0u: goto label_4a68b0;
        case 0x4a68b4u: goto label_4a68b4;
        case 0x4a68b8u: goto label_4a68b8;
        case 0x4a68bcu: goto label_4a68bc;
        case 0x4a68c0u: goto label_4a68c0;
        case 0x4a68c4u: goto label_4a68c4;
        case 0x4a68c8u: goto label_4a68c8;
        case 0x4a68ccu: goto label_4a68cc;
        case 0x4a68d0u: goto label_4a68d0;
        case 0x4a68d4u: goto label_4a68d4;
        case 0x4a68d8u: goto label_4a68d8;
        case 0x4a68dcu: goto label_4a68dc;
        case 0x4a68e0u: goto label_4a68e0;
        case 0x4a68e4u: goto label_4a68e4;
        case 0x4a68e8u: goto label_4a68e8;
        case 0x4a68ecu: goto label_4a68ec;
        default: break;
    }

    ctx->pc = 0x4a6880u;

label_4a6880:
    // 0x4a6880: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4a6880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4a6884:
    // 0x4a6884: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4a6884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4a6888:
    // 0x4a6888: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4a6888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4a688c:
    // 0x4a688c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4a688cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a6890:
    // 0x4a6890: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4a6890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4a6894:
    // 0x4a6894: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4a6894u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4a6898:
    // 0x4a6898: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
label_4a689c:
    if (ctx->pc == 0x4A689Cu) {
        ctx->pc = 0x4A689Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6898u;
        // 0x4a689c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A68A0u;
        goto label_4a68a0;
    }
    ctx->pc = 0x4A6898u;
    {
        const bool branch_taken_0x4a6898 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A689Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6898u;
        // 0x4a689c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6898) {
            ctx->pc = 0x4A68D0u;
            goto label_4a68d0;
        }
    }
    ctx->pc = 0x4A68A0u;
label_4a68a0:
    // 0x4a68a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4a68a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a68a4:
    // 0x4a68a4: 0x0  nop
    ctx->pc = 0x4a68a4u;
    // NOP
label_4a68a8:
    // 0x4a68a8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4a68a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4a68ac:
    // 0x4a68ac: 0x40f809  jalr        $v0
label_4a68b0:
    if (ctx->pc == 0x4A68B0u) {
        ctx->pc = 0x4A68B4u;
        goto label_4a68b4;
    }
    ctx->pc = 0x4A68ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A68B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A68ACu, 0x4A68B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A68B4u;
label_4a68b4:
    // 0x4a68b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_4a68b8:
    if (ctx->pc == 0x4A68B8u) {
        ctx->pc = 0x4A68B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A68B4u;
        // 0x4a68b8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A68BCu;
        goto label_4a68bc;
    }
    ctx->pc = 0x4A68B4u;
    {
        const bool branch_taken_0x4a68b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A68B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A68B4u;
        // 0x4a68b8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a68b4) {
            ctx->pc = 0x4A68C4u;
            goto label_4a68c4;
        }
    }
    ctx->pc = 0x4A68BCu;
label_4a68bc:
    // 0x4a68bc: 0x10000005  b           . + 4 + (0x5 << 2)
label_4a68c0:
    if (ctx->pc == 0x4A68C0u) {
        ctx->pc = 0x4A68C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A68BCu;
        // 0x4a68c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A68C4u;
        goto label_4a68c4;
    }
    ctx->pc = 0x4A68BCu;
    {
        const bool branch_taken_0x4a68bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A68C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A68BCu;
        // 0x4a68c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a68bc) {
            ctx->pc = 0x4A68D4u;
            goto label_4a68d4;
        }
    }
    ctx->pc = 0x4A68C4u;
label_4a68c4:
    // 0x4a68c4: 0x232102b  sltu        $v0, $s1, $s2
    ctx->pc = 0x4a68c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_4a68c8:
    // 0x4a68c8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_4a68cc:
    if (ctx->pc == 0x4A68CCu) {
        ctx->pc = 0x4A68CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A68C8u;
        // 0x4a68cc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A68D0u;
        goto label_4a68d0;
    }
    ctx->pc = 0x4A68C8u;
    {
        const bool branch_taken_0x4a68c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A68CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A68C8u;
        // 0x4a68cc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a68c8) {
            ctx->pc = 0x4A68A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a68a8;
        }
    }
    ctx->pc = 0x4A68D0u;
label_4a68d0:
    // 0x4a68d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a68d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a68d4:
    // 0x4a68d4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4a68d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a68d8:
    // 0x4a68d8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4a68d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a68dc:
    // 0x4a68dc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4a68dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a68e0:
    // 0x4a68e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a68e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a68e4:
    // 0x4a68e4: 0x3e00008  jr          $ra
label_4a68e8:
    if (ctx->pc == 0x4A68E8u) {
        ctx->pc = 0x4A68E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A68E4u;
        // 0x4a68e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A68ECu;
        goto label_4a68ec;
    }
    ctx->pc = 0x4A68E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A68E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A68E4u;
        // 0x4a68e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A68E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A68ECu;
label_4a68ec:
    // 0x4a68ec: 0x0  nop
    ctx->pc = 0x4a68ecu;
    // NOP
    ctx->pc = 0x4a68f0u;
}
