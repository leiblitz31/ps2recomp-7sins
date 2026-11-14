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

// Function: sub_00165660
// Address: 0x165660 - 0x165740
void sub_00165660_0x165660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165660_0x165660");
#endif

    switch (ctx->pc) {
        case 0x165698u: goto label_165698;
        case 0x1656acu: goto label_1656ac;
        case 0x1656c0u: goto label_1656c0;
        case 0x1656dcu: goto label_1656dc;
        case 0x1656ecu: goto label_1656ec;
        case 0x165708u: goto label_165708;
        case 0x165724u: goto label_165724;
        default: break;
    }

    ctx->pc = 0x165660u;

    // 0x165660: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x165660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x165664: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x165664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x165668: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x165668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x16566c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x16566cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x165670: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x165670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x165674: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x165674u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x165678: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x165678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x16567c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x16567cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x165680: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x165680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x165684: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x165684u;
    {
        const bool branch_taken_0x165684 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x165684) {
            ctx->pc = 0x1656F4u;
            goto label_1656f4;
        }
    }
    ctx->pc = 0x16568Cu;
    // 0x16568c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x16568cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x165690: 0xc0495d4  jal         func_125750
    ctx->pc = 0x165690u;
    SET_GPR_U32(ctx, 31, 0x165698u);
    ctx->pc = 0x125750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125750u, 0x165690u, 0x165698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165698u;
label_165698:
    // 0x165698: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x165698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x16569c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x16569cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1656a0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1656a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1656a4: 0xc08e514  jal         func_239450
    ctx->pc = 0x1656A4u;
    SET_GPR_U32(ctx, 31, 0x1656ACu);
    ctx->pc = 0x239450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239450u, 0x1656A4u, 0x1656ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1656ACu;
label_1656ac:
    // 0x1656ac: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1656acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1656b0: 0x2444008c  addiu       $a0, $v0, 0x8C
    ctx->pc = 0x1656b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
    // 0x1656b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1656b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1656b8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1656B8u;
    SET_GPR_U32(ctx, 31, 0x1656C0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1656B8u, 0x1656C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1656C0u;
label_1656c0:
    // 0x1656c0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1656c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1656c4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1656c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1656c8: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x1656c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1656cc: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1656ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1656d0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1656d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1656d4: 0xc08c378  jal         func_230DE0
    ctx->pc = 0x1656D4u;
    SET_GPR_U32(ctx, 31, 0x1656DCu);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x1656D4u, 0x1656DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1656DCu;
label_1656dc:
    // 0x1656dc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1656dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1656e0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1656e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1656e4: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x1656E4u;
    SET_GPR_U32(ctx, 31, 0x1656ECu);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x1656E4u, 0x1656ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1656ECu;
label_1656ec:
    // 0x1656ec: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1656ECu;
    {
        const bool branch_taken_0x1656ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1656ec) {
            ctx->pc = 0x165724u;
            goto label_165724;
        }
    }
    ctx->pc = 0x1656F4u;
label_1656f4:
    // 0x1656f4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1656f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1656f8: 0x2444008c  addiu       $a0, $v0, 0x8C
    ctx->pc = 0x1656f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
    // 0x1656fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1656fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165700: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x165700u;
    SET_GPR_U32(ctx, 31, 0x165708u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x165700u, 0x165708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165708u;
label_165708:
    // 0x165708: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x165708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16570c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x16570cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165710: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x165710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x165714: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x165714u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x165718: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x165718u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16571c: 0xc08c32c  jal         func_230CB0
    ctx->pc = 0x16571Cu;
    SET_GPR_U32(ctx, 31, 0x165724u);
    ctx->pc = 0x230CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230CB0u, 0x16571Cu, 0x165724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165724u;
label_165724:
    // 0x165724: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x165724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165728: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x165728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16572c: 0x3e00008  jr          $ra
    ctx->pc = 0x16572Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16572Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165734u;
    // 0x165734: 0x0  nop
    ctx->pc = 0x165734u;
    // NOP
    // 0x165738: 0x0  nop
    ctx->pc = 0x165738u;
    // NOP
    // 0x16573c: 0x0  nop
    ctx->pc = 0x16573cu;
    // NOP
    ctx->pc = 0x165740u;
}
