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

// Function: sub_003F1A88
// Address: 0x3f1a88 - 0x3f1b60
void sub_003F1A88_0x3f1a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F1A88_0x3f1a88");
#endif

    switch (ctx->pc) {
        case 0x3f1ae4u: goto label_3f1ae4;
        case 0x3f1af0u: goto label_3f1af0;
        case 0x3f1af8u: goto label_3f1af8;
        case 0x3f1b0cu: goto label_3f1b0c;
        case 0x3f1b18u: goto label_3f1b18;
        case 0x3f1b20u: goto label_3f1b20;
        case 0x3f1b3cu: goto label_3f1b3c;
        default: break;
    }

    ctx->pc = 0x3f1a88u;

    // 0x3f1a88: 0xdc820108  ld          $v0, 0x108($a0)
    ctx->pc = 0x3f1a88u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 264)));
    // 0x3f1a8c: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x3f1a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x3f1a90: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3f1a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3f1a94: 0x3e00008  jr          $ra
    ctx->pc = 0x3F1A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F1A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1A94u;
        // 0x3f1a98: 0xfc820108  sd          $v0, 0x108($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 264), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F1A94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F1A9Cu;
    // 0x3f1a9c: 0x0  nop
    ctx->pc = 0x3f1a9cu;
    // NOP
    // 0x3f1aa0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3f1aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3f1aa4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3f1aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3f1aa8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3f1aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3f1aac: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3f1aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x3f1ab0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3f1ab0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1ab4: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x3f1ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x3f1ab8: 0xdc31e9f0  ld          $s1, -0x1610($at)
    ctx->pc = 0x3f1ab8u;
    SET_GPR_U64(ctx, 17, FAST_READ64(0x5FE9F0u));
    // 0x3f1abc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3f1abcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1ac0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3f1ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3f1ac4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x3f1ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1ac8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3f1ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3f1acc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f1accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1ad0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f1ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3f1ad4: 0x3410ff80  ori         $s0, $zero, 0xFF80
    ctx->pc = 0x3f1ad4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x3f1ad8: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x3f1ad8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x3f1adc: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3F1ADCu;
    SET_GPR_U32(ctx, 31, 0x3F1AE4u);
    ctx->pc = 0x3F1AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1ADCu;
    // 0x3f1ae0: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3F1ADCu, 0x3F1AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1AE4u;
label_3f1ae4:
    // 0x3f1ae4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f1ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1ae8: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3F1AE8u;
    SET_GPR_U32(ctx, 31, 0x3F1AF0u);
    ctx->pc = 0x3F1AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1AE8u;
    // 0x3f1aec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3F1AE8u, 0x3F1AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1AF0u;
label_3f1af0:
    // 0x3f1af0: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3F1AF0u;
    SET_GPR_U32(ctx, 31, 0x3F1AF8u);
    ctx->pc = 0x3F1AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1AF0u;
    // 0x3f1af4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3F1AF0u, 0x3F1AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1AF8u;
label_3f1af8:
    // 0x3f1af8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f1af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1afc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f1afcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f1b00: 0x44120800  mfc1        $s2, $f1
    ctx->pc = 0x3f1b00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x3f1b04: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3F1B04u;
    SET_GPR_U32(ctx, 31, 0x3F1B0Cu);
    ctx->pc = 0x3F1B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1B04u;
    // 0x3f1b08: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3F1B04u, 0x3F1B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1B0Cu;
label_3f1b0c:
    // 0x3f1b0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f1b0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1b10: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3F1B10u;
    SET_GPR_U32(ctx, 31, 0x3F1B18u);
    ctx->pc = 0x3F1B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1B10u;
    // 0x3f1b14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3F1B10u, 0x3F1B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1B18u;
label_3f1b18:
    // 0x3f1b18: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3F1B18u;
    SET_GPR_U32(ctx, 31, 0x3F1B20u);
    ctx->pc = 0x3F1B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1B18u;
    // 0x3f1b1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3F1B18u, 0x3F1B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1B20u;
label_3f1b20:
    // 0x3f1b20: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f1b20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f1b24: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x3f1b24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x3f1b28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3f1b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1b2c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3f1b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1b30: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3f1b30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1b34: 0xc0fc6d8  jal         func_3F1B60
    ctx->pc = 0x3F1B34u;
    SET_GPR_U32(ctx, 31, 0x3F1B3Cu);
    ctx->pc = 0x3F1B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1B34u;
    // 0x3f1b38: 0xe0382d  daddu       $a3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F1B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F1B60u, 0x3F1B34u, 0x3F1B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1B3Cu;
label_3f1b3c:
    // 0x3f1b3c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3f1b3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3f1b40: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3f1b40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3f1b44: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3f1b44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3f1b48: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3f1b48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f1b4c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3f1b4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f1b50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f1b50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f1b54: 0x3e00008  jr          $ra
    ctx->pc = 0x3F1B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F1B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1B54u;
        // 0x3f1b58: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F1B54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F1B5Cu;
    // 0x3f1b5c: 0x0  nop
    ctx->pc = 0x3f1b5cu;
    // NOP
    ctx->pc = 0x3f1b60u;
}
