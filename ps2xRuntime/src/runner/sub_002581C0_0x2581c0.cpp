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

// Function: sub_002581C0
// Address: 0x2581c0 - 0x258270
void sub_002581C0_0x2581c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002581C0_0x2581c0");
#endif

    switch (ctx->pc) {
        case 0x258230u: goto label_258230;
        case 0x258250u: goto label_258250;
        default: break;
    }

    ctx->pc = 0x2581c0u;

    // 0x2581c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2581c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2581c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2581c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2581c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2581c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2581cc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2581ccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2581d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2581d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2581d4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2581D4u;
    {
        const bool branch_taken_0x2581d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2581d4) {
            ctx->pc = 0x258250u;
            goto label_258250;
        }
    }
    ctx->pc = 0x2581DCu;
    // 0x2581dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2581dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2581e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2581e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2581e4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2581E4u;
    {
        const bool branch_taken_0x2581e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2581e4) {
            ctx->pc = 0x258230u;
            goto label_258230;
        }
    }
    ctx->pc = 0x2581ECu;
    // 0x2581ec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2581ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2581f0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2581f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2581f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2581f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2581f8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2581f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2581fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2581fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258200: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x258200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x258204: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x258204u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x258208: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x258208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x25820c: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x25820cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x258210: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x258210u;
    {
        const bool branch_taken_0x258210 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x258210) {
            ctx->pc = 0x258220u;
            goto label_258220;
        }
    }
    ctx->pc = 0x258218u;
    // 0x258218: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x258218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x25821c: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x25821cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_258220:
    // 0x258220: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x258220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x258224: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x258224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x258228: 0xc09716c  jal         func_25C5B0
    ctx->pc = 0x258228u;
    SET_GPR_U32(ctx, 31, 0x258230u);
    ctx->pc = 0x25C5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C5B0u, 0x258228u, 0x258230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258230u;
label_258230:
    // 0x258230: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x258230u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258234: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x258234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x258238: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x258238u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x25823c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25823Cu;
    {
        const bool branch_taken_0x25823c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x25823c) {
            ctx->pc = 0x258250u;
            goto label_258250;
        }
    }
    ctx->pc = 0x258244u;
    // 0x258244: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x258244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258248: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x258248u;
    SET_GPR_U32(ctx, 31, 0x258250u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x258248u, 0x258250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258250u;
label_258250:
    // 0x258250: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x258250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258254: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x258254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258258: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x258258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25825c: 0x3e00008  jr          $ra
    ctx->pc = 0x25825Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25825Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258264u;
    // 0x258264: 0x0  nop
    ctx->pc = 0x258264u;
    // NOP
    // 0x258268: 0x0  nop
    ctx->pc = 0x258268u;
    // NOP
    // 0x25826c: 0x0  nop
    ctx->pc = 0x25826cu;
    // NOP
    ctx->pc = 0x258270u;
}
