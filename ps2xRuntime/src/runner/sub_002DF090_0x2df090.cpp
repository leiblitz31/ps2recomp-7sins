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

// Function: sub_002DF090
// Address: 0x2df090 - 0x2df140
void sub_002DF090_0x2df090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF090_0x2df090");
#endif

    switch (ctx->pc) {
        case 0x2df100u: goto label_2df100;
        case 0x2df120u: goto label_2df120;
        default: break;
    }

    ctx->pc = 0x2df090u;

    // 0x2df090: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2df090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2df094: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2df094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2df098: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2df098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2df09c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2df09cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2df0a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2df0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df0a4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2DF0A4u;
    {
        const bool branch_taken_0x2df0a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df0a4) {
            ctx->pc = 0x2DF120u;
            goto label_2df120;
        }
    }
    ctx->pc = 0x2DF0ACu;
    // 0x2df0ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2df0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df0b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2df0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2df0b4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2DF0B4u;
    {
        const bool branch_taken_0x2df0b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df0b4) {
            ctx->pc = 0x2DF100u;
            goto label_2df100;
        }
    }
    ctx->pc = 0x2DF0BCu;
    // 0x2df0bc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2df0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df0c0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2df0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df0c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2df0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df0c8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2df0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2df0cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2df0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df0d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2df0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2df0d4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2df0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2df0d8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2df0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2df0dc: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x2df0dcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2df0e0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DF0E0u;
    {
        const bool branch_taken_0x2df0e0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2df0e0) {
            ctx->pc = 0x2DF0F0u;
            goto label_2df0f0;
        }
    }
    ctx->pc = 0x2DF0E8u;
    // 0x2df0e8: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x2df0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2df0ec: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x2df0ecu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_2df0f0:
    // 0x2df0f0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2df0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2df0f4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2df0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2df0f8: 0xc0b8a9c  jal         func_2E2A70
    ctx->pc = 0x2DF0F8u;
    SET_GPR_U32(ctx, 31, 0x2DF100u);
    ctx->pc = 0x2E2A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2A70u, 0x2DF0F8u, 0x2DF100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF100u;
label_2df100:
    // 0x2df100: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2df100u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2df104: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2df104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2df108: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2df108u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2df10c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DF10Cu;
    {
        const bool branch_taken_0x2df10c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2df10c) {
            ctx->pc = 0x2DF120u;
            goto label_2df120;
        }
    }
    ctx->pc = 0x2DF114u;
    // 0x2df114: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2df114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df118: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2DF118u;
    SET_GPR_U32(ctx, 31, 0x2DF120u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2DF118u, 0x2DF120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF120u;
label_2df120:
    // 0x2df120: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2df120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df124: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2df124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df128: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2df128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2df12c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF12Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF12Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF134u;
    // 0x2df134: 0x0  nop
    ctx->pc = 0x2df134u;
    // NOP
    // 0x2df138: 0x0  nop
    ctx->pc = 0x2df138u;
    // NOP
    // 0x2df13c: 0x0  nop
    ctx->pc = 0x2df13cu;
    // NOP
    ctx->pc = 0x2df140u;
}
