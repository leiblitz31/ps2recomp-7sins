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

// Function: sub_002228C0
// Address: 0x2228c0 - 0x222970
void sub_002228C0_0x2228c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002228C0_0x2228c0");
#endif

    switch (ctx->pc) {
        case 0x222930u: goto label_222930;
        case 0x222950u: goto label_222950;
        default: break;
    }

    ctx->pc = 0x2228c0u;

    // 0x2228c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2228c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2228c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2228c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2228c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2228c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2228cc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2228ccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2228d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2228d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2228d4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2228D4u;
    {
        const bool branch_taken_0x2228d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2228d4) {
            ctx->pc = 0x222950u;
            goto label_222950;
        }
    }
    ctx->pc = 0x2228DCu;
    // 0x2228dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2228dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2228e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2228e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2228e4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2228E4u;
    {
        const bool branch_taken_0x2228e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2228e4) {
            ctx->pc = 0x222930u;
            goto label_222930;
        }
    }
    ctx->pc = 0x2228ECu;
    // 0x2228ec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2228ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2228f0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2228f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2228f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2228f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2228f8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2228f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2228fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2228fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222900: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x222900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x222904: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x222904u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x222908: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x222908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22290c: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x22290cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x222910: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x222910u;
    {
        const bool branch_taken_0x222910 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x222910) {
            ctx->pc = 0x222920u;
            goto label_222920;
        }
    }
    ctx->pc = 0x222918u;
    // 0x222918: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x222918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x22291c: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x22291cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_222920:
    // 0x222920: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x222920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x222924: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x222924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x222928: 0xc089538  jal         func_2254E0
    ctx->pc = 0x222928u;
    SET_GPR_U32(ctx, 31, 0x222930u);
    ctx->pc = 0x2254E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2254E0u, 0x222928u, 0x222930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222930u;
label_222930:
    // 0x222930: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x222930u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x222934: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x222934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x222938: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x222938u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x22293c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22293Cu;
    {
        const bool branch_taken_0x22293c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x22293c) {
            ctx->pc = 0x222950u;
            goto label_222950;
        }
    }
    ctx->pc = 0x222944u;
    // 0x222944: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x222944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222948: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x222948u;
    SET_GPR_U32(ctx, 31, 0x222950u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x222948u, 0x222950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222950u;
label_222950:
    // 0x222950: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x222950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222954: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x222954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222958: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x222958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x22295c: 0x3e00008  jr          $ra
    ctx->pc = 0x22295Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22295Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222964u;
    // 0x222964: 0x0  nop
    ctx->pc = 0x222964u;
    // NOP
    // 0x222968: 0x0  nop
    ctx->pc = 0x222968u;
    // NOP
    // 0x22296c: 0x0  nop
    ctx->pc = 0x22296cu;
    // NOP
    ctx->pc = 0x222970u;
}
