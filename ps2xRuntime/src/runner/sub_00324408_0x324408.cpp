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

// Function: sub_00324408
// Address: 0x324408 - 0x324490
void sub_00324408_0x324408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324408_0x324408");
#endif

    switch (ctx->pc) {
        case 0x324438u: goto label_324438;
        case 0x32444cu: goto label_32444c;
        default: break;
    }

    ctx->pc = 0x324408u;

    // 0x324408: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x324408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x32440c: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x32440cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x324410: 0x8c43b1f0  lw          $v1, -0x4E10($v0)
    ctx->pc = 0x324410u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61B1F0u));
    // 0x324414: 0x24050114  addiu       $a1, $zero, 0x114
    ctx->pc = 0x324414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
    // 0x324418: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x324418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x32441c: 0x37a70004  ori         $a3, $sp, 0x4
    ctx->pc = 0x32441cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x324420: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x324420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x324424: 0xc38021  addu        $s0, $a2, $v1
    ctx->pc = 0x324424u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x324428: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x324428u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32442c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32442cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x324430: 0xc103322  jal         func_40CC88
    ctx->pc = 0x324430u;
    SET_GPR_U32(ctx, 31, 0x324438u);
    ctx->pc = 0x324434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324430u;
    // 0x324434: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x324430u, 0x324438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324438u;
label_324438:
    // 0x324438: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x324438u;
    {
        const bool branch_taken_0x324438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32443Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324438u;
        // 0x32443c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324438) {
            ctx->pc = 0x324474u;
            goto label_324474;
        }
    }
    ctx->pc = 0x324440u;
    // 0x324440: 0x37a50008  ori         $a1, $sp, 0x8
    ctx->pc = 0x324440u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x324444: 0xc10480a  jal         func_412028
    ctx->pc = 0x324444u;
    SET_GPR_U32(ctx, 31, 0x32444Cu);
    ctx->pc = 0x324448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324444u;
    // 0x324448: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x324444u, 0x32444Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32444Cu;
label_32444c:
    // 0x32444c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x32444cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x324450: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x324450u;
    {
        const bool branch_taken_0x324450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x324454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324450u;
        // 0x324454: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324450) {
            ctx->pc = 0x324478u;
            goto label_324478;
        }
    }
    ctx->pc = 0x324458u;
    // 0x324458: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x324458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x32445c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x32445cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324460: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x324460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324464: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x324464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x324468: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x324468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x32446c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x32446Cu;
    {
        const bool branch_taken_0x32446c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32446Cu;
        // 0x324470: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32446c) {
            ctx->pc = 0x324478u;
            goto label_324478;
        }
    }
    ctx->pc = 0x324474u;
label_324474:
    // 0x324474: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x324474u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_324478:
    // 0x324478: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x324478u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32447c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x32447cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x324480: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x324480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x324484: 0x3e00008  jr          $ra
    ctx->pc = 0x324484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324484u;
        // 0x324488: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32448Cu;
    // 0x32448c: 0x0  nop
    ctx->pc = 0x32448cu;
    // NOP
    ctx->pc = 0x324490u;
}
