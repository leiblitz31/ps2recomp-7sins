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

// Function: sub_003FB098
// Address: 0x3fb098 - 0x3fb150
void sub_003FB098_0x3fb098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FB098_0x3fb098");
#endif

    switch (ctx->pc) {
        case 0x3fb0ccu: goto label_3fb0cc;
        case 0x3fb0e0u: goto label_3fb0e0;
        case 0x3fb0f0u: goto label_3fb0f0;
        case 0x3fb0f8u: goto label_3fb0f8;
        case 0x3fb120u: goto label_3fb120;
        case 0x3fb138u: goto label_3fb138;
        default: break;
    }

    ctx->pc = 0x3fb098u;

    // 0x3fb098: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3fb098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3fb09c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3fb09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3fb0a0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3fb0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3fb0a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3fb0a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb0a8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3fb0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3fb0ac: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3fb0acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb0b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3fb0b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb0b4: 0x12400020  beqz        $s2, . + 4 + (0x20 << 2)
    ctx->pc = 0x3FB0B4u;
    {
        const bool branch_taken_0x3fb0b4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FB0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB0B4u;
        // 0x3fb0b8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fb0b4) {
            ctx->pc = 0x3FB138u;
            goto label_3fb138;
        }
    }
    ctx->pc = 0x3FB0BCu;
    // 0x3fb0bc: 0x5200001f  beql        $s0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x3FB0BCu;
    {
        const bool branch_taken_0x3fb0bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fb0bc) {
            ctx->pc = 0x3FB0C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FB0BCu;
            // 0x3fb0c0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FB13Cu;
            goto label_3fb13c;
        }
    }
    ctx->pc = 0x3FB0C4u;
    // 0x3fb0c4: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3FB0C4u;
    SET_GPR_U32(ctx, 31, 0x3FB0CCu);
    ctx->pc = 0x3FB0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB0C4u;
    // 0x3fb0c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3FB0C4u, 0x3FB0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB0CCu;
label_3fb0cc:
    // 0x3fb0cc: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x3fb0ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x3fb0d0: 0xdc25f960  ld          $a1, -0x6A0($at)
    ctx->pc = 0x3fb0d0u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5FF960u));
    // 0x3fb0d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3fb0d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb0d8: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3FB0D8u;
    SET_GPR_U32(ctx, 31, 0x3FB0E0u);
    ctx->pc = 0x3FB0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB0D8u;
    // 0x3fb0dc: 0xe6000038  swc1        $f0, 0x38($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3FB0D8u, 0x3FB0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB0E0u;
label_3fb0e0:
    // 0x3fb0e0: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x3fb0e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x3fb0e4: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x3fb0e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x3fb0e8: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3FB0E8u;
    SET_GPR_U32(ctx, 31, 0x3FB0F0u);
    ctx->pc = 0x3FB0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB0E8u;
    // 0x3fb0ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3FB0E8u, 0x3FB0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB0F0u;
label_3fb0f0:
    // 0x3fb0f0: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3FB0F0u;
    SET_GPR_U32(ctx, 31, 0x3FB0F8u);
    ctx->pc = 0x3FB0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB0F0u;
    // 0x3fb0f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3FB0F0u, 0x3FB0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB0F8u;
label_3fb0f8:
    // 0x3fb0f8: 0xde020010  ld          $v0, 0x10($s0)
    ctx->pc = 0x3fb0f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3fb0fc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3fb0fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3fb100: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x3fb100u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x3fb104: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3fb104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3fb108: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3fb108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb10c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3fb10cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3fb110: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3fb110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb114: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x3fb114u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x3fb118: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x3FB118u;
    SET_GPR_U32(ctx, 31, 0x3FB120u);
    ctx->pc = 0x3FB11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB118u;
    // 0x3fb11c: 0xfe060148  sd          $a2, 0x148($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 328), GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x3FB118u, 0x3FB120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB120u;
label_3fb120:
    // 0x3fb120: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3FB120u;
    {
        const bool branch_taken_0x3fb120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FB124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB120u;
        // 0x3fb124: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fb120) {
            ctx->pc = 0x3FB13Cu;
            goto label_3fb13c;
        }
    }
    ctx->pc = 0x3FB128u;
    // 0x3fb128: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3fb128u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3fb12c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3fb12cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb130: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3FB130u;
    SET_GPR_U32(ctx, 31, 0x3FB138u);
    ctx->pc = 0x3FB134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB130u;
    // 0x3fb134: 0x24a5f738  addiu       $a1, $a1, -0x8C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3FB130u, 0x3FB138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB138u;
label_3fb138:
    // 0x3fb138: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3fb138u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3fb13c:
    // 0x3fb13c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3fb13cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3fb140: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3fb140u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3fb144: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3fb144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3fb148: 0x3e00008  jr          $ra
    ctx->pc = 0x3FB148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FB14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB148u;
        // 0x3fb14c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FB148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FB150u;
}
