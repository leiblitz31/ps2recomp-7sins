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

// Function: sub_00216690
// Address: 0x216690 - 0x216740
void sub_00216690_0x216690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216690_0x216690");
#endif

    switch (ctx->pc) {
        case 0x216700u: goto label_216700;
        case 0x216720u: goto label_216720;
        default: break;
    }

    ctx->pc = 0x216690u;

    // 0x216690: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x216690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x216694: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x216694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x216698: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x216698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x21669c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x21669cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2166a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2166a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2166a4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2166A4u;
    {
        const bool branch_taken_0x2166a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2166a4) {
            ctx->pc = 0x216720u;
            goto label_216720;
        }
    }
    ctx->pc = 0x2166ACu;
    // 0x2166ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2166acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2166b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2166b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2166b4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2166B4u;
    {
        const bool branch_taken_0x2166b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2166b4) {
            ctx->pc = 0x216700u;
            goto label_216700;
        }
    }
    ctx->pc = 0x2166BCu;
    // 0x2166bc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2166bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2166c0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2166c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2166c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2166c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2166c8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2166c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2166cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2166ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2166d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2166d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2166d4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2166d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2166d8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2166d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2166dc: 0x330c3  sra         $a2, $v1, 3
    ctx->pc = 0x2166dcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 3));
    // 0x2166e0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2166E0u;
    {
        const bool branch_taken_0x2166e0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2166e0) {
            ctx->pc = 0x2166F0u;
            goto label_2166f0;
        }
    }
    ctx->pc = 0x2166E8u;
    // 0x2166e8: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x2166e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x2166ec: 0x230c3  sra         $a2, $v0, 3
    ctx->pc = 0x2166ecu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 3));
label_2166f0:
    // 0x2166f0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2166f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2166f4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2166f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2166f8: 0xc085ba0  jal         func_216E80
    ctx->pc = 0x2166F8u;
    SET_GPR_U32(ctx, 31, 0x216700u);
    ctx->pc = 0x216E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216E80u, 0x2166F8u, 0x216700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216700u;
label_216700:
    // 0x216700: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x216700u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x216704: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x216704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x216708: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x216708u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x21670c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21670Cu;
    {
        const bool branch_taken_0x21670c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x21670c) {
            ctx->pc = 0x216720u;
            goto label_216720;
        }
    }
    ctx->pc = 0x216714u;
    // 0x216714: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x216714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216718: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x216718u;
    SET_GPR_U32(ctx, 31, 0x216720u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x216718u, 0x216720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216720u;
label_216720:
    // 0x216720: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x216720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216724: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x216724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216728: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x216728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x21672c: 0x3e00008  jr          $ra
    ctx->pc = 0x21672Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21672Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216734u;
    // 0x216734: 0x0  nop
    ctx->pc = 0x216734u;
    // NOP
    // 0x216738: 0x0  nop
    ctx->pc = 0x216738u;
    // NOP
    // 0x21673c: 0x0  nop
    ctx->pc = 0x21673cu;
    // NOP
    ctx->pc = 0x216740u;
}
