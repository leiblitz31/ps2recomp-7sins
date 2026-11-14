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

// Function: sub_00167230
// Address: 0x167230 - 0x1672d0
void sub_00167230_0x167230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00167230_0x167230");
#endif

    switch (ctx->pc) {
        case 0x167284u: goto label_167284;
        case 0x16729cu: goto label_16729c;
        case 0x1672c0u: goto label_1672c0;
        default: break;
    }

    ctx->pc = 0x167230u;

    // 0x167230: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x167230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x167234: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x167234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x167238: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x167238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x16723c: 0x8f83bab4  lw          $v1, -0x454C($gp)
    ctx->pc = 0x16723cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949556)));
    // 0x167240: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x167240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x167244: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x167244u;
    {
        const bool branch_taken_0x167244 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x167244) {
            ctx->pc = 0x167258u;
            goto label_167258;
        }
    }
    ctx->pc = 0x16724Cu;
    // 0x16724c: 0xaf80bab4  sw          $zero, -0x454C($gp)
    ctx->pc = 0x16724cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949556), GPR_U32(ctx, 0));
    // 0x167250: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x167250u;
    {
        const bool branch_taken_0x167250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167250) {
            ctx->pc = 0x167270u;
            goto label_167270;
        }
    }
    ctx->pc = 0x167258u;
label_167258:
    // 0x167258: 0x8f82bab4  lw          $v0, -0x454C($gp)
    ctx->pc = 0x167258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949556)));
    // 0x16725c: 0x28420026  slti        $v0, $v0, 0x26
    ctx->pc = 0x16725cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)38) ? 1 : 0);
    // 0x167260: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x167260u;
    {
        const bool branch_taken_0x167260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x167260) {
            ctx->pc = 0x167270u;
            goto label_167270;
        }
    }
    ctx->pc = 0x167268u;
    // 0x167268: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x167268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x16726c: 0xaf82bab4  sw          $v0, -0x454C($gp)
    ctx->pc = 0x16726cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949556), GPR_U32(ctx, 2));
label_167270:
    // 0x167270: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x167270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x167274: 0x8f85bab4  lw          $a1, -0x454C($gp)
    ctx->pc = 0x167274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949556)));
    // 0x167278: 0x8c440050  lw          $a0, 0x50($v0)
    ctx->pc = 0x167278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x16727c: 0xc0599f8  jal         func_1667E0
    ctx->pc = 0x16727Cu;
    SET_GPR_U32(ctx, 31, 0x167284u);
    ctx->pc = 0x1667E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1667E0u, 0x16727Cu, 0x167284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167284u;
label_167284:
    // 0x167284: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x167284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x167288: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x167288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16728c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x16728cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x167290: 0x27a60018  addiu       $a2, $sp, 0x18
    ctx->pc = 0x167290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x167294: 0xc08c704  jal         func_231C10
    ctx->pc = 0x167294u;
    SET_GPR_U32(ctx, 31, 0x16729Cu);
    ctx->pc = 0x231C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C10u, 0x167294u, 0x16729Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16729Cu;
label_16729c:
    // 0x16729c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x16729cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1672a0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1672a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1672a4: 0x8c450054  lw          $a1, 0x54($v0)
    ctx->pc = 0x1672a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x1672a8: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x1672a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1672ac: 0xc7ac0018  lwc1        $f12, 0x18($sp)
    ctx->pc = 0x1672acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1672b0: 0xc7ad001c  lwc1        $f13, 0x1C($sp)
    ctx->pc = 0x1672b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1672b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1672b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1672b8: 0xc08c208  jal         func_230820
    ctx->pc = 0x1672B8u;
    SET_GPR_U32(ctx, 31, 0x1672C0u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1672B8u, 0x1672C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1672C0u;
label_1672c0:
    // 0x1672c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1672c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1672c4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1672c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1672c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1672C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1672C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1672D0u;
}
