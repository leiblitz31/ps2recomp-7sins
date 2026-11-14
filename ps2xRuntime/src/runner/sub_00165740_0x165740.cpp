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

// Function: sub_00165740
// Address: 0x165740 - 0x165820
void sub_00165740_0x165740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165740_0x165740");
#endif

    switch (ctx->pc) {
        case 0x165778u: goto label_165778;
        case 0x16578cu: goto label_16578c;
        case 0x1657a0u: goto label_1657a0;
        case 0x1657bcu: goto label_1657bc;
        case 0x1657ccu: goto label_1657cc;
        case 0x1657e8u: goto label_1657e8;
        case 0x165804u: goto label_165804;
        default: break;
    }

    ctx->pc = 0x165740u;

    // 0x165740: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x165740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x165744: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x165744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x165748: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x165748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x16574c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x16574cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x165750: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x165750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x165754: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x165754u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x165758: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x165758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x16575c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x16575cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x165760: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x165760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x165764: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x165764u;
    {
        const bool branch_taken_0x165764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x165764) {
            ctx->pc = 0x1657D4u;
            goto label_1657d4;
        }
    }
    ctx->pc = 0x16576Cu;
    // 0x16576c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x16576cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x165770: 0xc0495d4  jal         func_125750
    ctx->pc = 0x165770u;
    SET_GPR_U32(ctx, 31, 0x165778u);
    ctx->pc = 0x125750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125750u, 0x165770u, 0x165778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165778u;
label_165778:
    // 0x165778: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x165778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x16577c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x16577cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x165780: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x165780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x165784: 0xc08e514  jal         func_239450
    ctx->pc = 0x165784u;
    SET_GPR_U32(ctx, 31, 0x16578Cu);
    ctx->pc = 0x239450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239450u, 0x165784u, 0x16578Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16578Cu;
label_16578c:
    // 0x16578c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x16578cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165790: 0x2444008c  addiu       $a0, $v0, 0x8C
    ctx->pc = 0x165790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
    // 0x165794: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x165794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165798: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x165798u;
    SET_GPR_U32(ctx, 31, 0x1657A0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x165798u, 0x1657A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1657A0u;
label_1657a0:
    // 0x1657a0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1657a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1657a4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1657a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1657a8: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x1657a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1657ac: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1657acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1657b0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1657b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1657b4: 0xc08c378  jal         func_230DE0
    ctx->pc = 0x1657B4u;
    SET_GPR_U32(ctx, 31, 0x1657BCu);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x1657B4u, 0x1657BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1657BCu;
label_1657bc:
    // 0x1657bc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1657bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1657c0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1657c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1657c4: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x1657C4u;
    SET_GPR_U32(ctx, 31, 0x1657CCu);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x1657C4u, 0x1657CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1657CCu;
label_1657cc:
    // 0x1657cc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1657CCu;
    {
        const bool branch_taken_0x1657cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1657cc) {
            ctx->pc = 0x165804u;
            goto label_165804;
        }
    }
    ctx->pc = 0x1657D4u;
label_1657d4:
    // 0x1657d4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1657d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1657d8: 0x2444008c  addiu       $a0, $v0, 0x8C
    ctx->pc = 0x1657d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
    // 0x1657dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1657dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1657e0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1657E0u;
    SET_GPR_U32(ctx, 31, 0x1657E8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1657E0u, 0x1657E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1657E8u;
label_1657e8:
    // 0x1657e8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1657e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1657ec: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1657ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1657f0: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x1657f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1657f4: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x1657f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1657f8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1657f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1657fc: 0xc08c32c  jal         func_230CB0
    ctx->pc = 0x1657FCu;
    SET_GPR_U32(ctx, 31, 0x165804u);
    ctx->pc = 0x230CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230CB0u, 0x1657FCu, 0x165804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165804u;
label_165804:
    // 0x165804: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x165804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165808: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x165808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16580c: 0x3e00008  jr          $ra
    ctx->pc = 0x16580Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16580Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165814u;
    // 0x165814: 0x0  nop
    ctx->pc = 0x165814u;
    // NOP
    // 0x165818: 0x0  nop
    ctx->pc = 0x165818u;
    // NOP
    // 0x16581c: 0x0  nop
    ctx->pc = 0x16581cu;
    // NOP
    ctx->pc = 0x165820u;
}
