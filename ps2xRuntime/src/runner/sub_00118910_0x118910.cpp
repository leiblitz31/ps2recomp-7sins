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

// Function: sub_00118910
// Address: 0x118910 - 0x1189c0
void sub_00118910_0x118910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118910_0x118910");
#endif

    ctx->pc = 0x118910u;

    // 0x118910: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x118910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x118914: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x118914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x118918: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x118918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x11891c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x11891cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x118920: 0x8fb00020  lw          $s0, 0x20($sp)
    ctx->pc = 0x118920u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118924: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x118924u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x118928: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x118928u;
    {
        const bool branch_taken_0x118928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x118928) {
            ctx->pc = 0x11897Cu;
            goto label_11897c;
        }
    }
    ctx->pc = 0x118930u;
    // 0x118930: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x118930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118934: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x118934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x118938: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x118938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x11893c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x11893cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118940: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x118940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
    // 0x118944: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x118944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x118948: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x118948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x11894c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11894cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118950: 0xac430048  sw          $v1, 0x48($v0)
    ctx->pc = 0x118950u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 3));
    // 0x118954: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x118954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118958: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x118958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x11895c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x11895Cu;
    {
        const bool branch_taken_0x11895c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11895c) {
            ctx->pc = 0x1189A8u;
            goto label_1189a8;
        }
    }
    ctx->pc = 0x118964u;
    // 0x118964: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x118964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x118968: 0x24639850  addiu       $v1, $v1, -0x67B0
    ctx->pc = 0x118968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940752));
    // 0x11896c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11896cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118970: 0xac430048  sw          $v1, 0x48($v0)
    ctx->pc = 0x118970u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 3));
    // 0x118974: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x118974u;
    {
        const bool branch_taken_0x118974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x118974) {
            ctx->pc = 0x1189A8u;
            goto label_1189a8;
        }
    }
    ctx->pc = 0x11897Cu;
label_11897c:
    // 0x11897c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x11897cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x118980: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x118980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118984: 0xac430048  sw          $v1, 0x48($v0)
    ctx->pc = 0x118984u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 3));
    // 0x118988: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x118988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11898c: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x11898cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x118990: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x118990u;
    {
        const bool branch_taken_0x118990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x118990) {
            ctx->pc = 0x1189A8u;
            goto label_1189a8;
        }
    }
    ctx->pc = 0x118998u;
    // 0x118998: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x118998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x11899c: 0x24639850  addiu       $v1, $v1, -0x67B0
    ctx->pc = 0x11899cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940752));
    // 0x1189a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1189a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1189a4: 0xac430048  sw          $v1, 0x48($v0)
    ctx->pc = 0x1189a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 3));
label_1189a8:
    // 0x1189a8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1189a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1189ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1189acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1189b0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1189b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1189b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1189B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1189B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1189BCu;
    // 0x1189bc: 0x0  nop
    ctx->pc = 0x1189bcu;
    // NOP
    ctx->pc = 0x1189c0u;
}
