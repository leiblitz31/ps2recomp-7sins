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

// Function: sub_0025F3C0
// Address: 0x25f3c0 - 0x25f470
void sub_0025F3C0_0x25f3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025F3C0_0x25f3c0");
#endif

    switch (ctx->pc) {
        case 0x25f430u: goto label_25f430;
        case 0x25f450u: goto label_25f450;
        default: break;
    }

    ctx->pc = 0x25f3c0u;

    // 0x25f3c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25f3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25f3c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25f3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25f3c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x25f3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25f3cc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x25f3ccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x25f3d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25f3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f3d4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x25F3D4u;
    {
        const bool branch_taken_0x25f3d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f3d4) {
            ctx->pc = 0x25F450u;
            goto label_25f450;
        }
    }
    ctx->pc = 0x25F3DCu;
    // 0x25f3dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25f3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f3e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x25f3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25f3e4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x25F3E4u;
    {
        const bool branch_taken_0x25f3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f3e4) {
            ctx->pc = 0x25F430u;
            goto label_25f430;
        }
    }
    ctx->pc = 0x25F3ECu;
    // 0x25f3ec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25f3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f3f0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x25f3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f3f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25f3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f3f8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x25f3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x25f3fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25f3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f400: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x25f400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25f404: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x25f404u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25f408: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x25f408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x25f40c: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x25f40cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x25f410: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25F410u;
    {
        const bool branch_taken_0x25f410 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x25f410) {
            ctx->pc = 0x25F420u;
            goto label_25f420;
        }
    }
    ctx->pc = 0x25F418u;
    // 0x25f418: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x25f418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x25f41c: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x25f41cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_25f420:
    // 0x25f420: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x25f420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x25f424: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x25f424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25f428: 0xc0985d8  jal         func_261760
    ctx->pc = 0x25F428u;
    SET_GPR_U32(ctx, 31, 0x25F430u);
    ctx->pc = 0x261760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261760u, 0x25F428u, 0x25F430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F430u;
label_25f430:
    // 0x25f430: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x25f430u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25f434: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x25f434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x25f438: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x25f438u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x25f43c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25F43Cu;
    {
        const bool branch_taken_0x25f43c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x25f43c) {
            ctx->pc = 0x25F450u;
            goto label_25f450;
        }
    }
    ctx->pc = 0x25F444u;
    // 0x25f444: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25f444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f448: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x25F448u;
    SET_GPR_U32(ctx, 31, 0x25F450u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x25F448u, 0x25F450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F450u;
label_25f450:
    // 0x25f450: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25f450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f454: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25f454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25f458: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x25f458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25f45c: 0x3e00008  jr          $ra
    ctx->pc = 0x25F45Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F45Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25F464u;
    // 0x25f464: 0x0  nop
    ctx->pc = 0x25f464u;
    // NOP
    // 0x25f468: 0x0  nop
    ctx->pc = 0x25f468u;
    // NOP
    // 0x25f46c: 0x0  nop
    ctx->pc = 0x25f46cu;
    // NOP
    ctx->pc = 0x25f470u;
}
