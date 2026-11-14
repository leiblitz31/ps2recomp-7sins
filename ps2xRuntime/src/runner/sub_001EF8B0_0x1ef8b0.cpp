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

// Function: sub_001EF8B0
// Address: 0x1ef8b0 - 0x1ef960
void sub_001EF8B0_0x1ef8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EF8B0_0x1ef8b0");
#endif

    switch (ctx->pc) {
        case 0x1ef8d4u: goto label_1ef8d4;
        default: break;
    }

    ctx->pc = 0x1ef8b0u;

    // 0x1ef8b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ef8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ef8b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ef8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ef8b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ef8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ef8bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ef8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ef8c0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1ef8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1ef8c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ef8c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef8c8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ef8c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef8cc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1EF8CCu;
    {
        const bool branch_taken_0x1ef8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef8cc) {
            ctx->pc = 0x1EF938u;
            goto label_1ef938;
        }
    }
    ctx->pc = 0x1EF8D4u;
label_1ef8d4:
    // 0x1ef8d4: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1ef8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1ef8d8: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1ef8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1ef8dc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1ef8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ef8e0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ef8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ef8e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ef8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ef8e8: 0xc4410050  lwc1        $f1, 0x50($v0)
    ctx->pc = 0x1ef8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ef8ec: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1ef8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1ef8f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ef8f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef8f4: 0x0  nop
    ctx->pc = 0x1ef8f4u;
    // NOP
    // 0x1ef8f8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1ef8f8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ef8fc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1EF8FCu;
    {
        const bool branch_taken_0x1ef8fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ef8fc) {
            ctx->pc = 0x1EF914u;
            goto label_1ef914;
        }
    }
    ctx->pc = 0x1EF904u;
    // 0x1ef904: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ef904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef908: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x1ef908u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ef90c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EF90Cu;
    {
        const bool branch_taken_0x1ef90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef90c) {
            ctx->pc = 0x1EF918u;
            goto label_1ef918;
        }
    }
    ctx->pc = 0x1EF914u;
label_1ef914:
    // 0x1ef914: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ef914u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ef918:
    // 0x1ef918: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x1ef918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x1ef91c: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x1ef91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1ef920: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1ef920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ef924: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1ef924u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ef928: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1ef928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1ef92c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1ef92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1ef930: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x1ef930u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ef934: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ef934u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1ef938:
    // 0x1ef938: 0x2e020006  sltiu       $v0, $s0, 0x6
    ctx->pc = 0x1ef938u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1ef93c: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1EF93Cu;
    {
        const bool branch_taken_0x1ef93c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef93c) {
            ctx->pc = 0x1EF8D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ef8d4;
        }
    }
    ctx->pc = 0x1EF944u;
    // 0x1ef944: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1ef944u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef948: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ef948u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ef94c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ef94cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ef950: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ef950u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef954: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1ef954u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ef958: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF960u;
}
