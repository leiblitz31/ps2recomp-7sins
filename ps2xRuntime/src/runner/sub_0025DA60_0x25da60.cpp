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

// Function: sub_0025DA60
// Address: 0x25da60 - 0x25db70
void sub_0025DA60_0x25da60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025DA60_0x25da60");
#endif

    switch (ctx->pc) {
        case 0x25da8cu: goto label_25da8c;
        case 0x25da98u: goto label_25da98;
        case 0x25dabcu: goto label_25dabc;
        case 0x25dac8u: goto label_25dac8;
        case 0x25db14u: goto label_25db14;
        case 0x25db28u: goto label_25db28;
        case 0x25db44u: goto label_25db44;
        default: break;
    }

    ctx->pc = 0x25da60u;

    // 0x25da60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x25da60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x25da64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x25da64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x25da68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25da68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25da6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25da6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25da70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25da70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25da74: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x25da74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x25da78: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x25da78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x25da7c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x25da7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25da80: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x25da80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x25da84: 0xc042290  jal         func_108A40
    ctx->pc = 0x25DA84u;
    SET_GPR_U32(ctx, 31, 0x25DA8Cu);
    ctx->pc = 0x108A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A40u, 0x25DA84u, 0x25DA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DA8Cu;
label_25da8c:
    // 0x25da8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25da8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25da90: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x25DA90u;
    {
        const bool branch_taken_0x25da90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25da90) {
            ctx->pc = 0x25DB34u;
            goto label_25db34;
        }
    }
    ctx->pc = 0x25DA98u;
label_25da98:
    // 0x25da98: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x25da98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25da9c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x25da9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25daa0: 0x14620023  bne         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x25DAA0u;
    {
        const bool branch_taken_0x25daa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25daa0) {
            ctx->pc = 0x25DB30u;
            goto label_25db30;
        }
    }
    ctx->pc = 0x25DAA8u;
    // 0x25daa8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x25daa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25daac: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x25daacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x25dab0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25dab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dab4: 0xc04fe98  jal         func_13FA60
    ctx->pc = 0x25DAB4u;
    SET_GPR_U32(ctx, 31, 0x25DABCu);
    ctx->pc = 0x13FA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FA60u, 0x25DAB4u, 0x25DABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DABCu;
label_25dabc:
    // 0x25dabc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x25dabcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dac0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x25DAC0u;
    {
        const bool branch_taken_0x25dac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25dac0) {
            ctx->pc = 0x25DAF8u;
            goto label_25daf8;
        }
    }
    ctx->pc = 0x25DAC8u;
label_25dac8:
    // 0x25dac8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x25dac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x25dacc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x25daccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25dad0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25dad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25dad4: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x25dad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x25dad8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x25dad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25dadc: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25DADCu;
    {
        const bool branch_taken_0x25dadc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25dadc) {
            ctx->pc = 0x25DAF4u;
            goto label_25daf4;
        }
    }
    ctx->pc = 0x25DAE4u;
    // 0x25dae4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x25dae4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x25dae8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x25dae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25daec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25daecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25daf0: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x25daf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
label_25daf4:
    // 0x25daf4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x25daf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_25daf8:
    // 0x25daf8: 0x2e220009  sltiu       $v0, $s1, 0x9
    ctx->pc = 0x25daf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x25dafc: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x25DAFCu;
    {
        const bool branch_taken_0x25dafc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25dafc) {
            ctx->pc = 0x25DAC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25dac8;
        }
    }
    ctx->pc = 0x25DB04u;
    // 0x25db04: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x25db04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25db08: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x25db08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x25db0c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x25DB0Cu;
    SET_GPR_U32(ctx, 31, 0x25DB14u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x25DB0Cu, 0x25DB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DB14u;
label_25db14:
    // 0x25db14: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x25db14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25db18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25db18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25db1c: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x25db1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x25db20: 0xc096e98  jal         func_25BA60
    ctx->pc = 0x25DB20u;
    SET_GPR_U32(ctx, 31, 0x25DB28u);
    ctx->pc = 0x25BA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BA60u, 0x25DB20u, 0x25DB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DB28u;
label_25db28:
    // 0x25db28: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25DB28u;
    {
        const bool branch_taken_0x25db28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25db28) {
            ctx->pc = 0x25DB4Cu;
            goto label_25db4c;
        }
    }
    ctx->pc = 0x25DB30u;
label_25db30:
    // 0x25db30: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x25db30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_25db34:
    // 0x25db34: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x25db34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25db38: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x25db38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x25db3c: 0xc042288  jal         func_108A20
    ctx->pc = 0x25DB3Cu;
    SET_GPR_U32(ctx, 31, 0x25DB44u);
    ctx->pc = 0x108A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A20u, 0x25DB3Cu, 0x25DB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DB44u;
label_25db44:
    // 0x25db44: 0x1602ffd4  bne         $s0, $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x25DB44u;
    {
        const bool branch_taken_0x25db44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x25db44) {
            ctx->pc = 0x25DA98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25da98;
        }
    }
    ctx->pc = 0x25DB4Cu;
label_25db4c:
    // 0x25db4c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x25db4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25db50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25db50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25db54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25db54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25db58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25db58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25db5c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x25db5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x25db60: 0x3e00008  jr          $ra
    ctx->pc = 0x25DB60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25DB60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25DB68u;
    // 0x25db68: 0x0  nop
    ctx->pc = 0x25db68u;
    // NOP
    // 0x25db6c: 0x0  nop
    ctx->pc = 0x25db6cu;
    // NOP
    ctx->pc = 0x25db70u;
}
