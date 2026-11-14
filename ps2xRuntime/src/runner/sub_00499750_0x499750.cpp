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

// Function: sub_00499750
// Address: 0x499750 - 0x499850
void sub_00499750_0x499750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00499750_0x499750");
#endif

    switch (ctx->pc) {
        case 0x499778u: goto label_499778;
        case 0x499784u: goto label_499784;
        case 0x49978cu: goto label_49978c;
        default: break;
    }

    ctx->pc = 0x499750u;

    // 0x499750: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x499750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x499754: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x499754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x499758: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x499758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49975c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x49975cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499760: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x499760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x499764: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x499764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x499768: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x499768u;
    {
        const bool branch_taken_0x499768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x499768) {
            ctx->pc = 0x499784u;
            goto label_499784;
        }
    }
    ctx->pc = 0x499770u;
    // 0x499770: 0xc1266f4  jal         func_499BD0
    ctx->pc = 0x499770u;
    SET_GPR_U32(ctx, 31, 0x499778u);
    ctx->pc = 0x499774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499770u;
    // 0x499774: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x499BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499BD0u, 0x499770u, 0x499778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x499778u;
label_499778:
    // 0x499778: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x499778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49977c: 0xc1266f4  jal         func_499BD0
    ctx->pc = 0x49977Cu;
    SET_GPR_U32(ctx, 31, 0x499784u);
    ctx->pc = 0x499780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49977Cu;
    // 0x499780: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x499BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499BD0u, 0x49977Cu, 0x499784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x499784u;
label_499784:
    // 0x499784: 0xc12a4ce  jal         func_4A9338
    ctx->pc = 0x499784u;
    SET_GPR_U32(ctx, 31, 0x49978Cu);
    ctx->pc = 0x499788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499784u;
    // 0x499788: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9338u, 0x499784u, 0x49978Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49978Cu;
label_49978c:
    // 0x49978c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x49978cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x499790: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x499790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x499794: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x499794u;
    {
        const bool branch_taken_0x499794 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x499794) {
            ctx->pc = 0x499798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x499794u;
            // 0x499798: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4997C4u;
            goto label_4997c4;
        }
    }
    ctx->pc = 0x49979Cu;
    // 0x49979c: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x49979cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x4997a0: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x4997a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4997a4: 0xa440000e  sh          $zero, 0xE($v0)
    ctx->pc = 0x4997a4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x4997a8: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x4997a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x4997ac: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x4997acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x4997b0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4997b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x4997b4: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x4997b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x4997b8: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x4997b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x4997bc: 0xa440000c  sh          $zero, 0xC($v0)
    ctx->pc = 0x4997bcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x4997c0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x4997c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4997c4:
    // 0x4997c4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x4997c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x4997c8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4997C8u;
    {
        const bool branch_taken_0x4997c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4997c8) {
            ctx->pc = 0x4997CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4997C8u;
            // 0x4997cc: 0xae000048  sw          $zero, 0x48($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4997E0u;
            goto label_4997e0;
        }
    }
    ctx->pc = 0x4997D0u;
    // 0x4997d0: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x4997d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x4997d4: 0xac420004  sw          $v0, 0x4($v0)
    ctx->pc = 0x4997d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 2));
    // 0x4997d8: 0xac420000  sw          $v0, 0x0($v0)
    ctx->pc = 0x4997d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 2));
    // 0x4997dc: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x4997dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
label_4997e0:
    // 0x4997e0: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x4997e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x4997e4: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x4997e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x4997e8: 0x8062c8c9  lb          $v0, -0x3737($v1)
    ctx->pc = 0x4997e8u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x5DC8C9u));
    // 0x4997ec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4997ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4997f0: 0x21700  sll         $v0, $v0, 28
    ctx->pc = 0x4997f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 28));
    // 0x4997f4: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x4997f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x4997f8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x4997f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4997fc: 0xa6030046  sh          $v1, 0x46($s0)
    ctx->pc = 0x4997fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 70), (uint16_t)GPR_U32(ctx, 3));
    // 0x499800: 0xa6000044  sh          $zero, 0x44($s0)
    ctx->pc = 0x499800u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 68), (uint16_t)GPR_U32(ctx, 0));
    // 0x499804: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x499804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x499808: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x499808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x49980c: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x49980cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x499810: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x499810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x499814: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x499814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x499818: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x499818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x49981c: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x49981cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x499820: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x499820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x499824: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x499824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x499828: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x499828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x49982c: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x49982cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x499830: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x499830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x499834: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x499834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x499838: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x499838u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x49983c: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x49983cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x499840: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x499840u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x499844: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x499844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x499848: 0x3e00008  jr          $ra
    ctx->pc = 0x499848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499848u;
        // 0x49984c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x499848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x499850u;
}
