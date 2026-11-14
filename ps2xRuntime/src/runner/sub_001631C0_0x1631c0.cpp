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

// Function: sub_001631C0
// Address: 0x1631c0 - 0x163270
void sub_001631C0_0x1631c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001631C0_0x1631c0");
#endif

    switch (ctx->pc) {
        case 0x163230u: goto label_163230;
        case 0x163250u: goto label_163250;
        default: break;
    }

    ctx->pc = 0x1631c0u;

    // 0x1631c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1631c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1631c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1631c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1631c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1631c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1631cc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1631ccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1631d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1631d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1631d4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1631D4u;
    {
        const bool branch_taken_0x1631d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1631d4) {
            ctx->pc = 0x163250u;
            goto label_163250;
        }
    }
    ctx->pc = 0x1631DCu;
    // 0x1631dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1631dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1631e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1631e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1631e4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1631E4u;
    {
        const bool branch_taken_0x1631e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1631e4) {
            ctx->pc = 0x163230u;
            goto label_163230;
        }
    }
    ctx->pc = 0x1631ECu;
    // 0x1631ec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1631ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1631f0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1631f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1631f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1631f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1631f8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1631f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1631fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1631fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x163200: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x163200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x163204: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x163204u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x163208: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x163208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x16320c: 0x330c3  sra         $a2, $v1, 3
    ctx->pc = 0x16320cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 3));
    // 0x163210: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x163210u;
    {
        const bool branch_taken_0x163210 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x163210) {
            ctx->pc = 0x163220u;
            goto label_163220;
        }
    }
    ctx->pc = 0x163218u;
    // 0x163218: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x163218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x16321c: 0x230c3  sra         $a2, $v0, 3
    ctx->pc = 0x16321cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 3));
label_163220:
    // 0x163220: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x163220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x163224: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x163224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x163228: 0xc058ed0  jal         func_163B40
    ctx->pc = 0x163228u;
    SET_GPR_U32(ctx, 31, 0x163230u);
    ctx->pc = 0x163B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163B40u, 0x163228u, 0x163230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163230u;
label_163230:
    // 0x163230: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x163230u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x163234: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x163234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x163238: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x163238u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x16323c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16323Cu;
    {
        const bool branch_taken_0x16323c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x16323c) {
            ctx->pc = 0x163250u;
            goto label_163250;
        }
    }
    ctx->pc = 0x163244u;
    // 0x163244: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x163244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x163248: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x163248u;
    SET_GPR_U32(ctx, 31, 0x163250u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x163248u, 0x163250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163250u;
label_163250:
    // 0x163250: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x163250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x163254: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x163254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163258: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x163258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16325c: 0x3e00008  jr          $ra
    ctx->pc = 0x16325Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16325Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163264u;
    // 0x163264: 0x0  nop
    ctx->pc = 0x163264u;
    // NOP
    // 0x163268: 0x0  nop
    ctx->pc = 0x163268u;
    // NOP
    // 0x16326c: 0x0  nop
    ctx->pc = 0x16326cu;
    // NOP
    ctx->pc = 0x163270u;
}
