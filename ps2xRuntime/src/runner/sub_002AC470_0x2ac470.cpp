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

// Function: sub_002AC470
// Address: 0x2ac470 - 0x2ac520
void sub_002AC470_0x2ac470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC470_0x2ac470");
#endif

    switch (ctx->pc) {
        case 0x2ac4e0u: goto label_2ac4e0;
        case 0x2ac500u: goto label_2ac500;
        default: break;
    }

    ctx->pc = 0x2ac470u;

    // 0x2ac470: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ac470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ac474: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ac474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ac478: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2ac478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2ac47c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2ac47cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2ac480: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2ac480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac484: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2AC484u;
    {
        const bool branch_taken_0x2ac484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac484) {
            ctx->pc = 0x2AC500u;
            goto label_2ac500;
        }
    }
    ctx->pc = 0x2AC48Cu;
    // 0x2ac48c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2ac48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac490: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2ac490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ac494: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2AC494u;
    {
        const bool branch_taken_0x2ac494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac494) {
            ctx->pc = 0x2AC4E0u;
            goto label_2ac4e0;
        }
    }
    ctx->pc = 0x2AC49Cu;
    // 0x2ac49c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2ac49cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac4a0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2ac4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac4a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2ac4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac4a8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2ac4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2ac4ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2ac4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac4b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2ac4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ac4b4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2ac4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ac4b8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2ac4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ac4bc: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x2ac4bcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2ac4c0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AC4C0u;
    {
        const bool branch_taken_0x2ac4c0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2ac4c0) {
            ctx->pc = 0x2AC4D0u;
            goto label_2ac4d0;
        }
    }
    ctx->pc = 0x2AC4C8u;
    // 0x2ac4c8: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x2ac4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2ac4cc: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x2ac4ccu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_2ac4d0:
    // 0x2ac4d0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2ac4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2ac4d4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2ac4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ac4d8: 0xc0ac240  jal         func_2B0900
    ctx->pc = 0x2AC4D8u;
    SET_GPR_U32(ctx, 31, 0x2AC4E0u);
    ctx->pc = 0x2B0900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0900u, 0x2AC4D8u, 0x2AC4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC4E0u;
label_2ac4e0:
    // 0x2ac4e0: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2ac4e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ac4e4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2ac4e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2ac4e8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2ac4e8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2ac4ec: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AC4ECu;
    {
        const bool branch_taken_0x2ac4ec = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2ac4ec) {
            ctx->pc = 0x2AC500u;
            goto label_2ac500;
        }
    }
    ctx->pc = 0x2AC4F4u;
    // 0x2ac4f4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2ac4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac4f8: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2AC4F8u;
    SET_GPR_U32(ctx, 31, 0x2AC500u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2AC4F8u, 0x2AC500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC500u;
label_2ac500:
    // 0x2ac500: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2ac500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac504: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ac504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ac508: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2ac508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ac50c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC50Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC50Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC514u;
    // 0x2ac514: 0x0  nop
    ctx->pc = 0x2ac514u;
    // NOP
    // 0x2ac518: 0x0  nop
    ctx->pc = 0x2ac518u;
    // NOP
    // 0x2ac51c: 0x0  nop
    ctx->pc = 0x2ac51cu;
    // NOP
    ctx->pc = 0x2ac520u;
}
