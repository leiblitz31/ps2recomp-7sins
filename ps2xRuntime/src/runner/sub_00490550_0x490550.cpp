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

// Function: sub_00490550
// Address: 0x490550 - 0x490620
void sub_00490550_0x490550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00490550_0x490550");
#endif

    switch (ctx->pc) {
        case 0x490584u: goto label_490584;
        default: break;
    }

    ctx->pc = 0x490550u;

    // 0x490550: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x490550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x490554: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x490554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x490558: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x490558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x49055c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x49055cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x490560: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x490560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
    // 0x490564: 0x18400026  blez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x490564u;
    {
        const bool branch_taken_0x490564 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x490564) {
            ctx->pc = 0x490600u;
            goto label_490600;
        }
    }
    ctx->pc = 0x49056Cu;
    // 0x49056c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x49056cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x490570: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x490570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
    // 0x490574: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x490574u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x490578: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x490578u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49057c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x49057Cu;
    {
        const bool branch_taken_0x49057c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49057c) {
            ctx->pc = 0x490598u;
            goto label_490598;
        }
    }
    ctx->pc = 0x490584u;
label_490584:
    // 0x490584: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x490584u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x490588: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x490588u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x49058c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x49058cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x490590: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x490590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x490594: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x490594u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_490598:
    // 0x490598: 0x2e020003  sltiu       $v0, $s0, 0x3
    ctx->pc = 0x490598u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x49059c: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x49059Cu;
    {
        const bool branch_taken_0x49059c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x49059c) {
            ctx->pc = 0x490584u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_490584;
        }
    }
    ctx->pc = 0x4905A4u;
    // 0x4905a4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x4905a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4905a8: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x4905a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
    // 0x4905ac: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4905acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4905b0: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x4905b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x4905b4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x4905b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4905b8: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x4905b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
    // 0x4905bc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4905bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4905c0: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x4905c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x4905c4: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x4905c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x4905c8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x4905c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4905cc: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x4905ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
    // 0x4905d0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4905d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4905d4: 0xac440014  sw          $a0, 0x14($v0)
    ctx->pc = 0x4905d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 4));
    // 0x4905d8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x4905d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4905dc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x4905dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4905e0: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x4905e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
    // 0x4905e4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4905e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4905e8: 0xac440018  sw          $a0, 0x18($v0)
    ctx->pc = 0x4905e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 4));
    // 0x4905ec: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x4905ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x4905f0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x4905f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4905f4: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x4905f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
    // 0x4905f8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4905f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4905fc: 0xac44001c  sw          $a0, 0x1C($v0)
    ctx->pc = 0x4905fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
label_490600:
    // 0x490600: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x490600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x490604: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x490604u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x490608: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x490608u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49060c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x49060cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x490610: 0x3e00008  jr          $ra
    ctx->pc = 0x490610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x490610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x490618u;
    // 0x490618: 0x0  nop
    ctx->pc = 0x490618u;
    // NOP
    // 0x49061c: 0x0  nop
    ctx->pc = 0x49061cu;
    // NOP
    ctx->pc = 0x490620u;
}
