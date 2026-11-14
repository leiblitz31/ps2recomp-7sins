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

// Function: sub_002E48D0
// Address: 0x2e48d0 - 0x2e49b0
void sub_002E48D0_0x2e48d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E48D0_0x2e48d0");
#endif

    switch (ctx->pc) {
        case 0x2e48f4u: goto label_2e48f4;
        case 0x2e4904u: goto label_2e4904;
        case 0x2e491cu: goto label_2e491c;
        case 0x2e4994u: goto label_2e4994;
        default: break;
    }

    ctx->pc = 0x2e48d0u;

    // 0x2e48d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e48d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2e48d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e48d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e48d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e48d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e48dc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2e48dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2e48e0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2e48e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2e48e4: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x2e48e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x2e48e8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2e48e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2e48ec: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x2E48ECu;
    SET_GPR_U32(ctx, 31, 0x2E48F4u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2E48ECu, 0x2E48F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E48F4u;
label_2e48f4:
    // 0x2e48f4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2e48f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2e48f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e48f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e48fc: 0xc0400e0  jal         func_100380
    ctx->pc = 0x2E48FCu;
    SET_GPR_U32(ctx, 31, 0x2E4904u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2E48FCu, 0x2E4904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4904u;
label_2e4904:
    // 0x2e4904: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e4904u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4908: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E4908u;
    {
        const bool branch_taken_0x2e4908 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4908) {
            ctx->pc = 0x2E4920u;
            goto label_2e4920;
        }
    }
    ctx->pc = 0x2E4910u;
    // 0x2e4910: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e4910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4914: 0xc0b95dc  jal         func_2E5770
    ctx->pc = 0x2E4914u;
    SET_GPR_U32(ctx, 31, 0x2E491Cu);
    ctx->pc = 0x2E5770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5770u, 0x2E4914u, 0x2E491Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E491Cu;
label_2e491c:
    // 0x2e491c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e491cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e4920:
    // 0x2e4920: 0xafb0002c  sw          $s0, 0x2C($sp)
    ctx->pc = 0x2e4920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 16));
    // 0x2e4924: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2e4924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e4928: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x2e4928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x2e492c: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x2e492cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x2e4930: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2e4930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e4934: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x2e4934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4938: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2e4938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e493c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E493Cu;
    {
        const bool branch_taken_0x2e493c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2e493c) {
            ctx->pc = 0x2E4958u;
            goto label_2e4958;
        }
    }
    ctx->pc = 0x2E4944u;
    // 0x2e4944: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e4944u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4948: 0x0  nop
    ctx->pc = 0x2e4948u;
    // NOP
    // 0x2e494c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e494cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e4950: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E4950u;
    {
        const bool branch_taken_0x2e4950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4950) {
            ctx->pc = 0x2E4974u;
            goto label_2e4974;
        }
    }
    ctx->pc = 0x2E4958u;
label_2e4958:
    // 0x2e4958: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2e4958u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2e495c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e495cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e4960: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e4960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e4964: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e4964u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4968: 0x0  nop
    ctx->pc = 0x2e4968u;
    // NOP
    // 0x2e496c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e496cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e4970: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2e4970u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2e4974:
    // 0x2e4974: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e4974u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e4978: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x2e4978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x2e497c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2e497cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2e4980: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2e4980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e4984: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x2e4984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2e4988: 0x27a5002c  addiu       $a1, $sp, 0x2C
    ctx->pc = 0x2e4988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2e498c: 0xc0b926c  jal         func_2E49B0
    ctx->pc = 0x2E498Cu;
    SET_GPR_U32(ctx, 31, 0x2E4994u);
    ctx->pc = 0x2E49B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E49B0u, 0x2E498Cu, 0x2E4994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4994u;
label_2e4994:
    // 0x2e4994: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e4994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e4998: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e4998u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e499c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2e499cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e49a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E49A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E49A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E49A8u;
    // 0x2e49a8: 0x0  nop
    ctx->pc = 0x2e49a8u;
    // NOP
    // 0x2e49ac: 0x0  nop
    ctx->pc = 0x2e49acu;
    // NOP
    ctx->pc = 0x2e49b0u;
}
