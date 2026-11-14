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

// Function: sub_00310F88
// Address: 0x310f88 - 0x311050
void sub_00310F88_0x310f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00310F88_0x310f88");
#endif

    switch (ctx->pc) {
        case 0x310fa0u: goto label_310fa0;
        case 0x310fa8u: goto label_310fa8;
        case 0x310fd0u: goto label_310fd0;
        case 0x31103cu: goto label_31103c;
        default: break;
    }

    ctx->pc = 0x310f88u;

    // 0x310f88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x310f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x310f8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x310f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x310f90: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x310f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x310f94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x310f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x310f98: 0xc0c42a4  jal         func_310A90
    ctx->pc = 0x310F98u;
    SET_GPR_U32(ctx, 31, 0x310FA0u);
    ctx->pc = 0x310F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310F98u;
    // 0x310f9c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x310A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x310A90u, 0x310F98u, 0x310FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310FA0u;
label_310fa0:
    // 0x310fa0: 0xc0c42d2  jal         func_310B48
    ctx->pc = 0x310FA0u;
    SET_GPR_U32(ctx, 31, 0x310FA8u);
    ctx->pc = 0x310FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310FA0u;
    // 0x310fa4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x310B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x310B48u, 0x310FA0u, 0x310FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310FA8u;
label_310fa8:
    // 0x310fa8: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x310fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x310fac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x310facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310fb0: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x310fb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x310fb4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x310fb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x310fb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x310fb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x310fbc: 0x2442fde4  addiu       $v0, $v0, -0x21C
    ctx->pc = 0x310fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966756));
    // 0x310fc0: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x310fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x310fc4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x310fc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x310fc8: 0x80c43bc  j           func_310EF0
    ctx->pc = 0x310FC8u;
    ctx->pc = 0x310FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310FC8u;
    // 0x310fcc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x310EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x310EF0u, 0x310FC8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x310FD0u;
label_310fd0:
    // 0x310fd0: 0x2402c000  addiu       $v0, $zero, -0x4000
    ctx->pc = 0x310fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x310fd4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x310fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x310fd8: 0x421024  and         $v0, $v0, $v0
    ctx->pc = 0x310fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 2));
    // 0x310fdc: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x310fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x310fe0: 0x34c63fff  ori         $a2, $a2, 0x3FFF
    ctx->pc = 0x310fe0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16383);
    // 0x310fe4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x310fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x310fe8: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x310fe8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x310fec: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x310fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x310ff0: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x310ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x310ff4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x310ff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x310ff8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x310ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x310ffc: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x310ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x311000: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x311000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x311004: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x311004u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311008: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x311008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x31100c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x31100cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x311010: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x311010u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x311014: 0x350800ff  ori         $t0, $t0, 0xFF
    ctx->pc = 0x311014u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)255);
    // 0x311018: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x311018u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x31101c: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x31101cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x311020: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x311020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x311024: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x311024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x311028: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x311028u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x31102c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x31102cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311030: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x311030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x311034: 0xc0be260  jal         func_2F8980
    ctx->pc = 0x311034u;
    SET_GPR_U32(ctx, 31, 0x31103Cu);
    ctx->pc = 0x311038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311034u;
    // 0x311038: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F8980u, 0x311034u, 0x31103Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31103Cu;
label_31103c:
    // 0x31103c: 0x4430001  bgezl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x31103Cu;
    {
        const bool branch_taken_0x31103c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x31103c) {
            ctx->pc = 0x311040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31103Cu;
            // 0x311040: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x311044u;
            goto label_311044;
        }
    }
    ctx->pc = 0x311044u;
label_311044:
    // 0x311044: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x311044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x311048: 0x3e00008  jr          $ra
    ctx->pc = 0x311048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31104Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311048u;
        // 0x31104c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x311050u;
}
