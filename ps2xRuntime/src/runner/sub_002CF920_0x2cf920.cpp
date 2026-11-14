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

// Function: sub_002CF920
// Address: 0x2cf920 - 0x2cf9d0
void sub_002CF920_0x2cf920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF920_0x2cf920");
#endif

    switch (ctx->pc) {
        case 0x2cf990u: goto label_2cf990;
        case 0x2cf9b0u: goto label_2cf9b0;
        default: break;
    }

    ctx->pc = 0x2cf920u;

    // 0x2cf920: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cf920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cf924: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cf924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cf928: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2cf928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2cf92c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2cf92cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2cf930: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cf930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf934: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2CF934u;
    {
        const bool branch_taken_0x2cf934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf934) {
            ctx->pc = 0x2CF9B0u;
            goto label_2cf9b0;
        }
    }
    ctx->pc = 0x2CF93Cu;
    // 0x2cf93c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cf93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf940: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2cf940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cf944: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2CF944u;
    {
        const bool branch_taken_0x2cf944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf944) {
            ctx->pc = 0x2CF990u;
            goto label_2cf990;
        }
    }
    ctx->pc = 0x2CF94Cu;
    // 0x2cf94c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2cf94cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf950: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2cf950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf954: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cf954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf958: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2cf958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2cf95c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cf95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf960: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2cf960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cf964: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2cf964u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cf968: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2cf968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2cf96c: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x2cf96cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2cf970: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CF970u;
    {
        const bool branch_taken_0x2cf970 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2cf970) {
            ctx->pc = 0x2CF980u;
            goto label_2cf980;
        }
    }
    ctx->pc = 0x2CF978u;
    // 0x2cf978: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x2cf978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2cf97c: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x2cf97cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_2cf980:
    // 0x2cf980: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2cf980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2cf984: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2cf984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2cf988: 0xc0b3f50  jal         func_2CFD40
    ctx->pc = 0x2CF988u;
    SET_GPR_U32(ctx, 31, 0x2CF990u);
    ctx->pc = 0x2CFD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFD40u, 0x2CF988u, 0x2CF990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF990u;
label_2cf990:
    // 0x2cf990: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2cf990u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cf994: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2cf994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2cf998: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2cf998u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2cf99c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CF99Cu;
    {
        const bool branch_taken_0x2cf99c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2cf99c) {
            ctx->pc = 0x2CF9B0u;
            goto label_2cf9b0;
        }
    }
    ctx->pc = 0x2CF9A4u;
    // 0x2cf9a4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2cf9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf9a8: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2CF9A8u;
    SET_GPR_U32(ctx, 31, 0x2CF9B0u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2CF9A8u, 0x2CF9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF9B0u;
label_2cf9b0:
    // 0x2cf9b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cf9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf9b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cf9b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf9b8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2cf9b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2cf9bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF9BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF9BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF9C4u;
    // 0x2cf9c4: 0x0  nop
    ctx->pc = 0x2cf9c4u;
    // NOP
    // 0x2cf9c8: 0x0  nop
    ctx->pc = 0x2cf9c8u;
    // NOP
    // 0x2cf9cc: 0x0  nop
    ctx->pc = 0x2cf9ccu;
    // NOP
    ctx->pc = 0x2cf9d0u;
}
