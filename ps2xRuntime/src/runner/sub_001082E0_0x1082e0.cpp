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

// Function: sub_001082E0
// Address: 0x1082e0 - 0x108360
void sub_001082E0_0x1082e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001082E0_0x1082e0");
#endif

    switch (ctx->pc) {
        case 0x108314u: goto label_108314;
        case 0x108324u: goto label_108324;
        case 0x108344u: goto label_108344;
        default: break;
    }

    ctx->pc = 0x1082e0u;

    // 0x1082e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1082e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1082e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1082e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1082e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1082e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1082ec: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1082ecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1082f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1082f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1082f4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1082F4u;
    {
        const bool branch_taken_0x1082f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1082f4) {
            ctx->pc = 0x108344u;
            goto label_108344;
        }
    }
    ctx->pc = 0x1082FCu;
    // 0x1082fc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1082fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108300: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x108300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108304: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x108304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x108308: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x108308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x10830c: 0xc042104  jal         func_108410
    ctx->pc = 0x10830Cu;
    SET_GPR_U32(ctx, 31, 0x108314u);
    ctx->pc = 0x108410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108410u, 0x10830Cu, 0x108314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108314u;
label_108314:
    // 0x108314: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x108314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108318: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x108318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10831c: 0xc0420d8  jal         func_108360
    ctx->pc = 0x10831Cu;
    SET_GPR_U32(ctx, 31, 0x108324u);
    ctx->pc = 0x108360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108360u, 0x10831Cu, 0x108324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108324u;
label_108324:
    // 0x108324: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x108324u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x108328: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x108328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x10832c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x10832cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x108330: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x108330u;
    {
        const bool branch_taken_0x108330 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x108330) {
            ctx->pc = 0x108344u;
            goto label_108344;
        }
    }
    ctx->pc = 0x108338u;
    // 0x108338: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x108338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10833c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x10833Cu;
    SET_GPR_U32(ctx, 31, 0x108344u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x10833Cu, 0x108344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108344u;
label_108344:
    // 0x108344: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x108344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108348: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x108348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10834c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x10834cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x108350: 0x3e00008  jr          $ra
    ctx->pc = 0x108350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108358u;
    // 0x108358: 0x0  nop
    ctx->pc = 0x108358u;
    // NOP
    // 0x10835c: 0x0  nop
    ctx->pc = 0x10835cu;
    // NOP
    ctx->pc = 0x108360u;
}
