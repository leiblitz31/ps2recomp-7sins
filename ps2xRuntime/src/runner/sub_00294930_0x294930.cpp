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

// Function: sub_00294930
// Address: 0x294930 - 0x2949e0
void sub_00294930_0x294930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294930_0x294930");
#endif

    switch (ctx->pc) {
        case 0x2949a0u: goto label_2949a0;
        case 0x2949c0u: goto label_2949c0;
        default: break;
    }

    ctx->pc = 0x294930u;

    // 0x294930: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x294930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x294934: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x294934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x294938: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x294938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x29493c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x29493cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x294940: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x294940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294944: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x294944u;
    {
        const bool branch_taken_0x294944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x294944) {
            ctx->pc = 0x2949C0u;
            goto label_2949c0;
        }
    }
    ctx->pc = 0x29494Cu;
    // 0x29494c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29494cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294950: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x294950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x294954: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x294954u;
    {
        const bool branch_taken_0x294954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x294954) {
            ctx->pc = 0x2949A0u;
            goto label_2949a0;
        }
    }
    ctx->pc = 0x29495Cu;
    // 0x29495c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x29495cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294960: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x294960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294964: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x294964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294968: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x294968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x29496c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29496cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294970: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x294970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x294974: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x294974u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x294978: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x294978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x29497c: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x29497cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x294980: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x294980u;
    {
        const bool branch_taken_0x294980 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x294980) {
            ctx->pc = 0x294990u;
            goto label_294990;
        }
    }
    ctx->pc = 0x294988u;
    // 0x294988: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x294988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x29498c: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x29498cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_294990:
    // 0x294990: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x294990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x294994: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x294994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x294998: 0xc0a5bc4  jal         func_296F10
    ctx->pc = 0x294998u;
    SET_GPR_U32(ctx, 31, 0x2949A0u);
    ctx->pc = 0x296F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296F10u, 0x294998u, 0x2949A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2949A0u;
label_2949a0:
    // 0x2949a0: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2949a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2949a4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2949a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2949a8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2949a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2949ac: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2949ACu;
    {
        const bool branch_taken_0x2949ac = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2949ac) {
            ctx->pc = 0x2949C0u;
            goto label_2949c0;
        }
    }
    ctx->pc = 0x2949B4u;
    // 0x2949b4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2949b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2949b8: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2949B8u;
    SET_GPR_U32(ctx, 31, 0x2949C0u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2949B8u, 0x2949C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2949C0u;
label_2949c0:
    // 0x2949c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2949c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2949c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2949c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2949c8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2949c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2949cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2949CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2949CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2949D4u;
    // 0x2949d4: 0x0  nop
    ctx->pc = 0x2949d4u;
    // NOP
    // 0x2949d8: 0x0  nop
    ctx->pc = 0x2949d8u;
    // NOP
    // 0x2949dc: 0x0  nop
    ctx->pc = 0x2949dcu;
    // NOP
    ctx->pc = 0x2949e0u;
}
