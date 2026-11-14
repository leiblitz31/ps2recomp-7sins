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

// Function: sub_002DF8F0
// Address: 0x2df8f0 - 0x2dfab0
void sub_002DF8F0_0x2df8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF8F0_0x2df8f0");
#endif

    switch (ctx->pc) {
        case 0x2df950u: goto label_2df950;
        case 0x2df964u: goto label_2df964;
        case 0x2df974u: goto label_2df974;
        case 0x2df994u: goto label_2df994;
        case 0x2df9c8u: goto label_2df9c8;
        case 0x2dfa14u: goto label_2dfa14;
        case 0x2dfa2cu: goto label_2dfa2c;
        case 0x2dfa38u: goto label_2dfa38;
        case 0x2dfa50u: goto label_2dfa50;
        case 0x2dfa5cu: goto label_2dfa5c;
        case 0x2dfa74u: goto label_2dfa74;
        case 0x2dfa8cu: goto label_2dfa8c;
        case 0x2dfa98u: goto label_2dfa98;
        default: break;
    }

    ctx->pc = 0x2df8f0u;

    // 0x2df8f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2df8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2df8f4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2df8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2df8f8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2df8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df8fc: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2df8fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2df900: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF908u;
    // 0x2df908: 0x0  nop
    ctx->pc = 0x2df908u;
    // NOP
    // 0x2df90c: 0x0  nop
    ctx->pc = 0x2df90cu;
    // NOP
    // 0x2df910: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2df910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2df914: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2df914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2df918: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2df918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2df91c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2df91cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2df920: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2df920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df924: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2DF924u;
    {
        const bool branch_taken_0x2df924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df924) {
            ctx->pc = 0x2DF994u;
            goto label_2df994;
        }
    }
    ctx->pc = 0x2DF92Cu;
    // 0x2df92c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2df92cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2df930: 0x24636a00  addiu       $v1, $v1, 0x6A00
    ctx->pc = 0x2df930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27136));
    // 0x2df934: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2df934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df938: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2df938u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2df93c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2df93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df940: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x2df940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2df944: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2df944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2df948: 0xc0b7bec  jal         func_2DEFB0
    ctx->pc = 0x2DF948u;
    SET_GPR_U32(ctx, 31, 0x2DF950u);
    ctx->pc = 0x2DEFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DEFB0u, 0x2DF948u, 0x2DF950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF950u;
label_2df950:
    // 0x2df950: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2df950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df954: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x2df954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x2df958: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2df958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2df95c: 0xc0b7c74  jal         func_2DF1D0
    ctx->pc = 0x2DF95Cu;
    SET_GPR_U32(ctx, 31, 0x2DF964u);
    ctx->pc = 0x2DF1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1D0u, 0x2DF95Cu, 0x2DF964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF964u;
label_2df964:
    // 0x2df964: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2df964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df968: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2df968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df96c: 0xc091188  jal         func_244620
    ctx->pc = 0x2DF96Cu;
    SET_GPR_U32(ctx, 31, 0x2DF974u);
    ctx->pc = 0x244620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244620u, 0x2DF96Cu, 0x2DF974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF974u;
label_2df974:
    // 0x2df974: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2df974u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2df978: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2df978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2df97c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2df97cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2df980: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DF980u;
    {
        const bool branch_taken_0x2df980 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2df980) {
            ctx->pc = 0x2DF994u;
            goto label_2df994;
        }
    }
    ctx->pc = 0x2DF988u;
    // 0x2df988: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2df988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df98c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2DF98Cu;
    SET_GPR_U32(ctx, 31, 0x2DF994u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2DF98Cu, 0x2DF994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF994u;
label_2df994:
    // 0x2df994: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2df994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df998: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2df998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df99c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2df99cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2df9a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF9A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF9A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF9A8u;
    // 0x2df9a8: 0x0  nop
    ctx->pc = 0x2df9a8u;
    // NOP
    // 0x2df9ac: 0x0  nop
    ctx->pc = 0x2df9acu;
    // NOP
    // 0x2df9b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2df9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2df9b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2df9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2df9b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2df9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2df9bc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2df9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df9c0: 0xc0911a4  jal         func_244690
    ctx->pc = 0x2DF9C0u;
    SET_GPR_U32(ctx, 31, 0x2DF9C8u);
    ctx->pc = 0x244690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244690u, 0x2DF9C0u, 0x2DF9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF9C8u;
label_2df9c8:
    // 0x2df9c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2df9c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df9cc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2df9ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2df9d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF9D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF9D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF9D8u;
    // 0x2df9d8: 0x0  nop
    ctx->pc = 0x2df9d8u;
    // NOP
    // 0x2df9dc: 0x0  nop
    ctx->pc = 0x2df9dcu;
    // NOP
    // 0x2df9e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2df9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2df9e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2df9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2df9e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2df9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2df9ec: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2df9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2df9f0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2df9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2df9f4: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x2df9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x2df9f8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DF9F8u;
    {
        const bool branch_taken_0x2df9f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df9f8) {
            ctx->pc = 0x2DFA1Cu;
            goto label_2dfa1c;
        }
    }
    ctx->pc = 0x2DFA00u;
    // 0x2dfa00: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2dfa00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dfa04: 0x8f84c008  lw          $a0, -0x3FF8($gp)
    ctx->pc = 0x2dfa04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
    // 0x2dfa08: 0x8c450068  lw          $a1, 0x68($v0)
    ctx->pc = 0x2dfa08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x2dfa0c: 0xc0b7f0c  jal         func_2DFC30
    ctx->pc = 0x2DFA0Cu;
    SET_GPR_U32(ctx, 31, 0x2DFA14u);
    ctx->pc = 0x2DFC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFC30u, 0x2DFA0Cu, 0x2DFA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFA14u;
label_2dfa14:
    // 0x2dfa14: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2dfa14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dfa18: 0xac400068  sw          $zero, 0x68($v0)
    ctx->pc = 0x2dfa18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 0));
label_2dfa1c:
    // 0x2dfa1c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2dfa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dfa20: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x2dfa20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2dfa24: 0xc0b7f04  jal         func_2DFC10
    ctx->pc = 0x2DFA24u;
    SET_GPR_U32(ctx, 31, 0x2DFA2Cu);
    ctx->pc = 0x2DFC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFC10u, 0x2DFA24u, 0x2DFA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFA2Cu;
label_2dfa2c:
    // 0x2dfa2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dfa2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfa30: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2DFA30u;
    {
        const bool branch_taken_0x2dfa30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dfa30) {
            ctx->pc = 0x2DFA64u;
            goto label_2dfa64;
        }
    }
    ctx->pc = 0x2DFA38u;
label_2dfa38:
    // 0x2dfa38: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2dfa38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2dfa3c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DFA3Cu;
    {
        const bool branch_taken_0x2dfa3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dfa3c) {
            ctx->pc = 0x2DFA60u;
            goto label_2dfa60;
        }
    }
    ctx->pc = 0x2DFA44u;
    // 0x2dfa44: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2dfa44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2dfa48: 0xc0b7ef8  jal         func_2DFBE0
    ctx->pc = 0x2DFA48u;
    SET_GPR_U32(ctx, 31, 0x2DFA50u);
    ctx->pc = 0x2DFBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFBE0u, 0x2DFA48u, 0x2DFA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFA50u;
label_2dfa50:
    // 0x2dfa50: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2dfa50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2dfa54: 0xc119c5c  jal         func_467170
    ctx->pc = 0x2DFA54u;
    SET_GPR_U32(ctx, 31, 0x2DFA5Cu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2DFA54u, 0x2DFA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFA5Cu;
label_2dfa5c:
    // 0x2dfa5c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2dfa5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2dfa60:
    // 0x2dfa60: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2dfa60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2dfa64:
    // 0x2dfa64: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2dfa64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dfa68: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x2dfa68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2dfa6c: 0xc0b7ef0  jal         func_2DFBC0
    ctx->pc = 0x2DFA6Cu;
    SET_GPR_U32(ctx, 31, 0x2DFA74u);
    ctx->pc = 0x2DFBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFBC0u, 0x2DFA6Cu, 0x2DFA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFA74u;
label_2dfa74:
    // 0x2dfa74: 0x1602fff0  bne         $s0, $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2DFA74u;
    {
        const bool branch_taken_0x2dfa74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2dfa74) {
            ctx->pc = 0x2DFA38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dfa38;
        }
    }
    ctx->pc = 0x2DFA7Cu;
    // 0x2dfa7c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2dfa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dfa80: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x2dfa80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2dfa84: 0xc0b7eac  jal         func_2DFAB0
    ctx->pc = 0x2DFA84u;
    SET_GPR_U32(ctx, 31, 0x2DFA8Cu);
    ctx->pc = 0x2DFAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFAB0u, 0x2DFA84u, 0x2DFA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFA8Cu;
label_2dfa8c:
    // 0x2dfa8c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2dfa8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dfa90: 0xc0911bc  jal         func_2446F0
    ctx->pc = 0x2DFA90u;
    SET_GPR_U32(ctx, 31, 0x2DFA98u);
    ctx->pc = 0x2446F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2446F0u, 0x2DFA90u, 0x2DFA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFA98u;
label_2dfa98:
    // 0x2dfa98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2dfa98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dfa9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dfa9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dfaa0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2dfaa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2dfaa4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DFAA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DFAA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DFAACu;
    // 0x2dfaac: 0x0  nop
    ctx->pc = 0x2dfaacu;
    // NOP
    ctx->pc = 0x2dfab0u;
}
