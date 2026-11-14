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

// Function: sub_00434770
// Address: 0x434770 - 0x434848
void sub_00434770_0x434770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00434770_0x434770");
#endif

    switch (ctx->pc) {
        case 0x43481cu: goto label_43481c;
        case 0x434824u: goto label_434824;
        case 0x43482cu: goto label_43482c;
        default: break;
    }

    ctx->pc = 0x434770u;

    // 0x434770: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x434770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x434774: 0x8f82bee0  lw          $v0, -0x4120($gp)
    ctx->pc = 0x434774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950624)));
    // 0x434778: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x434778u;
    {
        const bool branch_taken_0x434778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43477Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434778u;
        // 0x43477c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434778) {
            ctx->pc = 0x434834u;
            goto label_434834;
        }
    }
    ctx->pc = 0x434780u;
    // 0x434780: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x434780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x434784: 0x3c0d0062  lui         $t5, 0x62
    ctx->pc = 0x434784u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)98 << 16));
    // 0x434788: 0x246231d0  addiu       $v0, $v1, 0x31D0
    ctx->pc = 0x434788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12752));
    // 0x43478c: 0xdc6531d0  ld          $a1, 0x31D0($v1)
    ctx->pc = 0x43478cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6231D0u));
    // 0x434790: 0xdc440170  ld          $a0, 0x170($v0)
    ctx->pc = 0x434790u;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x623340u));
    // 0x434794: 0x3c0c0062  lui         $t4, 0x62
    ctx->pc = 0x434794u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)98 << 16));
    // 0x434798: 0xdc43ffb0  ld          $v1, -0x50($v0)
    ctx->pc = 0x434798u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x623180u));
    // 0x43479c: 0x30a501ff  andi        $a1, $a1, 0x1FF
    ctx->pc = 0x43479cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)511);
    // 0x4347a0: 0xdc46ffd8  ld          $a2, -0x28($v0)
    ctx->pc = 0x4347a0u;
    SET_GPR_U64(ctx, 6, FAST_READ64(0x6231A8u));
    // 0x4347a4: 0x308401ff  andi        $a0, $a0, 0x1FF
    ctx->pc = 0x4347a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)511);
    // 0x4347a8: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x4347a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x4347ac: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x4347acu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x4347b0: 0x25a23bc8  addiu       $v0, $t5, 0x3BC8
    ctx->pc = 0x4347b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 15304));
    // 0x4347b4: 0x52ac0  sll         $a1, $a1, 11
    ctx->pc = 0x4347b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 11));
    // 0x4347b8: 0x306301ff  andi        $v1, $v1, 0x1FF
    ctx->pc = 0x4347b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)511);
    // 0x4347bc: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x4347bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x4347c0: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x4347c0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x4347c4: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x4347c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x4347c8: 0x3c0a0062  lui         $t2, 0x62
    ctx->pc = 0x4347c8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)98 << 16));
    // 0x4347cc: 0x422c0  sll         $a0, $a0, 11
    ctx->pc = 0x4347ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 11));
    // 0x4347d0: 0x25873bd8  addiu       $a3, $t4, 0x3BD8
    ctx->pc = 0x4347d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), 15320));
    // 0x4347d4: 0x30c601ff  andi        $a2, $a2, 0x1FF
    ctx->pc = 0x4347d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)511);
    // 0x4347d8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4347d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x4347dc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x4347dcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x4347e0: 0x3c0b0062  lui         $t3, 0x62
    ctx->pc = 0x4347e0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)98 << 16));
    // 0x4347e4: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x4347e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
    // 0x4347e8: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x4347e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x4347ec: 0x25483be8  addiu       $t0, $t2, 0x3BE8
    ctx->pc = 0x4347ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), 15336));
    // 0x4347f0: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x4347f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x4347f4: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x4347f4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x4347f8: 0x632c0  sll         $a2, $a2, 11
    ctx->pc = 0x4347f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 11));
    // 0x4347fc: 0x25693bf8  addiu       $t1, $t3, 0x3BF8
    ctx->pc = 0x4347fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), 15352));
    // 0x434800: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x434800u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
    // 0x434804: 0xad260004  sw          $a2, 0x4($t1)
    ctx->pc = 0x434804u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 6));
    // 0x434808: 0xada03bc8  sw          $zero, 0x3BC8($t5)
    ctx->pc = 0x434808u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 15304), GPR_U32(ctx, 0));
    // 0x43480c: 0xad803bd8  sw          $zero, 0x3BD8($t4)
    ctx->pc = 0x43480cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 15320), GPR_U32(ctx, 0));
    // 0x434810: 0xad403be8  sw          $zero, 0x3BE8($t2)
    ctx->pc = 0x434810u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 15336), GPR_U32(ctx, 0));
    // 0x434814: 0xc10d0e8  jal         func_4343A0
    ctx->pc = 0x434814u;
    SET_GPR_U32(ctx, 31, 0x43481Cu);
    ctx->pc = 0x434818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x434814u;
    // 0x434818: 0xad603bf8  sw          $zero, 0x3BF8($t3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 11), 15352), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4343A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4343A0u, 0x434814u, 0x43481Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43481Cu;
label_43481c:
    // 0x43481c: 0xc10d160  jal         func_434580
    ctx->pc = 0x43481Cu;
    SET_GPR_U32(ctx, 31, 0x434824u);
    ctx->pc = 0x434820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43481Cu;
    // 0x434820: 0xaf82ae7c  sw          $v0, -0x5184($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946428), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x434580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x434580u, 0x43481Cu, 0x434824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x434824u;
label_434824:
    // 0x434824: 0xc10d09c  jal         func_434270
    ctx->pc = 0x434824u;
    SET_GPR_U32(ctx, 31, 0x43482Cu);
    ctx->pc = 0x434828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x434824u;
    // 0x434828: 0xaf82ae78  sw          $v0, -0x5188($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946424), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x434270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x434270u, 0x434824u, 0x43482Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43482Cu;
label_43482c:
    // 0x43482c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x43482Cu;
    {
        const bool branch_taken_0x43482c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x434830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43482Cu;
        // 0x434830: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43482c) {
            ctx->pc = 0x434838u;
            goto label_434838;
        }
    }
    ctx->pc = 0x434834u;
label_434834:
    // 0x434834: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x434834u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_434838:
    // 0x434838: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x434838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43483c: 0x3e00008  jr          $ra
    ctx->pc = 0x43483Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x434840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43483Cu;
        // 0x434840: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43483Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x434844u;
    // 0x434844: 0x0  nop
    ctx->pc = 0x434844u;
    // NOP
    ctx->pc = 0x434848u;
}
