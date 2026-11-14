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

// Function: sub_001AF0B0
// Address: 0x1af0b0 - 0x1af160
void sub_001AF0B0_0x1af0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF0B0_0x1af0b0");
#endif

    switch (ctx->pc) {
        case 0x1af120u: goto label_1af120;
        case 0x1af140u: goto label_1af140;
        default: break;
    }

    ctx->pc = 0x1af0b0u;

    // 0x1af0b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1af0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1af0b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1af0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1af0b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1af0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1af0bc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1af0bcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1af0c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1af0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af0c4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1AF0C4u;
    {
        const bool branch_taken_0x1af0c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af0c4) {
            ctx->pc = 0x1AF140u;
            goto label_1af140;
        }
    }
    ctx->pc = 0x1AF0CCu;
    // 0x1af0cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1af0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af0d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1af0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1af0d4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1AF0D4u;
    {
        const bool branch_taken_0x1af0d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af0d4) {
            ctx->pc = 0x1AF120u;
            goto label_1af120;
        }
    }
    ctx->pc = 0x1AF0DCu;
    // 0x1af0dc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1af0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af0e0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1af0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af0e4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1af0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af0e8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1af0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1af0ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1af0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af0f0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1af0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1af0f4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1af0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1af0f8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1af0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1af0fc: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x1af0fcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1af100: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF100u;
    {
        const bool branch_taken_0x1af100 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1af100) {
            ctx->pc = 0x1AF110u;
            goto label_1af110;
        }
    }
    ctx->pc = 0x1AF108u;
    // 0x1af108: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x1af108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1af10c: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x1af10cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_1af110:
    // 0x1af110: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1af110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1af114: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1af114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1af118: 0xc06deac  jal         func_1B7AB0
    ctx->pc = 0x1AF118u;
    SET_GPR_U32(ctx, 31, 0x1AF120u);
    ctx->pc = 0x1B7AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7AB0u, 0x1AF118u, 0x1AF120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF120u;
label_1af120:
    // 0x1af120: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1af120u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af124: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1af124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1af128: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1af128u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1af12c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AF12Cu;
    {
        const bool branch_taken_0x1af12c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1af12c) {
            ctx->pc = 0x1AF140u;
            goto label_1af140;
        }
    }
    ctx->pc = 0x1AF134u;
    // 0x1af134: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1af134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af138: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1AF138u;
    SET_GPR_U32(ctx, 31, 0x1AF140u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1AF138u, 0x1AF140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF140u;
label_1af140:
    // 0x1af140: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1af140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af144: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1af144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af148: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1af148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1af14c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF14Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF154u;
    // 0x1af154: 0x0  nop
    ctx->pc = 0x1af154u;
    // NOP
    // 0x1af158: 0x0  nop
    ctx->pc = 0x1af158u;
    // NOP
    // 0x1af15c: 0x0  nop
    ctx->pc = 0x1af15cu;
    // NOP
    ctx->pc = 0x1af160u;
}
