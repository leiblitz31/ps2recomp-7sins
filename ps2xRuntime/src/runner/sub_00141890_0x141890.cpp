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

// Function: sub_00141890
// Address: 0x141890 - 0x141940
void sub_00141890_0x141890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00141890_0x141890");
#endif

    switch (ctx->pc) {
        case 0x141900u: goto label_141900;
        case 0x141920u: goto label_141920;
        default: break;
    }

    ctx->pc = 0x141890u;

    // 0x141890: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x141890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x141894: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x141894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x141898: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x141898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x14189c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x14189cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1418a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1418a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1418a4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1418A4u;
    {
        const bool branch_taken_0x1418a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1418a4) {
            ctx->pc = 0x141920u;
            goto label_141920;
        }
    }
    ctx->pc = 0x1418ACu;
    // 0x1418ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1418acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1418b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1418b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1418b4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1418B4u;
    {
        const bool branch_taken_0x1418b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1418b4) {
            ctx->pc = 0x141900u;
            goto label_141900;
        }
    }
    ctx->pc = 0x1418BCu;
    // 0x1418bc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1418bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1418c0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1418c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1418c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1418c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1418c8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1418c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1418cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1418ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1418d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1418d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1418d4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1418d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1418d8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1418d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1418dc: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x1418dcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1418e0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1418E0u;
    {
        const bool branch_taken_0x1418e0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1418e0) {
            ctx->pc = 0x1418F0u;
            goto label_1418f0;
        }
    }
    ctx->pc = 0x1418E8u;
    // 0x1418e8: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x1418e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1418ec: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x1418ecu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_1418f0:
    // 0x1418f0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1418f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1418f4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1418f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1418f8: 0xc0508f8  jal         func_1423E0
    ctx->pc = 0x1418F8u;
    SET_GPR_U32(ctx, 31, 0x141900u);
    ctx->pc = 0x1423E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1423E0u, 0x1418F8u, 0x141900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141900u;
label_141900:
    // 0x141900: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x141900u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x141904: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x141904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x141908: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x141908u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x14190c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14190Cu;
    {
        const bool branch_taken_0x14190c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x14190c) {
            ctx->pc = 0x141920u;
            goto label_141920;
        }
    }
    ctx->pc = 0x141914u;
    // 0x141914: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x141914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141918: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x141918u;
    SET_GPR_U32(ctx, 31, 0x141920u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x141918u, 0x141920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141920u;
label_141920:
    // 0x141920: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x141920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141924: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x141924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141928: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x141928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14192c: 0x3e00008  jr          $ra
    ctx->pc = 0x14192Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14192Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141934u;
    // 0x141934: 0x0  nop
    ctx->pc = 0x141934u;
    // NOP
    // 0x141938: 0x0  nop
    ctx->pc = 0x141938u;
    // NOP
    // 0x14193c: 0x0  nop
    ctx->pc = 0x14193cu;
    // NOP
    ctx->pc = 0x141940u;
}
