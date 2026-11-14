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

// Function: sub_003CD800
// Address: 0x3cd800 - 0x3cd8b0
void sub_003CD800_0x3cd800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CD800_0x3cd800");
#endif

    switch (ctx->pc) {
        case 0x3cd828u: goto label_3cd828;
        case 0x3cd860u: goto label_3cd860;
        default: break;
    }

    ctx->pc = 0x3cd800u;

    // 0x3cd800: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3cd800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3cd804: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3cd804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3cd808: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3cd808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3cd80c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3cd80cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd810: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3cd810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3cd814: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3cd814u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd818: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3cd818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3cd81c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x3cd81cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd820: 0xc0f52f8  jal         func_3D4BE0
    ctx->pc = 0x3CD820u;
    SET_GPR_U32(ctx, 31, 0x3CD828u);
    ctx->pc = 0x3CD824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD820u;
    // 0x3cd824: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4BE0u, 0x3CD820u, 0x3CD828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD828u;
label_3cd828:
    // 0x3cd828: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3cd828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3cd82c: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3CD82Cu;
    {
        const bool branch_taken_0x3cd82c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CD830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD82Cu;
        // 0x3cd830: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd82c) {
            ctx->pc = 0x3CD894u;
            goto label_3cd894;
        }
    }
    ctx->pc = 0x3CD834u;
    // 0x3cd834: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x3cd834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3cd838: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x3cd838u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x3cd83c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x3cd83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3cd840: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3cd840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd844: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x3cd844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3cd848: 0x24c6da28  addiu       $a2, $a2, -0x25D8
    ctx->pc = 0x3cd848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957608));
    // 0x3cd84c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3cd84cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x3cd850: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cd850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd854: 0xafb10008  sw          $s1, 0x8($sp)
    ctx->pc = 0x3cd854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 17));
    // 0x3cd858: 0xc0c6c6a  jal         func_31B1A8
    ctx->pc = 0x3CD858u;
    SET_GPR_U32(ctx, 31, 0x3CD860u);
    ctx->pc = 0x3CD85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD858u;
    // 0x3cd85c: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B1A8u, 0x3CD858u, 0x3CD860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD860u;
label_3cd860:
    // 0x3cd860: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x3cd860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3cd864: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x3cd864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3cd868: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3cd868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3cd86c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3cd86cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3cd870: 0x0  nop
    ctx->pc = 0x3cd870u;
    // NOP
    // 0x3cd874: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x3CD874u;
    {
        const bool branch_taken_0x3cd874 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3CD878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD874u;
        // 0x3cd878: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd874) {
            ctx->pc = 0x3CD890u;
            goto label_3cd890;
        }
    }
    ctx->pc = 0x3CD87Cu;
    // 0x3cd87c: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x3cd87cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x3cd880: 0x8c43b338  lw          $v1, -0x4CC8($v0)
    ctx->pc = 0x3cd880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947640)));
    // 0x3cd884: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3cd884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3cd888: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3CD888u;
    {
        const bool branch_taken_0x3cd888 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CD88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD888u;
        // 0x3cd88c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd888) {
            ctx->pc = 0x3CD894u;
            goto label_3cd894;
        }
    }
    ctx->pc = 0x3CD890u;
label_3cd890:
    // 0x3cd890: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3cd890u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cd894:
    // 0x3cd894: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3cd894u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3cd898: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3cd898u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3cd89c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3cd89cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3cd8a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3cd8a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3cd8a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3CD8A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CD8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD8A4u;
        // 0x3cd8a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CD8A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CD8ACu;
    // 0x3cd8ac: 0x0  nop
    ctx->pc = 0x3cd8acu;
    // NOP
    ctx->pc = 0x3cd8b0u;
}
