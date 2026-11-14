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

// Function: sub_002177D0
// Address: 0x2177d0 - 0x217880
void sub_002177D0_0x2177d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002177D0_0x2177d0");
#endif

    switch (ctx->pc) {
        case 0x217840u: goto label_217840;
        case 0x217860u: goto label_217860;
        default: break;
    }

    ctx->pc = 0x2177d0u;

    // 0x2177d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2177d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2177d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2177d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2177d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2177d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2177dc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2177dcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2177e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2177e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2177e4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2177E4u;
    {
        const bool branch_taken_0x2177e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2177e4) {
            ctx->pc = 0x217860u;
            goto label_217860;
        }
    }
    ctx->pc = 0x2177ECu;
    // 0x2177ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2177ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2177f0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2177f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2177f4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2177F4u;
    {
        const bool branch_taken_0x2177f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2177f4) {
            ctx->pc = 0x217840u;
            goto label_217840;
        }
    }
    ctx->pc = 0x2177FCu;
    // 0x2177fc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2177fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217800: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x217800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217804: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x217804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217808: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x217808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x21780c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x21780cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217810: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x217810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x217814: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x217814u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x217818: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x217818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21781c: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x21781cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x217820: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x217820u;
    {
        const bool branch_taken_0x217820 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x217820) {
            ctx->pc = 0x217830u;
            goto label_217830;
        }
    }
    ctx->pc = 0x217828u;
    // 0x217828: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x217828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x21782c: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x21782cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_217830:
    // 0x217830: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x217830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x217834: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x217834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x217838: 0xc086180  jal         func_218600
    ctx->pc = 0x217838u;
    SET_GPR_U32(ctx, 31, 0x217840u);
    ctx->pc = 0x218600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218600u, 0x217838u, 0x217840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217840u;
label_217840:
    // 0x217840: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x217840u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x217844: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x217844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x217848: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x217848u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x21784c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21784Cu;
    {
        const bool branch_taken_0x21784c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x21784c) {
            ctx->pc = 0x217860u;
            goto label_217860;
        }
    }
    ctx->pc = 0x217854u;
    // 0x217854: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x217854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217858: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x217858u;
    SET_GPR_U32(ctx, 31, 0x217860u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x217858u, 0x217860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217860u;
label_217860:
    // 0x217860: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x217860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217864: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x217864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217868: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x217868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x21786c: 0x3e00008  jr          $ra
    ctx->pc = 0x21786Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21786Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217874u;
    // 0x217874: 0x0  nop
    ctx->pc = 0x217874u;
    // NOP
    // 0x217878: 0x0  nop
    ctx->pc = 0x217878u;
    // NOP
    // 0x21787c: 0x0  nop
    ctx->pc = 0x21787cu;
    // NOP
    ctx->pc = 0x217880u;
}
