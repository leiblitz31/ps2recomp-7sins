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

// Function: sub_00258660
// Address: 0x258660 - 0x258710
void sub_00258660_0x258660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258660_0x258660");
#endif

    switch (ctx->pc) {
        case 0x2586d0u: goto label_2586d0;
        case 0x2586f0u: goto label_2586f0;
        default: break;
    }

    ctx->pc = 0x258660u;

    // 0x258660: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x258660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x258664: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x258664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x258668: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x258668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25866c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x25866cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x258670: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x258670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258674: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x258674u;
    {
        const bool branch_taken_0x258674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x258674) {
            ctx->pc = 0x2586F0u;
            goto label_2586f0;
        }
    }
    ctx->pc = 0x25867Cu;
    // 0x25867c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25867cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258680: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x258680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x258684: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x258684u;
    {
        const bool branch_taken_0x258684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x258684) {
            ctx->pc = 0x2586D0u;
            goto label_2586d0;
        }
    }
    ctx->pc = 0x25868Cu;
    // 0x25868c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25868cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258690: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x258690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258694: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x258694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258698: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x258698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x25869c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25869cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2586a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2586a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2586a4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2586a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2586a8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2586a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2586ac: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x2586acu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2586b0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2586B0u;
    {
        const bool branch_taken_0x2586b0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2586b0) {
            ctx->pc = 0x2586C0u;
            goto label_2586c0;
        }
    }
    ctx->pc = 0x2586B8u;
    // 0x2586b8: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x2586b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2586bc: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x2586bcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_2586c0:
    // 0x2586c0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2586c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2586c4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2586c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2586c8: 0xc0971bc  jal         func_25C6F0
    ctx->pc = 0x2586C8u;
    SET_GPR_U32(ctx, 31, 0x2586D0u);
    ctx->pc = 0x25C6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C6F0u, 0x2586C8u, 0x2586D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2586D0u;
label_2586d0:
    // 0x2586d0: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2586d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2586d4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2586d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2586d8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2586d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2586dc: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2586DCu;
    {
        const bool branch_taken_0x2586dc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2586dc) {
            ctx->pc = 0x2586F0u;
            goto label_2586f0;
        }
    }
    ctx->pc = 0x2586E4u;
    // 0x2586e4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2586e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2586e8: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2586E8u;
    SET_GPR_U32(ctx, 31, 0x2586F0u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2586E8u, 0x2586F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2586F0u;
label_2586f0:
    // 0x2586f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2586f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2586f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2586f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2586f8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2586f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2586fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2586FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2586FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258704u;
    // 0x258704: 0x0  nop
    ctx->pc = 0x258704u;
    // NOP
    // 0x258708: 0x0  nop
    ctx->pc = 0x258708u;
    // NOP
    // 0x25870c: 0x0  nop
    ctx->pc = 0x25870cu;
    // NOP
    ctx->pc = 0x258710u;
}
