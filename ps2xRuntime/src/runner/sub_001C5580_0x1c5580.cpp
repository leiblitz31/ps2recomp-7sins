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

// Function: sub_001C5580
// Address: 0x1c5580 - 0x1c6730
void sub_001C5580_0x1c5580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5580_0x1c5580");
#endif

    switch (ctx->pc) {
        case 0x1c559cu: goto label_1c559c;
        case 0x1c55dcu: goto label_1c55dc;
        case 0x1c564cu: goto label_1c564c;
        case 0x1c566cu: goto label_1c566c;
        case 0x1c56a8u: goto label_1c56a8;
        case 0x1c5730u: goto label_1c5730;
        case 0x1c5748u: goto label_1c5748;
        case 0x1c5770u: goto label_1c5770;
        case 0x1c5794u: goto label_1c5794;
        case 0x1c57b4u: goto label_1c57b4;
        case 0x1c57c4u: goto label_1c57c4;
        case 0x1c57dcu: goto label_1c57dc;
        case 0x1c57fcu: goto label_1c57fc;
        case 0x1c59e4u: goto label_1c59e4;
        case 0x1c59fcu: goto label_1c59fc;
        case 0x1c5a18u: goto label_1c5a18;
        case 0x1c5a54u: goto label_1c5a54;
        case 0x1c5a6cu: goto label_1c5a6c;
        case 0x1c5ac0u: goto label_1c5ac0;
        case 0x1c5ad4u: goto label_1c5ad4;
        case 0x1c5ae4u: goto label_1c5ae4;
        case 0x1c5b70u: goto label_1c5b70;
        case 0x1c5b80u: goto label_1c5b80;
        case 0x1c5c14u: goto label_1c5c14;
        case 0x1c5c20u: goto label_1c5c20;
        case 0x1c5c5cu: goto label_1c5c5c;
        case 0x1c5cb8u: goto label_1c5cb8;
        case 0x1c5d30u: goto label_1c5d30;
        case 0x1c5d74u: goto label_1c5d74;
        case 0x1c5dc8u: goto label_1c5dc8;
        case 0x1c5e4cu: goto label_1c5e4c;
        case 0x1c5e7cu: goto label_1c5e7c;
        case 0x1c5e88u: goto label_1c5e88;
        case 0x1c5ee0u: goto label_1c5ee0;
        case 0x1c5f00u: goto label_1c5f00;
        case 0x1c5f48u: goto label_1c5f48;
        case 0x1c5f68u: goto label_1c5f68;
        case 0x1c5f88u: goto label_1c5f88;
        case 0x1c5fa0u: goto label_1c5fa0;
        case 0x1c5fb8u: goto label_1c5fb8;
        case 0x1c5fccu: goto label_1c5fcc;
        case 0x1c5fd8u: goto label_1c5fd8;
        case 0x1c5fe8u: goto label_1c5fe8;
        case 0x1c5ffcu: goto label_1c5ffc;
        case 0x1c6018u: goto label_1c6018;
        case 0x1c6028u: goto label_1c6028;
        case 0x1c603cu: goto label_1c603c;
        case 0x1c605cu: goto label_1c605c;
        case 0x1c606cu: goto label_1c606c;
        case 0x1c6080u: goto label_1c6080;
        case 0x1c608cu: goto label_1c608c;
        case 0x1c60a4u: goto label_1c60a4;
        case 0x1c60ccu: goto label_1c60cc;
        case 0x1c60f8u: goto label_1c60f8;
        case 0x1c6130u: goto label_1c6130;
        case 0x1c6150u: goto label_1c6150;
        case 0x1c6174u: goto label_1c6174;
        case 0x1c6180u: goto label_1c6180;
        case 0x1c6198u: goto label_1c6198;
        case 0x1c61b0u: goto label_1c61b0;
        case 0x1c61c0u: goto label_1c61c0;
        case 0x1c61d0u: goto label_1c61d0;
        case 0x1c61e8u: goto label_1c61e8;
        case 0x1c61f8u: goto label_1c61f8;
        case 0x1c6208u: goto label_1c6208;
        case 0x1c6214u: goto label_1c6214;
        case 0x1c6238u: goto label_1c6238;
        case 0x1c6244u: goto label_1c6244;
        case 0x1c625cu: goto label_1c625c;
        case 0x1c6268u: goto label_1c6268;
        case 0x1c6280u: goto label_1c6280;
        case 0x1c62b4u: goto label_1c62b4;
        case 0x1c62e0u: goto label_1c62e0;
        case 0x1c6348u: goto label_1c6348;
        case 0x1c6388u: goto label_1c6388;
        case 0x1c64b0u: goto label_1c64b0;
        case 0x1c64c8u: goto label_1c64c8;
        case 0x1c651cu: goto label_1c651c;
        case 0x1c653cu: goto label_1c653c;
        case 0x1c6550u: goto label_1c6550;
        case 0x1c6568u: goto label_1c6568;
        case 0x1c65a8u: goto label_1c65a8;
        case 0x1c65c0u: goto label_1c65c0;
        case 0x1c65dcu: goto label_1c65dc;
        case 0x1c6610u: goto label_1c6610;
        case 0x1c6620u: goto label_1c6620;
        case 0x1c662cu: goto label_1c662c;
        case 0x1c6644u: goto label_1c6644;
        case 0x1c6654u: goto label_1c6654;
        case 0x1c6668u: goto label_1c6668;
        case 0x1c6680u: goto label_1c6680;
        case 0x1c6694u: goto label_1c6694;
        case 0x1c66a0u: goto label_1c66a0;
        case 0x1c66bcu: goto label_1c66bc;
        case 0x1c66e8u: goto label_1c66e8;
        default: break;
    }

    ctx->pc = 0x1c5580u;

    // 0x1c5580: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c5580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c5584: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c5584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c5588: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1c5588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1c558c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1c558cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5590: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1c5590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1c5594: 0xc064924  jal         func_192490
    ctx->pc = 0x1C5594u;
    SET_GPR_U32(ctx, 31, 0x1C559Cu);
    ctx->pc = 0x192490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192490u, 0x1C5594u, 0x1C559Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C559Cu;
label_1c559c:
    // 0x1c559c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1c559cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1c55a0: 0x24634930  addiu       $v1, $v1, 0x4930
    ctx->pc = 0x1c55a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18736));
    // 0x1c55a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c55a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c55a8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1c55a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1c55ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c55acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c55b0: 0xac4000d4  sw          $zero, 0xD4($v0)
    ctx->pc = 0x1c55b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 212), GPR_U32(ctx, 0));
    // 0x1c55b4: 0xaf80bb44  sw          $zero, -0x44BC($gp)
    ctx->pc = 0x1c55b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949700), GPR_U32(ctx, 0));
    // 0x1c55b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c55b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c55bc: 0xac400108  sw          $zero, 0x108($v0)
    ctx->pc = 0x1c55bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 264), GPR_U32(ctx, 0));
    // 0x1c55c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c55c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c55c4: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x1c55c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x1c55c8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1c55c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1c55cc: 0x24a57530  addiu       $a1, $a1, 0x7530
    ctx->pc = 0x1c55ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30000));
    // 0x1c55d0: 0x24460064  addiu       $a2, $v0, 0x64
    ctx->pc = 0x1c55d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x1c55d4: 0xc08e514  jal         func_239450
    ctx->pc = 0x1C55D4u;
    SET_GPR_U32(ctx, 31, 0x1C55DCu);
    ctx->pc = 0x239450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239450u, 0x1C55D4u, 0x1C55DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C55DCu;
label_1c55dc:
    // 0x1c55dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c55dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c55e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c55e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c55e4: 0xac430078  sw          $v1, 0x78($v0)
    ctx->pc = 0x1c55e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 3));
    // 0x1c55e8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c55e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c55ec: 0xac400104  sw          $zero, 0x104($v0)
    ctx->pc = 0x1c55ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 260), GPR_U32(ctx, 0));
    // 0x1c55f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c55f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c55f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c55f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c55f8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1c55f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c55fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C55FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C55FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5604u;
    // 0x1c5604: 0x0  nop
    ctx->pc = 0x1c5604u;
    // NOP
    // 0x1c5608: 0x0  nop
    ctx->pc = 0x1c5608u;
    // NOP
    // 0x1c560c: 0x0  nop
    ctx->pc = 0x1c560cu;
    // NOP
    // 0x1c5610: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c5610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c5614: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c5614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c5618: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1c5618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1c561c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1c561cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1c5620: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c5620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5624: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C5624u;
    {
        const bool branch_taken_0x1c5624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5624) {
            ctx->pc = 0x1C566Cu;
            goto label_1c566c;
        }
    }
    ctx->pc = 0x1C562Cu;
    // 0x1c562c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1c562cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1c5630: 0x24634930  addiu       $v1, $v1, 0x4930
    ctx->pc = 0x1c5630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18736));
    // 0x1c5634: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c5634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5638: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1c5638u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1c563c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1c563cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5640: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c5640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5644: 0xc064970  jal         func_1925C0
    ctx->pc = 0x1C5644u;
    SET_GPR_U32(ctx, 31, 0x1C564Cu);
    ctx->pc = 0x1925C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1925C0u, 0x1C5644u, 0x1C564Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C564Cu;
label_1c564c:
    // 0x1c564c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1c564cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c5650: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1c5650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1c5654: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1c5654u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1c5658: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5658u;
    {
        const bool branch_taken_0x1c5658 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1c5658) {
            ctx->pc = 0x1C566Cu;
            goto label_1c566c;
        }
    }
    ctx->pc = 0x1C5660u;
    // 0x1c5660: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1c5660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5664: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1C5664u;
    SET_GPR_U32(ctx, 31, 0x1C566Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1C5664u, 0x1C566Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C566Cu;
label_1c566c:
    // 0x1c566c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c566cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5670: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c5670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5674: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1c5674u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c5678: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5680u;
    // 0x1c5680: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c5680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c5684: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c5684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c5688: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1c5688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1c568c: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x1c568cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x1c5690: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c5690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5694: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1c5694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5698: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x1c5698u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c569c: 0x8c460038  lw          $a2, 0x38($v0)
    ctx->pc = 0x1c569cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1c56a0: 0xc064a4c  jal         func_192930
    ctx->pc = 0x1C56A0u;
    SET_GPR_U32(ctx, 31, 0x1C56A8u);
    ctx->pc = 0x192930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192930u, 0x1C56A0u, 0x1C56A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C56A8u;
label_1c56a8:
    // 0x1c56a8: 0x93a30020  lbu         $v1, 0x20($sp)
    ctx->pc = 0x1c56a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c56ac: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1c56acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c56b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c56b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c56b4: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C56B4u;
    {
        const bool branch_taken_0x1c56b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c56b4) {
            ctx->pc = 0x1C56DCu;
            goto label_1c56dc;
        }
    }
    ctx->pc = 0x1C56BCu;
    // 0x1c56bc: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x1c56bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x1c56c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c56c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c56c4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1c56c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c56c8: 0xe46000ec  swc1        $f0, 0xEC($v1)
    ctx->pc = 0x1c56c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 236), bits); }
    // 0x1c56cc: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x1c56ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x1c56d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c56d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c56d4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1c56d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c56d8: 0xe46000e8  swc1        $f0, 0xE8($v1)
    ctx->pc = 0x1c56d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 232), bits); }
label_1c56dc:
    // 0x1c56dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c56dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c56e0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1c56e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c56e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C56E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C56E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C56ECu;
    // 0x1c56ec: 0x0  nop
    ctx->pc = 0x1c56ecu;
    // NOP
    // 0x1c56f0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1c56f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x1c56f4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1c56f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1c56f8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1c56f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1c56fc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1c56fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1c5700: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1c5700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1c5704: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1c5704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1c5708: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1c5708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1c570c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c570cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c5710: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c5710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c5714: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c5714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c5718: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c5718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c571c: 0xafa40170  sw          $a0, 0x170($sp)
    ctx->pc = 0x1c571cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 4));
    // 0x1c5720: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x1c5720u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x1c5724: 0x24847560  addiu       $a0, $a0, 0x7560
    ctx->pc = 0x1c5724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30048));
    // 0x1c5728: 0xc0ac004  jal         func_2B0010
    ctx->pc = 0x1C5728u;
    SET_GPR_U32(ctx, 31, 0x1C5730u);
    ctx->pc = 0x2B0010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0010u, 0x1C5728u, 0x1C5730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5730u;
label_1c5730:
    // 0x1c5730: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x1c5730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c5734: 0xac620108  sw          $v0, 0x108($v1)
    ctx->pc = 0x1c5734u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 264), GPR_U32(ctx, 2));
    // 0x1c5738: 0x8fa60170  lw          $a2, 0x170($sp)
    ctx->pc = 0x1c5738u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c573c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1c573cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5740: 0xc064a74  jal         func_1929D0
    ctx->pc = 0x1C5740u;
    SET_GPR_U32(ctx, 31, 0x1C5748u);
    ctx->pc = 0x1929D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1929D0u, 0x1C5740u, 0x1C5748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5748u;
label_1c5748:
    // 0x1c5748: 0xa3a2016f  sb          $v0, 0x16F($sp)
    ctx->pc = 0x1c5748u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 367), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c574c: 0x93a4016f  lbu         $a0, 0x16F($sp)
    ctx->pc = 0x1c574cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 367)));
    // 0x1c5750: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x1c5750u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1c5754: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c5754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5758: 0x14a203e4  bne         $a1, $v0, . + 4 + (0x3E4 << 2)
    ctx->pc = 0x1C5758u;
    {
        const bool branch_taken_0x1c5758 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c5758) {
            ctx->pc = 0x1C66ECu;
            goto label_1c66ec;
        }
    }
    ctx->pc = 0x1C5760u;
    // 0x1c5760: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x1c5760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c5764: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c5764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5768: 0xc064e10  jal         func_193840
    ctx->pc = 0x1C5768u;
    SET_GPR_U32(ctx, 31, 0x1C5770u);
    ctx->pc = 0x193840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193840u, 0x1C5768u, 0x1C5770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5770u;
label_1c5770:
    // 0x1c5770: 0x3c0542c8  lui         $a1, 0x42C8
    ctx->pc = 0x1c5770u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17096 << 16));
    // 0x1c5774: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1c5774u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5778: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x1c5778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c577c: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1c577cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x1c5780: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x1c5780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c5784: 0xe4800050  swc1        $f0, 0x50($a0)
    ctx->pc = 0x1c5784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
    // 0x1c5788: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x1c5788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c578c: 0xc0723dc  jal         func_1C8F70
    ctx->pc = 0x1C578Cu;
    SET_GPR_U32(ctx, 31, 0x1C5794u);
    ctx->pc = 0x1C8F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8F70u, 0x1C578Cu, 0x1C5794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5794u;
label_1c5794:
    // 0x1c5794: 0x3c04bf80  lui         $a0, 0xBF80
    ctx->pc = 0x1c5794u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49024 << 16));
    // 0x1c5798: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1c5798u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c579c: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x1c579cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c57a0: 0xe4400100  swc1        $f0, 0x100($v0)
    ctx->pc = 0x1c57a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
    // 0x1c57a4: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1c57a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c57a8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1c57a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c57ac: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x1C57ACu;
    SET_GPR_U32(ctx, 31, 0x1C57B4u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x1C57ACu, 0x1C57B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C57B4u;
label_1c57b4:
    // 0x1c57b4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1c57b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c57b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c57b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c57bc: 0xc0400e0  jal         func_100380
    ctx->pc = 0x1C57BCu;
    SET_GPR_U32(ctx, 31, 0x1C57C4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x1C57BCu, 0x1C57C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C57C4u;
label_1c57c4:
    // 0x1c57c4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1c57c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c57c8: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C57C8u;
    {
        const bool branch_taken_0x1c57c8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c57c8) {
            ctx->pc = 0x1C57E0u;
            goto label_1c57e0;
        }
    }
    ctx->pc = 0x1C57D0u;
    // 0x1c57d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c57d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c57d4: 0xc071b84  jal         func_1C6E10
    ctx->pc = 0x1C57D4u;
    SET_GPR_U32(ctx, 31, 0x1C57DCu);
    ctx->pc = 0x1C6E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6E10u, 0x1C57D4u, 0x1C57DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C57DCu;
label_1c57dc:
    // 0x1c57dc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1c57dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c57e0:
    // 0x1c57e0: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x1c57e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c57e4: 0xac9400d4  sw          $s4, 0xD4($a0)
    ctx->pc = 0x1c57e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 20));
    // 0x1c57e8: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x1c57e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c57ec: 0x8ca400d4  lw          $a0, 0xD4($a1)
    ctx->pc = 0x1c57ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 212)));
    // 0x1c57f0: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1c57f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1c57f4: 0xc0725b8  jal         func_1C96E0
    ctx->pc = 0x1C57F4u;
    SET_GPR_U32(ctx, 31, 0x1C57FCu);
    ctx->pc = 0x1C96E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C96E0u, 0x1C57F4u, 0x1C57FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C57FCu;
label_1c57fc:
    // 0x1c57fc: 0x3c054320  lui         $a1, 0x4320
    ctx->pc = 0x1c57fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17184 << 16));
    // 0x1c5800: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1c5800u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5804: 0x8fa60170  lw          $a2, 0x170($sp)
    ctx->pc = 0x1c5804u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c5808: 0xe4c000f0  swc1        $f0, 0xF0($a2)
    ctx->pc = 0x1c5808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 240), bits); }
    // 0x1c580c: 0x3c0743a0  lui         $a3, 0x43A0
    ctx->pc = 0x1c580cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17312 << 16));
    // 0x1c5810: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x1c5810u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5814: 0x8fa80170  lw          $t0, 0x170($sp)
    ctx->pc = 0x1c5814u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c5818: 0xe50000d8  swc1        $f0, 0xD8($t0)
    ctx->pc = 0x1c5818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 216), bits); }
    // 0x1c581c: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x1c581cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x1c5820: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c5820u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5824: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x1c5824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c5828: 0xe44000dc  swc1        $f0, 0xDC($v0)
    ctx->pc = 0x1c5828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 220), bits); }
    // 0x1c582c: 0x8f84bb80  lw          $a0, -0x4480($gp)
    ctx->pc = 0x1c582cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1c5830: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1c5830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c5834: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C5834u;
    {
        const bool branch_taken_0x1c5834 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1c5834) {
            ctx->pc = 0x1C5850u;
            goto label_1c5850;
        }
    }
    ctx->pc = 0x1C583Cu;
    // 0x1c583c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c583cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5840: 0x0  nop
    ctx->pc = 0x1c5840u;
    // NOP
    // 0x1c5844: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1c5844u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c5848: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C5848u;
    {
        const bool branch_taken_0x1c5848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5848) {
            ctx->pc = 0x1C586Cu;
            goto label_1c586c;
        }
    }
    ctx->pc = 0x1C5850u;
label_1c5850:
    // 0x1c5850: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1c5850u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1c5854: 0x30440001  andi        $a0, $v0, 0x1
    ctx->pc = 0x1c5854u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c5858: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1c5858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1c585c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c585cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5860: 0x0  nop
    ctx->pc = 0x1c5860u;
    // NOP
    // 0x1c5864: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1c5864u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c5868: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1c5868u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1c586c:
    // 0x1c586c: 0x3c054420  lui         $a1, 0x4420
    ctx->pc = 0x1c586cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17440 << 16));
    // 0x1c5870: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1c5870u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5874: 0x0  nop
    ctx->pc = 0x1c5874u;
    // NOP
    // 0x1c5878: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1c5878u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c587c: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x1c587cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c5880: 0xc48000d8  lwc1        $f0, 0xD8($a0)
    ctx->pc = 0x1c5880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c5884: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c5884u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c5888: 0xe48000d8  swc1        $f0, 0xD8($a0)
    ctx->pc = 0x1c5888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 216), bits); }
    // 0x1c588c: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1c588cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1c5890: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x1c5890u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1c5894: 0x4c00006  bltz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C5894u;
    {
        const bool branch_taken_0x1c5894 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x1c5894) {
            ctx->pc = 0x1C58B0u;
            goto label_1c58b0;
        }
    }
    ctx->pc = 0x1C589Cu;
    // 0x1c589c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1c589cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c58a0: 0x0  nop
    ctx->pc = 0x1c58a0u;
    // NOP
    // 0x1c58a4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1c58a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c58a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C58A8u;
    {
        const bool branch_taken_0x1c58a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c58a8) {
            ctx->pc = 0x1C58CCu;
            goto label_1c58cc;
        }
    }
    ctx->pc = 0x1C58B0u;
label_1c58b0:
    // 0x1c58b0: 0x61042  srl         $v0, $a2, 1
    ctx->pc = 0x1c58b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x1c58b4: 0x30c30001  andi        $v1, $a2, 0x1
    ctx->pc = 0x1c58b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x1c58b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c58b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1c58bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c58bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c58c0: 0x0  nop
    ctx->pc = 0x1c58c0u;
    // NOP
    // 0x1c58c4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1c58c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c58c8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1c58c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1c58cc:
    // 0x1c58cc: 0x3c0443e0  lui         $a0, 0x43E0
    ctx->pc = 0x1c58ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17376 << 16));
    // 0x1c58d0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1c58d0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c58d4: 0x0  nop
    ctx->pc = 0x1c58d4u;
    // NOP
    // 0x1c58d8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1c58d8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c58dc: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x1c58dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c58e0: 0xc4a000dc  lwc1        $f0, 0xDC($a1)
    ctx->pc = 0x1c58e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c58e4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c58e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c58e8: 0xe4a000dc  swc1        $f0, 0xDC($a1)
    ctx->pc = 0x1c58e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 220), bits); }
    // 0x1c58ec: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x1c58ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x1c58f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c58f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c58f4: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x1c58f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c58f8: 0xe44000e0  swc1        $f0, 0xE0($v0)
    ctx->pc = 0x1c58f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 224), bits); }
    // 0x1c58fc: 0x3c044280  lui         $a0, 0x4280
    ctx->pc = 0x1c58fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17024 << 16));
    // 0x1c5900: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1c5900u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5904: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x1c5904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c5908: 0xe4a000e4  swc1        $f0, 0xE4($a1)
    ctx->pc = 0x1c5908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 228), bits); }
    // 0x1c590c: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1c590cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1c5910: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1c5910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1c5914: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C5914u;
    {
        const bool branch_taken_0x1c5914 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1c5914) {
            ctx->pc = 0x1C5930u;
            goto label_1c5930;
        }
    }
    ctx->pc = 0x1C591Cu;
    // 0x1c591c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c591cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5920: 0x0  nop
    ctx->pc = 0x1c5920u;
    // NOP
    // 0x1c5924: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1c5924u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c5928: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C5928u;
    {
        const bool branch_taken_0x1c5928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5928) {
            ctx->pc = 0x1C594Cu;
            goto label_1c594c;
        }
    }
    ctx->pc = 0x1C5930u;
label_1c5930:
    // 0x1c5930: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1c5930u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1c5934: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c5934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c5938: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1c5938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c593c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c593cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5940: 0x0  nop
    ctx->pc = 0x1c5940u;
    // NOP
    // 0x1c5944: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1c5944u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c5948: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1c5948u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1c594c:
    // 0x1c594c: 0x3c044420  lui         $a0, 0x4420
    ctx->pc = 0x1c594cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17440 << 16));
    // 0x1c5950: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1c5950u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5954: 0x0  nop
    ctx->pc = 0x1c5954u;
    // NOP
    // 0x1c5958: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1c5958u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c595c: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x1c595cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c5960: 0xc4a000e0  lwc1        $f0, 0xE0($a1)
    ctx->pc = 0x1c5960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c5964: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c5964u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c5968: 0xe4a000e0  swc1        $f0, 0xE0($a1)
    ctx->pc = 0x1c5968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 224), bits); }
    // 0x1c596c: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1c596cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1c5970: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1c5970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1c5974: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C5974u;
    {
        const bool branch_taken_0x1c5974 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1c5974) {
            ctx->pc = 0x1C5990u;
            goto label_1c5990;
        }
    }
    ctx->pc = 0x1C597Cu;
    // 0x1c597c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c597cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5980: 0x0  nop
    ctx->pc = 0x1c5980u;
    // NOP
    // 0x1c5984: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1c5984u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c5988: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C5988u;
    {
        const bool branch_taken_0x1c5988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5988) {
            ctx->pc = 0x1C59ACu;
            goto label_1c59ac;
        }
    }
    ctx->pc = 0x1C5990u;
label_1c5990:
    // 0x1c5990: 0x22042  srl         $a0, $v0, 1
    ctx->pc = 0x1c5990u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1c5994: 0x30450001  andi        $a1, $v0, 0x1
    ctx->pc = 0x1c5994u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c5998: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1c5998u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1c599c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1c599cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c59a0: 0x0  nop
    ctx->pc = 0x1c59a0u;
    // NOP
    // 0x1c59a4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1c59a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c59a8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1c59a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1c59ac:
    // 0x1c59ac: 0x3c0243e0  lui         $v0, 0x43E0
    ctx->pc = 0x1c59acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17376 << 16));
    // 0x1c59b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c59b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c59b4: 0x0  nop
    ctx->pc = 0x1c59b4u;
    // NOP
    // 0x1c59b8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1c59b8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c59bc: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x1c59bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c59c0: 0xc44000e4  lwc1        $f0, 0xE4($v0)
    ctx->pc = 0x1c59c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c59c4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c59c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c59c8: 0xe44000e4  swc1        $f0, 0xE4($v0)
    ctx->pc = 0x1c59c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 228), bits); }
    // 0x1c59cc: 0x8fa60170  lw          $a2, 0x170($sp)
    ctx->pc = 0x1c59ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c59d0: 0x8cc40030  lw          $a0, 0x30($a2)
    ctx->pc = 0x1c59d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x1c59d4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1c59d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1c59d8: 0x24a57588  addiu       $a1, $a1, 0x7588
    ctx->pc = 0x1c59d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30088));
    // 0x1c59dc: 0xc05621c  jal         func_158870
    ctx->pc = 0x1C59DCu;
    SET_GPR_U32(ctx, 31, 0x1C59E4u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x1C59DCu, 0x1C59E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C59E4u;
label_1c59e4:
    // 0x1c59e4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1c59e4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c59e8: 0x12e0002e  beqz        $s7, . + 4 + (0x2E << 2)
    ctx->pc = 0x1C59E8u;
    {
        const bool branch_taken_0x1c59e8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c59e8) {
            ctx->pc = 0x1C5AA4u;
            goto label_1c5aa4;
        }
    }
    ctx->pc = 0x1C59F0u;
    // 0x1c59f0: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x1c59f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c59f4: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1C59F4u;
    SET_GPR_U32(ctx, 31, 0x1C59FCu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1C59F4u, 0x1C59FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C59FCu;
label_1c59fc:
    // 0x1c59fc: 0x8fa60170  lw          $a2, 0x170($sp)
    ctx->pc = 0x1c59fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c5a00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c5a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5a04: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1c5a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5a08: 0x24c700e0  addiu       $a3, $a2, 0xE0
    ctx->pc = 0x1c5a08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 224));
    // 0x1c5a0c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1c5a0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5a10: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x1C5A10u;
    SET_GPR_U32(ctx, 31, 0x1C5A18u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x1C5A10u, 0x1C5A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5A18u;
label_1c5a18:
    // 0x1c5a18: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x1c5a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c5a1c: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x1c5a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
    // 0x1c5a20: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1c5a20u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c5a24: 0xc44000e0  lwc1        $f0, 0xE0($v0)
    ctx->pc = 0x1c5a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c5a28: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c5a28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c5a2c: 0xe44000e0  swc1        $f0, 0xE0($v0)
    ctx->pc = 0x1c5a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 224), bits); }
    // 0x1c5a30: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x1c5a30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c5a34: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1c5a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1c5a38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c5a38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c5a3c: 0xc4a000e4  lwc1        $f0, 0xE4($a1)
    ctx->pc = 0x1c5a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c5a40: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c5a40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c5a44: 0xe4a000e4  swc1        $f0, 0xE4($a1)
    ctx->pc = 0x1c5a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 228), bits); }
    // 0x1c5a48: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x1c5a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c5a4c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1C5A4Cu;
    SET_GPR_U32(ctx, 31, 0x1C5A54u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1C5A4Cu, 0x1C5A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5A54u;
label_1c5a54:
    // 0x1c5a54: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x1c5a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c5a58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c5a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5a5c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1c5a5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5a60: 0x246600d8  addiu       $a2, $v1, 0xD8
    ctx->pc = 0x1c5a60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 216));
    // 0x1c5a64: 0xc08c744  jal         func_231D10
    ctx->pc = 0x1C5A64u;
    SET_GPR_U32(ctx, 31, 0x1C5A6Cu);
    ctx->pc = 0x231D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231D10u, 0x1C5A64u, 0x1C5A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5A6Cu;
label_1c5a6c:
    // 0x1c5a6c: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x1c5a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c5a70: 0xc48100d8  lwc1        $f1, 0xD8($a0)
    ctx->pc = 0x1c5a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c5a74: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x1c5a74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c5a78: 0xc4a000e0  lwc1        $f0, 0xE0($a1)
    ctx->pc = 0x1c5a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c5a7c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c5a7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c5a80: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x1c5a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c5a84: 0xe48000d8  swc1        $f0, 0xD8($a0)
    ctx->pc = 0x1c5a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 216), bits); }
    // 0x1c5a88: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x1c5a88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c5a8c: 0xc4a100dc  lwc1        $f1, 0xDC($a1)
    ctx->pc = 0x1c5a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c5a90: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x1c5a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c5a94: 0xc44000e4  lwc1        $f0, 0xE4($v0)
    ctx->pc = 0x1c5a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c5a98: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c5a98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c5a9c: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x1c5a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c5aa0: 0xe48000dc  swc1        $f0, 0xDC($a0)
    ctx->pc = 0x1c5aa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 220), bits); }
label_1c5aa4:
    // 0x1c5aa4: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x1c5aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c5aa8: 0x244300a4  addiu       $v1, $v0, 0xA4
    ctx->pc = 0x1c5aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1c5aac: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1c5aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5ab0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c5ab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5ab4: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x1c5ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1c5ab8: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x1C5AB8u;
    SET_GPR_U32(ctx, 31, 0x1C5AC0u);
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x1C5AB8u, 0x1C5AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5AC0u;
label_1c5ac0:
    // 0x1c5ac0: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x1c5ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c5ac4: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1c5ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1c5ac8: 0x278595f0  addiu       $a1, $gp, -0x6A10
    ctx->pc = 0x1c5ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940144));
    // 0x1c5acc: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1C5ACCu;
    SET_GPR_U32(ctx, 31, 0x1C5AD4u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1C5ACCu, 0x1C5AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5AD4u;
label_1c5ad4:
    // 0x1c5ad4: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x1c5ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c5ad8: 0xac6200a4  sw          $v0, 0xA4($v1)
    ctx->pc = 0x1c5ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 164), GPR_U32(ctx, 2));
    // 0x1c5adc: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1C5ADCu;
    SET_GPR_U32(ctx, 31, 0x1C5AE4u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1C5ADCu, 0x1C5AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5AE4u;
label_1c5ae4:
    // 0x1c5ae4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C5AE4u;
    {
        const bool branch_taken_0x1c5ae4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1c5ae4) {
            ctx->pc = 0x1C5B00u;
            goto label_1c5b00;
        }
    }
    ctx->pc = 0x1C5AECu;
    // 0x1c5aec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c5aecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5af0: 0x0  nop
    ctx->pc = 0x1c5af0u;
    // NOP
    // 0x1c5af4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1c5af4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c5af8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C5AF8u;
    {
        const bool branch_taken_0x1c5af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5af8) {
            ctx->pc = 0x1C5B1Cu;
            goto label_1c5b1c;
        }
    }
    ctx->pc = 0x1C5B00u;
label_1c5b00:
    // 0x1c5b00: 0x28842  srl         $s1, $v0, 1
    ctx->pc = 0x1c5b00u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1c5b04: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c5b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c5b08: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x1c5b08u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x1c5b0c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1c5b0cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5b10: 0x0  nop
    ctx->pc = 0x1c5b10u;
    // NOP
    // 0x1c5b14: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1c5b14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c5b18: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1c5b18u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1c5b1c:
    // 0x1c5b1c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1c5b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1c5b20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c5b20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5b24: 0x0  nop
    ctx->pc = 0x1c5b24u;
    // NOP
    // 0x1c5b28: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1c5b28u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c5b2c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1c5b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x1c5b30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c5b30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5b34: 0x0  nop
    ctx->pc = 0x1c5b34u;
    // NOP
    // 0x1c5b38: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c5b38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c5b3c: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x1c5b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c5b40: 0xe4a000a8  swc1        $f0, 0xA8($a1)
    ctx->pc = 0x1c5b40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 168), bits); }
    // 0x1c5b44: 0xc78082e4  lwc1        $f0, -0x7D1C($gp)
    ctx->pc = 0x1c5b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c5b48: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x1c5b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c5b4c: 0xe48000ac  swc1        $f0, 0xAC($a0)
    ctx->pc = 0x1c5b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 172), bits); }
    // 0x1c5b50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c5b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5b54: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x1c5b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c5b58: 0xac6200b0  sw          $v0, 0xB0($v1)
    ctx->pc = 0x1c5b58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 2));
    // 0x1c5b5c: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x1c5b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c5b60: 0x8c840030  lw          $a0, 0x30($a0)
    ctx->pc = 0x1c5b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1c5b64: 0x278595f8  addiu       $a1, $gp, -0x6A08
    ctx->pc = 0x1c5b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940152));
    // 0x1c5b68: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1C5B68u;
    SET_GPR_U32(ctx, 31, 0x1C5B70u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1C5B68u, 0x1C5B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5B70u;
label_1c5b70:
    // 0x1c5b70: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x1c5b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c5b74: 0xac6200bc  sw          $v0, 0xBC($v1)
    ctx->pc = 0x1c5b74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 188), GPR_U32(ctx, 2));
    // 0x1c5b78: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1C5B78u;
    SET_GPR_U32(ctx, 31, 0x1C5B80u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1C5B78u, 0x1C5B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5B80u;
label_1c5b80:
    // 0x1c5b80: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C5B80u;
    {
        const bool branch_taken_0x1c5b80 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1c5b80) {
            ctx->pc = 0x1C5B9Cu;
            goto label_1c5b9c;
        }
    }
    ctx->pc = 0x1C5B88u;
    // 0x1c5b88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c5b88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5b8c: 0x0  nop
    ctx->pc = 0x1c5b8cu;
    // NOP
    // 0x1c5b90: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1c5b90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c5b94: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C5B94u;
    {
        const bool branch_taken_0x1c5b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5b94) {
            ctx->pc = 0x1C5BB8u;
            goto label_1c5bb8;
        }
    }
    ctx->pc = 0x1C5B9Cu;
label_1c5b9c:
    // 0x1c5b9c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1c5b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1c5ba0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c5ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c5ba4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1c5ba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c5ba8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c5ba8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5bac: 0x0  nop
    ctx->pc = 0x1c5bacu;
    // NOP
    // 0x1c5bb0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1c5bb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c5bb4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1c5bb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1c5bb8:
    // 0x1c5bb8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1c5bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1c5bbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c5bbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5bc0: 0x0  nop
    ctx->pc = 0x1c5bc0u;
    // NOP
    // 0x1c5bc4: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x1c5bc4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c5bc8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1c5bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x1c5bcc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1c5bccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c5bd0: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x1c5bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
    // 0x1c5bd4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c5bd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c5bd8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c5bd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5bdc: 0x0  nop
    ctx->pc = 0x1c5bdcu;
    // NOP
    // 0x1c5be0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1c5be0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1c5be4: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1c5be4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1c5be8: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x1c5be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c5bec: 0xe44000c0  swc1        $f0, 0xC0($v0)
    ctx->pc = 0x1c5becu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 192), bits); }
    // 0x1c5bf0: 0xc78082e4  lwc1        $f0, -0x7D1C($gp)
    ctx->pc = 0x1c5bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c5bf4: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x1c5bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c5bf8: 0xe44000c4  swc1        $f0, 0xC4($v0)
    ctx->pc = 0x1c5bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 196), bits); }
    // 0x1c5bfc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c5bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5c00: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x1c5c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c5c04: 0xac4300c8  sw          $v1, 0xC8($v0)
    ctx->pc = 0x1c5c04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 200), GPR_U32(ctx, 3));
    // 0x1c5c08: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c5c08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5c0c: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x1C5C0Cu;
    {
        const bool branch_taken_0x1c5c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5c0c) {
            ctx->pc = 0x1C5EE4u;
            goto label_1c5ee4;
        }
    }
    ctx->pc = 0x1C5C14u;
label_1c5c14:
    // 0x1c5c14: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x1c5c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c5c18: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1C5C18u;
    SET_GPR_U32(ctx, 31, 0x1C5C20u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1C5C18u, 0x1C5C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5C20u;
label_1c5c20:
    // 0x1c5c20: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1c5c20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1c5c24: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1c5c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1c5c28: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1c5c28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1c5c2c: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x1c5c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c5c30: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1c5c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1c5c34: 0x8c6500a4  lw          $a1, 0xA4($v1)
    ctx->pc = 0x1c5c34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
    // 0x1c5c38: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x1c5c38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1c5c3c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x1c5c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1c5c40: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1c5c40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1c5c44: 0x8fa60170  lw          $a2, 0x170($sp)
    ctx->pc = 0x1c5c44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c5c48: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1c5c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1c5c4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c5c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5c50: 0x246600b4  addiu       $a2, $v1, 0xB4
    ctx->pc = 0x1c5c50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
    // 0x1c5c54: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x1C5C54u;
    SET_GPR_U32(ctx, 31, 0x1C5C5Cu);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x1C5C54u, 0x1C5C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5C5Cu;
label_1c5c5c:
    // 0x1c5c5c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1c5c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1c5c60: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1c5c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c5c64: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1c5c64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1c5c68: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x1c5c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c5c6c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1c5c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c5c70: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1c5c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1c5c74: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c5c74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c5c78: 0xc46000b4  lwc1        $f0, 0xB4($v1)
    ctx->pc = 0x1c5c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c5c7c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c5c7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c5c80: 0xe46000b4  swc1        $f0, 0xB4($v1)
    ctx->pc = 0x1c5c80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 180), bits); }
    // 0x1c5c84: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x1c5c84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1c5c88: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x1c5c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1c5c8c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1c5c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1c5c90: 0x8fa60170  lw          $a2, 0x170($sp)
    ctx->pc = 0x1c5c90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c5c94: 0xc32021  addu        $a0, $a2, $v1
    ctx->pc = 0x1c5c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1c5c98: 0x3c053f00  lui         $a1, 0x3F00
    ctx->pc = 0x1c5c98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16128 << 16));
    // 0x1c5c9c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1c5c9cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c5ca0: 0xc48000b8  lwc1        $f0, 0xB8($a0)
    ctx->pc = 0x1c5ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c5ca4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c5ca4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c5ca8: 0xe48000b8  swc1        $f0, 0xB8($a0)
    ctx->pc = 0x1c5ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 184), bits); }
    // 0x1c5cac: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x1c5cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c5cb0: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1C5CB0u;
    SET_GPR_U32(ctx, 31, 0x1C5CB8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1C5CB0u, 0x1C5CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5CB8u;
label_1c5cb8:
    // 0x1c5cb8: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x1c5cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1c5cbc: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x1c5cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1c5cc0: 0x530c0  sll         $a2, $a1, 3
    ctx->pc = 0x1c5cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1c5cc4: 0x8fa70170  lw          $a3, 0x170($sp)
    ctx->pc = 0x1c5cc4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c5cc8: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x1c5cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1c5ccc: 0x8c6500a4  lw          $a1, 0xA4($v1)
    ctx->pc = 0x1c5cccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
    // 0x1c5cd0: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x1c5cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1c5cd4: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x1c5cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1c5cd8: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x1c5cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1c5cdc: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x1c5cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c5ce0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1c5ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c5ce4: 0xc46100b4  lwc1        $f1, 0xB4($v1)
    ctx->pc = 0x1c5ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c5ce8: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x1c5ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c5cec: 0xc48000d8  lwc1        $f0, 0xD8($a0)
    ctx->pc = 0x1c5cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c5cf0: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x1c5cf0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1c5cf4: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1c5cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1c5cf8: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x1c5cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
    // 0x1c5cfc: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x1c5cfcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c5d00: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1c5d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1c5d04: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x1c5d04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1c5d08: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x1c5d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c5d0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1c5d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c5d10: 0xc46100b8  lwc1        $f1, 0xB8($v1)
    ctx->pc = 0x1c5d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c5d14: 0x8fa60170  lw          $a2, 0x170($sp)
    ctx->pc = 0x1c5d14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c5d18: 0xc4c000dc  lwc1        $f0, 0xDC($a2)
    ctx->pc = 0x1c5d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c5d1c: 0x46010341  sub.s       $f13, $f0, $f1
    ctx->pc = 0x1c5d1cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1c5d20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c5d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5d24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c5d24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5d28: 0xc08c208  jal         func_230820
    ctx->pc = 0x1C5D28u;
    SET_GPR_U32(ctx, 31, 0x1C5D30u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1C5D28u, 0x1C5D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5D30u;
label_1c5d30:
    // 0x1c5d30: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1c5d30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1c5d34: 0x50f021  addu        $fp, $v0, $s0
    ctx->pc = 0x1c5d34u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c5d38: 0x1ef0c0  sll         $fp, $fp, 3
    ctx->pc = 0x1c5d38u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    // 0x1c5d3c: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x1c5d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c5d40: 0x9e1021  addu        $v0, $a0, $fp
    ctx->pc = 0x1c5d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x1c5d44: 0xc78180b0  lwc1        $f1, -0x7F50($gp)
    ctx->pc = 0x1c5d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c5d48: 0xc44000a8  lwc1        $f0, 0xA8($v0)
    ctx->pc = 0x1c5d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c5d4c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1c5d4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1c5d50: 0x3c044334  lui         $a0, 0x4334
    ctx->pc = 0x1c5d50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17204 << 16));
    // 0x1c5d54: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1c5d54u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5d58: 0x0  nop
    ctx->pc = 0x1c5d58u;
    // NOP
    // 0x1c5d5c: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1c5d5cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c5d60: 0x0  nop
    ctx->pc = 0x1c5d60u;
    // NOP
    // 0x1c5d64: 0x0  nop
    ctx->pc = 0x1c5d64u;
    // NOP
    // 0x1c5d68: 0x0  nop
    ctx->pc = 0x1c5d68u;
    // NOP
    // 0x1c5d6c: 0xc0c38f0  jal         func_30E3C0
    ctx->pc = 0x1C5D6Cu;
    SET_GPR_U32(ctx, 31, 0x1C5D74u);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x1C5D6Cu, 0x1C5D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5D74u;
label_1c5d74:
    // 0x1c5d74: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x1c5d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c5d78: 0xc44100e0  lwc1        $f1, 0xE0($v0)
    ctx->pc = 0x1c5d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c5d7c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1c5d7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1c5d80: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x1c5d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x1c5d84: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x1c5d84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1c5d88: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x1c5d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1c5d8c: 0x228c0  sll         $a1, $v0, 3
    ctx->pc = 0x1c5d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1c5d90: 0x8fa60170  lw          $a2, 0x170($sp)
    ctx->pc = 0x1c5d90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c5d94: 0xc53821  addu        $a3, $a2, $a1
    ctx->pc = 0x1c5d94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1c5d98: 0xc78180b0  lwc1        $f1, -0x7F50($gp)
    ctx->pc = 0x1c5d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c5d9c: 0xc4e000a8  lwc1        $f0, 0xA8($a3)
    ctx->pc = 0x1c5d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c5da0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1c5da0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1c5da4: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1c5da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x1c5da8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c5da8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5dac: 0x0  nop
    ctx->pc = 0x1c5dacu;
    // NOP
    // 0x1c5db0: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1c5db0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c5db4: 0x0  nop
    ctx->pc = 0x1c5db4u;
    // NOP
    // 0x1c5db8: 0x0  nop
    ctx->pc = 0x1c5db8u;
    // NOP
    // 0x1c5dbc: 0x0  nop
    ctx->pc = 0x1c5dbcu;
    // NOP
    // 0x1c5dc0: 0xc0c3966  jal         func_30E598
    ctx->pc = 0x1C5DC0u;
    SET_GPR_U32(ctx, 31, 0x1C5DC8u);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x1C5DC0u, 0x1C5DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5DC8u;
label_1c5dc8:
    // 0x1c5dc8: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x1c5dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c5dcc: 0xc48100e4  lwc1        $f1, 0xE4($a0)
    ctx->pc = 0x1c5dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c5dd0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1c5dd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1c5dd4: 0xe7a00164  swc1        $f0, 0x164($sp)
    ctx->pc = 0x1c5dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
    // 0x1c5dd8: 0x102840  sll         $a1, $s0, 1
    ctx->pc = 0x1c5dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1c5ddc: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x1c5ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x1c5de0: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x1c5de0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1c5de4: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x1c5de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c5de8: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x1c5de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x1c5dec: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x1c5decu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c5df0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1c5df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c5df4: 0xc44100b4  lwc1        $f1, 0xB4($v0)
    ctx->pc = 0x1c5df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c5df8: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x1c5df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c5dfc: 0xc48000d8  lwc1        $f0, 0xD8($a0)
    ctx->pc = 0x1c5dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c5e00: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x1c5e00u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1c5e04: 0xc7a00168  lwc1        $f0, 0x168($sp)
    ctx->pc = 0x1c5e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c5e08: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c5e08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c5e0c: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x1c5e0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x1c5e10: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1c5e10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1c5e14: 0x502821  addu        $a1, $v0, $s0
    ctx->pc = 0x1c5e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c5e18: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1c5e18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1c5e1c: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x1c5e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c5e20: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1c5e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1c5e24: 0xc44100b8  lwc1        $f1, 0xB8($v0)
    ctx->pc = 0x1c5e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c5e28: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x1c5e28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c5e2c: 0xc4a000dc  lwc1        $f0, 0xDC($a1)
    ctx->pc = 0x1c5e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c5e30: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x1c5e30u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1c5e34: 0xc7a00164  lwc1        $f0, 0x164($sp)
    ctx->pc = 0x1c5e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c5e38: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c5e38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c5e3c: 0xe7a00164  swc1        $f0, 0x164($sp)
    ctx->pc = 0x1c5e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
    // 0x1c5e40: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x1c5e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c5e44: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1C5E44u;
    SET_GPR_U32(ctx, 31, 0x1C5E4Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1C5E44u, 0x1C5E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5E4Cu;
label_1c5e4c:
    // 0x1c5e4c: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1c5e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1c5e50: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1c5e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1c5e54: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x1c5e54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1c5e58: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x1c5e58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c5e5c: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x1c5e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1c5e60: 0x8c6500a4  lw          $a1, 0xA4($v1)
    ctx->pc = 0x1c5e60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
    // 0x1c5e64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c5e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5e68: 0xc7ac0168  lwc1        $f12, 0x168($sp)
    ctx->pc = 0x1c5e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c5e6c: 0xc7ad0164  lwc1        $f13, 0x164($sp)
    ctx->pc = 0x1c5e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c5e70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c5e70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5e74: 0xc08c208  jal         func_230820
    ctx->pc = 0x1C5E74u;
    SET_GPR_U32(ctx, 31, 0x1C5E7Cu);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1C5E74u, 0x1C5E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5E7Cu;
label_1c5e7c:
    // 0x1c5e7c: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x1c5e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c5e80: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1C5E80u;
    SET_GPR_U32(ctx, 31, 0x1C5E88u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1C5E80u, 0x1C5E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5E88u;
label_1c5e88:
    // 0x1c5e88: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1c5e88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1c5e8c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1c5e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1c5e90: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x1c5e90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1c5e94: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x1c5e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c5e98: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1c5e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c5e9c: 0x8c6500a4  lw          $a1, 0xA4($v1)
    ctx->pc = 0x1c5e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
    // 0x1c5ea0: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1c5ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1c5ea4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1c5ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1c5ea8: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x1c5ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1c5eac: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x1c5eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c5eb0: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x1c5eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c5eb4: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1c5eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1c5eb8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1c5eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1c5ebc: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x1c5ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1c5ec0: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x1c5ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c5ec4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1c5ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c5ec8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c5ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5ecc: 0x24c600b4  addiu       $a2, $a2, 0xB4
    ctx->pc = 0x1c5eccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 180));
    // 0x1c5ed0: 0xc46c00a8  lwc1        $f12, 0xA8($v1)
    ctx->pc = 0x1c5ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c5ed4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c5ed4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5ed8: 0xc08c64c  jal         func_231930
    ctx->pc = 0x1C5ED8u;
    SET_GPR_U32(ctx, 31, 0x1C5EE0u);
    ctx->pc = 0x231930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231930u, 0x1C5ED8u, 0x1C5EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5EE0u;
label_1c5ee0:
    // 0x1c5ee0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c5ee0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1c5ee4:
    // 0x1c5ee4: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1c5ee4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c5ee8: 0x1440ff4a  bnez        $v0, . + 4 + (-0xB6 << 2)
    ctx->pc = 0x1C5EE8u;
    {
        const bool branch_taken_0x1c5ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5ee8) {
            ctx->pc = 0x1C5C14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c5c14;
        }
    }
    ctx->pc = 0x1C5EF0u;
    // 0x1c5ef0: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x1c5ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x1c5ef4: 0x24c67540  addiu       $a2, $a2, 0x7540
    ctx->pc = 0x1c5ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30016));
    // 0x1c5ef8: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1c5ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1c5efc: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1c5efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1c5f00:
    // 0x1c5f00: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x1c5f00u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c5f04: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x1c5f04u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x1c5f08: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x1c5f08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x1c5f0c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1c5f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1c5f10: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x1c5f10u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c5f14: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x1c5f14u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c5f18: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x1c5f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x1c5f1c: 0x1c80fff8  bgtz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1C5F1Cu;
    {
        const bool branch_taken_0x1c5f1c = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x1c5f1c) {
            ctx->pc = 0x1C5F00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c5f00;
        }
    }
    ctx->pc = 0x1C5F24u;
    // 0x1c5f24: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c5f24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5f28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c5f28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5f2c: 0x0  nop
    ctx->pc = 0x1c5f2cu;
    // NOP
    // 0x1c5f30: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x1c5f30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x1c5f34: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1c5f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1c5f38: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1c5f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1c5f3c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C5F3Cu;
    {
        const bool branch_taken_0x1c5f3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5f3c) {
            ctx->pc = 0x1C5F64u;
            goto label_1c5f64;
        }
    }
    ctx->pc = 0x1C5F44u;
    // 0x1c5f44: 0x801821  addu        $v1, $a0, $zero
    ctx->pc = 0x1c5f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_1c5f48:
    // 0x1c5f48: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1c5f48u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c5f4c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1c5f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1c5f50: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c5f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c5f54: 0x0  nop
    ctx->pc = 0x1c5f54u;
    // NOP
    // 0x1c5f58: 0x0  nop
    ctx->pc = 0x1c5f58u;
    // NOP
    // 0x1c5f5c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C5F5Cu;
    {
        const bool branch_taken_0x1c5f5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5f5c) {
            ctx->pc = 0x1C5F48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c5f48;
        }
    }
    ctx->pc = 0x1C5F64u;
label_1c5f64:
    // 0x1c5f64: 0xafa0015c  sw          $zero, 0x15C($sp)
    ctx->pc = 0x1c5f64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 0));
label_1c5f68:
    // 0x1c5f68: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1c5f68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5f6c: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x1c5f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1c5f70: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1c5f70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5f74: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1c5f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1c5f78: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1c5f78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1c5f7c: 0x24a57598  addiu       $a1, $a1, 0x7598
    ctx->pc = 0x1c5f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30104));
    // 0x1c5f80: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x1C5F80u;
    SET_GPR_U32(ctx, 31, 0x1C5F88u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x1C5F80u, 0x1C5F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5F88u;
label_1c5f88:
    // 0x1c5f88: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x1c5f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c5f8c: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x1c5f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1c5f90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c5f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5f94: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1c5f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1c5f98: 0xc05621c  jal         func_158870
    ctx->pc = 0x1C5F98u;
    SET_GPR_U32(ctx, 31, 0x1C5FA0u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x1C5F98u, 0x1C5FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5FA0u;
label_1c5fa0:
    // 0x1c5fa0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1c5fa0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5fa4: 0x12c00064  beqz        $s6, . + 4 + (0x64 << 2)
    ctx->pc = 0x1C5FA4u;
    {
        const bool branch_taken_0x1c5fa4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5fa4) {
            ctx->pc = 0x1C6138u;
            goto label_1c6138;
        }
    }
    ctx->pc = 0x1C5FACu;
    // 0x1c5fac: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x1c5facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c5fb0: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1C5FB0u;
    SET_GPR_U32(ctx, 31, 0x1C5FB8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1C5FB0u, 0x1C5FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5FB8u;
label_1c5fb8:
    // 0x1c5fb8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c5fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5fbc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1c5fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5fc0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c5fc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5fc4: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1C5FC4u;
    SET_GPR_U32(ctx, 31, 0x1C5FCCu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1C5FC4u, 0x1C5FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5FCCu;
label_1c5fcc:
    // 0x1c5fcc: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x1c5fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c5fd0: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1C5FD0u;
    SET_GPR_U32(ctx, 31, 0x1C5FD8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1C5FD0u, 0x1C5FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5FD8u;
label_1c5fd8:
    // 0x1c5fd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c5fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5fdc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1c5fdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5fe0: 0xc08c774  jal         func_231DD0
    ctx->pc = 0x1C5FE0u;
    SET_GPR_U32(ctx, 31, 0x1C5FE8u);
    ctx->pc = 0x231DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231DD0u, 0x1C5FE0u, 0x1C5FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5FE8u;
label_1c5fe8:
    // 0x1c5fe8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c5fe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5fec: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x1c5fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1c5ff0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c5ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5ff4: 0xc065170  jal         func_1945C0
    ctx->pc = 0x1C5FF4u;
    SET_GPR_U32(ctx, 31, 0x1C5FFCu);
    ctx->pc = 0x1945C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1945C0u, 0x1C5FF4u, 0x1C5FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5FFCu;
label_1c5ffc:
    // 0x1c5ffc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c5ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6000: 0x27a20140  addiu       $v0, $sp, 0x140
    ctx->pc = 0x1c6000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1c6004: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c6004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6008: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x1c6008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1c600c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c600cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6010: 0xc1194c4  jal         func_465310
    ctx->pc = 0x1C6010u;
    SET_GPR_U32(ctx, 31, 0x1C6018u);
    ctx->pc = 0x465310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465310u, 0x1C6010u, 0x1C6018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6018u;
label_1c6018:
    // 0x1c6018: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1c6018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1c601c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1c601cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c6020: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x1C6020u;
    SET_GPR_U32(ctx, 31, 0x1C6028u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x1C6020u, 0x1C6028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6028u;
label_1c6028:
    // 0x1c6028: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c6028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c602c: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x1c602cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1c6030: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1c6030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6034: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1C6034u;
    SET_GPR_U32(ctx, 31, 0x1C603Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1C6034u, 0x1C603Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C603Cu;
label_1c603c:
    // 0x1c603c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c603cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6040: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1c6040u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1c6044: 0x24a575b0  addiu       $a1, $a1, 0x75B0
    ctx->pc = 0x1c6044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30128));
    // 0x1c6048: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x1c6048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1c604c: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x1c604cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1c6050: 0x27a8015c  addiu       $t0, $sp, 0x15C
    ctx->pc = 0x1c6050u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
    // 0x1c6054: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x1C6054u;
    SET_GPR_U32(ctx, 31, 0x1C605Cu);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x1C6054u, 0x1C605Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C605Cu;
label_1c605c:
    // 0x1c605c: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x1c605cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c6060: 0x8c4400d4  lw          $a0, 0xD4($v0)
    ctx->pc = 0x1c6060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x1c6064: 0xc071a14  jal         func_1C6850
    ctx->pc = 0x1C6064u;
    SET_GPR_U32(ctx, 31, 0x1C606Cu);
    ctx->pc = 0x1C6850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6850u, 0x1C6064u, 0x1C606Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C606Cu;
label_1c606c:
    // 0x1c606c: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x1c606cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c6070: 0x27a4014c  addiu       $a0, $sp, 0x14C
    ctx->pc = 0x1c6070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
    // 0x1c6074: 0x8c6500d4  lw          $a1, 0xD4($v1)
    ctx->pc = 0x1c6074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x1c6078: 0xc0719f0  jal         func_1C67C0
    ctx->pc = 0x1C6078u;
    SET_GPR_U32(ctx, 31, 0x1C6080u);
    ctx->pc = 0x1C67C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C67C0u, 0x1C6078u, 0x1C6080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6080u;
label_1c6080:
    // 0x1c6080: 0x27a4014c  addiu       $a0, $sp, 0x14C
    ctx->pc = 0x1c6080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
    // 0x1c6084: 0xc0719e4  jal         func_1C6790
    ctx->pc = 0x1C6084u;
    SET_GPR_U32(ctx, 31, 0x1C608Cu);
    ctx->pc = 0x1C6790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6790u, 0x1C6084u, 0x1C608Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C608Cu;
label_1c608c:
    // 0x1c608c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c608cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6090: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c6090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6094: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c6094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6098: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1c6098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c609c: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x1C609Cu;
    SET_GPR_U32(ctx, 31, 0x1C60A4u);
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x1C609Cu, 0x1C60A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C60A4u;
label_1c60a4:
    // 0x1c60a4: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x1c60a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c60a8: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x1c60a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1c60ac: 0x8fa3015c  lw          $v1, 0x15C($sp)
    ctx->pc = 0x1c60acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x1c60b0: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x1c60b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x1c60b4: 0xae560008  sw          $s6, 0x8($s2)
    ctx->pc = 0x1c60b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 22));
    // 0x1c60b8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1c60b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1c60bc: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1c60bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1c60c0: 0x24a575c8  addiu       $a1, $a1, 0x75C8
    ctx->pc = 0x1c60c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30152));
    // 0x1c60c4: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x1C60C4u;
    SET_GPR_U32(ctx, 31, 0x1C60CCu);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x1C60C4u, 0x1C60CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C60CCu;
label_1c60cc:
    // 0x1c60cc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C60CCu;
    {
        const bool branch_taken_0x1c60cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c60cc) {
            ctx->pc = 0x1C60E4u;
            goto label_1c60e4;
        }
    }
    ctx->pc = 0x1C60D4u;
    // 0x1c60d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c60d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c60d8: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1c60d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x1c60dc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1C60DCu;
    {
        const bool branch_taken_0x1c60dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c60dc) {
            ctx->pc = 0x1C6114u;
            goto label_1c6114;
        }
    }
    ctx->pc = 0x1C60E4u;
label_1c60e4:
    // 0x1c60e4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1c60e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1c60e8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1c60e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1c60ec: 0x24a575d8  addiu       $a1, $a1, 0x75D8
    ctx->pc = 0x1c60ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30168));
    // 0x1c60f0: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x1C60F0u;
    SET_GPR_U32(ctx, 31, 0x1C60F8u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x1C60F0u, 0x1C60F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C60F8u;
label_1c60f8:
    // 0x1c60f8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C60F8u;
    {
        const bool branch_taken_0x1c60f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c60f8) {
            ctx->pc = 0x1C6110u;
            goto label_1c6110;
        }
    }
    ctx->pc = 0x1C6100u;
    // 0x1c6100: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c6100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c6104: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1c6104u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x1c6108: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C6108u;
    {
        const bool branch_taken_0x1c6108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6108) {
            ctx->pc = 0x1C6114u;
            goto label_1c6114;
        }
    }
    ctx->pc = 0x1C6110u;
label_1c6110:
    // 0x1c6110: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x1c6110u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_1c6114:
    // 0x1c6114: 0x8f83bb44  lw          $v1, -0x44BC($gp)
    ctx->pc = 0x1c6114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949700)));
    // 0x1c6118: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1c6118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c611c: 0xaf82bb44  sw          $v0, -0x44BC($gp)
    ctx->pc = 0x1c611cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949700), GPR_U32(ctx, 2));
    // 0x1c6120: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1c6120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1c6124: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1c6124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c6128: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x1C6128u;
    SET_GPR_U32(ctx, 31, 0x1C6130u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1C6128u, 0x1C6130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6130u;
label_1c6130:
    // 0x1c6130: 0x1000ff8d  b           . + 4 + (-0x73 << 2)
    ctx->pc = 0x1C6130u;
    {
        const bool branch_taken_0x1c6130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6130) {
            ctx->pc = 0x1C5F68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c5f68;
        }
    }
    ctx->pc = 0x1C6138u;
label_1c6138:
    // 0x1c6138: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x1c6138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c613c: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1c613cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1c6140: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1c6140u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1c6144: 0x24a575e8  addiu       $a1, $a1, 0x75E8
    ctx->pc = 0x1c6144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30184));
    // 0x1c6148: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1C6148u;
    SET_GPR_U32(ctx, 31, 0x1C6150u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1C6148u, 0x1C6150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6150u;
label_1c6150:
    // 0x1c6150: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1c6150u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6154: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x1c6154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c6158: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x1c6158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c615c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c615cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c6160: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1c6160u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1c6164: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1c6164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1c6168: 0x27859600  addiu       $a1, $gp, -0x6A00
    ctx->pc = 0x1c6168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940160));
    // 0x1c616c: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x1C616Cu;
    SET_GPR_U32(ctx, 31, 0x1C6174u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x1C616Cu, 0x1C6174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6174u;
label_1c6174:
    // 0x1c6174: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x1c6174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c6178: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1C6178u;
    SET_GPR_U32(ctx, 31, 0x1C6180u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1C6178u, 0x1C6180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6180u;
label_1c6180:
    // 0x1c6180: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c6180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6184: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1c6184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6188: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x1c6188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1c618c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c618cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6190: 0xc08c32c  jal         func_230CB0
    ctx->pc = 0x1C6190u;
    SET_GPR_U32(ctx, 31, 0x1C6198u);
    ctx->pc = 0x230CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230CB0u, 0x1C6190u, 0x1C6198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6198u;
label_1c6198:
    // 0x1c6198: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x1c6198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c619c: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1c619cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1c61a0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1c61a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1c61a4: 0x24a575f8  addiu       $a1, $a1, 0x75F8
    ctx->pc = 0x1c61a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30200));
    // 0x1c61a8: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1C61A8u;
    SET_GPR_U32(ctx, 31, 0x1C61B0u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1C61A8u, 0x1C61B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C61B0u;
label_1c61b0:
    // 0x1c61b0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1c61b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61b4: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x1c61b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c61b8: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1C61B8u;
    SET_GPR_U32(ctx, 31, 0x1C61C0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1C61B8u, 0x1C61C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C61C0u;
label_1c61c0:
    // 0x1c61c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c61c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61c4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1c61c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61c8: 0xc08c774  jal         func_231DD0
    ctx->pc = 0x1C61C8u;
    SET_GPR_U32(ctx, 31, 0x1C61D0u);
    ctx->pc = 0x231DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231DD0u, 0x1C61C8u, 0x1C61D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C61D0u;
label_1c61d0:
    // 0x1c61d0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c61d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61d4: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x1c61d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1c61d8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1c61d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61dc: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1c61dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61e0: 0xc065170  jal         func_1945C0
    ctx->pc = 0x1C61E0u;
    SET_GPR_U32(ctx, 31, 0x1C61E8u);
    ctx->pc = 0x1945C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1945C0u, 0x1C61E0u, 0x1C61E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C61E8u;
label_1c61e8:
    // 0x1c61e8: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x1c61e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1c61ec: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x1c61ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1c61f0: 0xc1194c4  jal         func_465310
    ctx->pc = 0x1C61F0u;
    SET_GPR_U32(ctx, 31, 0x1C61F8u);
    ctx->pc = 0x465310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465310u, 0x1C61F0u, 0x1C61F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C61F8u;
label_1c61f8:
    // 0x1c61f8: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1c61f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1c61fc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1c61fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c6200: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x1C6200u;
    SET_GPR_U32(ctx, 31, 0x1C6208u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x1C6200u, 0x1C6208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6208u;
label_1c6208:
    // 0x1c6208: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x1c6208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1c620c: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1C620Cu;
    SET_GPR_U32(ctx, 31, 0x1C6214u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1C620Cu, 0x1C6214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6214u;
label_1c6214:
    // 0x1c6214: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x1c6214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c6218: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c6218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c621c: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x1c621cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x1c6220: 0x24c67608  addiu       $a2, $a2, 0x7608
    ctx->pc = 0x1c6220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30216));
    // 0x1c6224: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1c6224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6228: 0x246200f0  addiu       $v0, $v1, 0xF0
    ctx->pc = 0x1c6228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
    // 0x1c622c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1c622cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6230: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x1C6230u;
    SET_GPR_U32(ctx, 31, 0x1C6238u);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x1C6230u, 0x1C6238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6238u;
label_1c6238:
    // 0x1c6238: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x1c6238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c623c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1C623Cu;
    SET_GPR_U32(ctx, 31, 0x1C6244u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1C623Cu, 0x1C6244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6244u;
label_1c6244:
    // 0x1c6244: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c6244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6248: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1c6248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c624c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1c624cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6250: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c6250u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6254: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1C6254u;
    SET_GPR_U32(ctx, 31, 0x1C625Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1C6254u, 0x1C625Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C625Cu;
label_1c625c:
    // 0x1c625c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c625cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6260: 0x10000119  b           . + 4 + (0x119 << 2)
    ctx->pc = 0x1C6260u;
    {
        const bool branch_taken_0x1c6260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6260) {
            ctx->pc = 0x1C66C8u;
            goto label_1c66c8;
        }
    }
    ctx->pc = 0x1C6268u;
label_1c6268:
    // 0x1c6268: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x1c6268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c626c: 0x8c6200d4  lw          $v0, 0xD4($v1)
    ctx->pc = 0x1c626cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x1c6270: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c6270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6274: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1c6274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6278: 0xc0719cc  jal         func_1C6730
    ctx->pc = 0x1C6278u;
    SET_GPR_U32(ctx, 31, 0x1C6280u);
    ctx->pc = 0x1C6730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6730u, 0x1C6278u, 0x1C6280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6280u;
label_1c6280:
    // 0x1c6280: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c6280u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6284: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1c6284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6288: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x1c6288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x1c628c: 0x8f82bb44  lw          $v0, -0x44BC($gp)
    ctx->pc = 0x1c628cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949700)));
    // 0x1c6290: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c6290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c6294: 0x262082a  slt         $at, $s3, $v0
    ctx->pc = 0x1c6294u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c6298: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x1C6298u;
    {
        const bool branch_taken_0x1c6298 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6298) {
            ctx->pc = 0x1C62CCu;
            goto label_1c62cc;
        }
    }
    ctx->pc = 0x1C62A0u;
    // 0x1c62a0: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x1c62a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c62a4: 0x26650001  addiu       $a1, $s3, 0x1
    ctx->pc = 0x1c62a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1c62a8: 0x8c4400d4  lw          $a0, 0xD4($v0)
    ctx->pc = 0x1c62a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x1c62ac: 0xc0719cc  jal         func_1C6730
    ctx->pc = 0x1C62ACu;
    SET_GPR_U32(ctx, 31, 0x1C62B4u);
    ctx->pc = 0x1C6730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6730u, 0x1C62ACu, 0x1C62B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C62B4u;
label_1c62b4:
    // 0x1c62b4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1c62b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c62b8: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x1c62b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c62bc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c62bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c62c0: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x1c62c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x1c62c4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1C62C4u;
    {
        const bool branch_taken_0x1c62c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c62c4) {
            ctx->pc = 0x1C6304u;
            goto label_1c6304;
        }
    }
    ctx->pc = 0x1C62CCu;
label_1c62cc:
    // 0x1c62cc: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x1c62ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c62d0: 0x8c6400d4  lw          $a0, 0xD4($v1)
    ctx->pc = 0x1c62d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x1c62d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c62d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c62d8: 0xc0719cc  jal         func_1C6730
    ctx->pc = 0x1C62D8u;
    SET_GPR_U32(ctx, 31, 0x1C62E0u);
    ctx->pc = 0x1C6730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6730u, 0x1C62D8u, 0x1C62E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C62E0u;
label_1c62e0:
    // 0x1c62e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c62e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c62e4: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x1c62e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c62e8: 0x3c0543b4  lui         $a1, 0x43B4
    ctx->pc = 0x1c62e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17332 << 16));
    // 0x1c62ec: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1c62ecu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c62f0: 0x0  nop
    ctx->pc = 0x1c62f0u;
    // NOP
    // 0x1c62f4: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1c62f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c62f8: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x1c62f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c62fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c62fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c6300: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x1c6300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_1c6304:
    // 0x1c6304: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c6304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c6308: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c6308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c630c: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x1c630cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6310: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1c6310u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1c6314: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x1c6314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x1c6318: 0xc78180b0  lwc1        $f1, -0x7F50($gp)
    ctx->pc = 0x1c6318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c631c: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x1c631cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6320: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1c6320u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1c6324: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x1c6324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
    // 0x1c6328: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c6328u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c632c: 0x0  nop
    ctx->pc = 0x1c632cu;
    // NOP
    // 0x1c6330: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1c6330u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c6334: 0x0  nop
    ctx->pc = 0x1c6334u;
    // NOP
    // 0x1c6338: 0x0  nop
    ctx->pc = 0x1c6338u;
    // NOP
    // 0x1c633c: 0x0  nop
    ctx->pc = 0x1c633cu;
    // NOP
    // 0x1c6340: 0xc0c38f0  jal         func_30E3C0
    ctx->pc = 0x1C6340u;
    SET_GPR_U32(ctx, 31, 0x1C6348u);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x1C6340u, 0x1C6348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6348u;
label_1c6348:
    // 0x1c6348: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x1c6348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c634c: 0xc44100f0  lwc1        $f1, 0xF0($v0)
    ctx->pc = 0x1c634cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6350: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1c6350u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1c6354: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x1c6354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
    // 0x1c6358: 0xc78180b0  lwc1        $f1, -0x7F50($gp)
    ctx->pc = 0x1c6358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c635c: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x1c635cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6360: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1c6360u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1c6364: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x1c6364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
    // 0x1c6368: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c6368u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c636c: 0x0  nop
    ctx->pc = 0x1c636cu;
    // NOP
    // 0x1c6370: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1c6370u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c6374: 0x0  nop
    ctx->pc = 0x1c6374u;
    // NOP
    // 0x1c6378: 0x0  nop
    ctx->pc = 0x1c6378u;
    // NOP
    // 0x1c637c: 0x0  nop
    ctx->pc = 0x1c637cu;
    // NOP
    // 0x1c6380: 0xc0c3966  jal         func_30E598
    ctx->pc = 0x1C6380u;
    SET_GPR_U32(ctx, 31, 0x1C6388u);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x1C6380u, 0x1C6388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6388u;
label_1c6388:
    // 0x1c6388: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x1c6388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c638c: 0xc44100f0  lwc1        $f1, 0xF0($v0)
    ctx->pc = 0x1c638cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6390: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1c6390u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1c6394: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x1c6394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x1c6398: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1c6398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1c639c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1c639cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1c63a0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C63A0u;
    {
        const bool branch_taken_0x1c63a0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1c63a0) {
            ctx->pc = 0x1C63BCu;
            goto label_1c63bc;
        }
    }
    ctx->pc = 0x1C63A8u;
    // 0x1c63a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c63a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c63ac: 0x0  nop
    ctx->pc = 0x1c63acu;
    // NOP
    // 0x1c63b0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1c63b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c63b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C63B4u;
    {
        const bool branch_taken_0x1c63b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c63b4) {
            ctx->pc = 0x1C63D8u;
            goto label_1c63d8;
        }
    }
    ctx->pc = 0x1C63BCu;
label_1c63bc:
    // 0x1c63bc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1c63bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1c63c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c63c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c63c4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1c63c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c63c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c63c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c63cc: 0x0  nop
    ctx->pc = 0x1c63ccu;
    // NOP
    // 0x1c63d0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1c63d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c63d4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1c63d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1c63d8:
    // 0x1c63d8: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x1c63d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
    // 0x1c63dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c63dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c63e0: 0x0  nop
    ctx->pc = 0x1c63e0u;
    // NOP
    // 0x1c63e4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1c63e4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c63e8: 0xc7a00154  lwc1        $f0, 0x154($sp)
    ctx->pc = 0x1c63e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c63ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c63ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c63f0: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x1c63f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
    // 0x1c63f4: 0x8f83bb80  lw          $v1, -0x4480($gp)
    ctx->pc = 0x1c63f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1c63f8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1c63f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1c63fc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C63FCu;
    {
        const bool branch_taken_0x1c63fc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1c63fc) {
            ctx->pc = 0x1C6418u;
            goto label_1c6418;
        }
    }
    ctx->pc = 0x1C6404u;
    // 0x1c6404: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c6404u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6408: 0x0  nop
    ctx->pc = 0x1c6408u;
    // NOP
    // 0x1c640c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1c640cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c6410: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C6410u;
    {
        const bool branch_taken_0x1c6410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6410) {
            ctx->pc = 0x1C6434u;
            goto label_1c6434;
        }
    }
    ctx->pc = 0x1C6418u;
label_1c6418:
    // 0x1c6418: 0x22042  srl         $a0, $v0, 1
    ctx->pc = 0x1c6418u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1c641c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c641cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c6420: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1c6420u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1c6424: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1c6424u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6428: 0x0  nop
    ctx->pc = 0x1c6428u;
    // NOP
    // 0x1c642c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1c642cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c6430: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1c6430u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1c6434:
    // 0x1c6434: 0x3c034420  lui         $v1, 0x4420
    ctx->pc = 0x1c6434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17440 << 16));
    // 0x1c6438: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c6438u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c643c: 0x0  nop
    ctx->pc = 0x1c643cu;
    // NOP
    // 0x1c6440: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1c6440u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c6444: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x1c6444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6448: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c6448u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c644c: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x1c644cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x1c6450: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x1c6450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c6454: 0xc46100d8  lwc1        $f1, 0xD8($v1)
    ctx->pc = 0x1c6454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6458: 0xc7a00154  lwc1        $f0, 0x154($sp)
    ctx->pc = 0x1c6458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c645c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c645cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c6460: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x1c6460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
    // 0x1c6464: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x1c6464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c6468: 0xc46100dc  lwc1        $f1, 0xDC($v1)
    ctx->pc = 0x1c6468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c646c: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x1c646cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6470: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c6470u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c6474: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x1c6474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x1c6478: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1c6478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c647c: 0x10800077  beqz        $a0, . + 4 + (0x77 << 2)
    ctx->pc = 0x1C647Cu;
    {
        const bool branch_taken_0x1c647c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c647c) {
            ctx->pc = 0x1C665Cu;
            goto label_1c665c;
        }
    }
    ctx->pc = 0x1C6484u;
    // 0x1c6484: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c6484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c6488: 0x10830044  beq         $a0, $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x1C6488u;
    {
        const bool branch_taken_0x1c6488 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c6488) {
            ctx->pc = 0x1C659Cu;
            goto label_1c659c;
        }
    }
    ctx->pc = 0x1C6490u;
    // 0x1c6490: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c6490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6494: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6494u;
    {
        const bool branch_taken_0x1c6494 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x1c6494) {
            ctx->pc = 0x1C64A4u;
            goto label_1c64a4;
        }
    }
    ctx->pc = 0x1C649Cu;
    // 0x1c649c: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x1C649Cu;
    {
        const bool branch_taken_0x1c649c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c649c) {
            ctx->pc = 0x1C665Cu;
            goto label_1c665c;
        }
    }
    ctx->pc = 0x1C64A4u;
label_1c64a4:
    // 0x1c64a4: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x1c64a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c64a8: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1C64A8u;
    SET_GPR_U32(ctx, 31, 0x1C64B0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1C64A8u, 0x1C64B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C64B0u;
label_1c64b0:
    // 0x1c64b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c64b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c64b4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1c64b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c64b8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1c64b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c64bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c64bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c64c0: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1C64C0u;
    SET_GPR_U32(ctx, 31, 0x1C64C8u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1C64C0u, 0x1C64C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C64C8u;
label_1c64c8:
    // 0x1c64c8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c64c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c64cc: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x1c64ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1c64d0: 0x4c00005  bltz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C64D0u;
    {
        const bool branch_taken_0x1c64d0 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x1c64d0) {
            ctx->pc = 0x1C64E8u;
            goto label_1c64e8;
        }
    }
    ctx->pc = 0x1C64D8u;
    // 0x1c64d8: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x1c64d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x1c64dc: 0xa3a2016e  sb          $v0, 0x16E($sp)
    ctx->pc = 0x1c64dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 366), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c64e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C64E0u;
    {
        const bool branch_taken_0x1c64e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c64e0) {
            ctx->pc = 0x1C64F0u;
            goto label_1c64f0;
        }
    }
    ctx->pc = 0x1C64E8u;
label_1c64e8:
    // 0x1c64e8: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x1c64e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1c64ec: 0xa3a2016e  sb          $v0, 0x16E($sp)
    ctx->pc = 0x1c64ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 366), (uint8_t)GPR_U32(ctx, 2));
label_1c64f0:
    // 0x1c64f0: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x1c64f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c64f4: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x1c64f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c64f8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c64f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c64fc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1c64fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1c6500: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1c6500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1c6504: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1c6504u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1c6508: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1c6508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1c650c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1c650cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c6510: 0x2012  mflo        $a0
    ctx->pc = 0x1c6510u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1c6514: 0xc0ba892  jal         func_2EA248
    ctx->pc = 0x1C6514u;
    SET_GPR_U32(ctx, 31, 0x1C651Cu);
    ctx->pc = 0x2EA248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA248u, 0x1C6514u, 0x1C651Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C651Cu;
label_1c651c:
    // 0x1c651c: 0x83a3016e  lb          $v1, 0x16E($sp)
    ctx->pc = 0x1c651cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 366)));
    // 0x1c6520: 0x3363c  dsll32      $a2, $v1, 24
    ctx->pc = 0x1c6520u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1c6524: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x1c6524u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x1c6528: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1c6528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1c652c: 0x27859608  addiu       $a1, $gp, -0x69F8
    ctx->pc = 0x1c652cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940168));
    // 0x1c6530: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1c6530u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6534: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x1C6534u;
    SET_GPR_U32(ctx, 31, 0x1C653Cu);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x1C6534u, 0x1C653Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C653Cu;
label_1c653c:
    // 0x1c653c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c653cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6540: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x1c6540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c6544: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c6544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6548: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1C6548u;
    SET_GPR_U32(ctx, 31, 0x1C6550u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1C6548u, 0x1C6550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6550u;
label_1c6550:
    // 0x1c6550: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c6550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6554: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x1c6554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c6558: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x1c6558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1c655c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c655cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6560: 0xc08c32c  jal         func_230CB0
    ctx->pc = 0x1C6560u;
    SET_GPR_U32(ctx, 31, 0x1C6568u);
    ctx->pc = 0x230CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230CB0u, 0x1C6560u, 0x1C6568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6568u;
label_1c6568:
    // 0x1c6568: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c6568u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c656c: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x1c656cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c6570: 0xc4a0003c  lwc1        $f0, 0x3C($a1)
    ctx->pc = 0x1c6570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6574: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c6574u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c6578: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1c6578u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1c657c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1c657cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1c6580: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x1c6580u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1c6584: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x1c6584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1c6588: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x1c6588u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c658c: 0x1812  mflo        $v1
    ctx->pc = 0x1c658cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1c6590: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x1c6590u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x1c6594: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1C6594u;
    {
        const bool branch_taken_0x1c6594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6594) {
            ctx->pc = 0x1C6694u;
            goto label_1c6694;
        }
    }
    ctx->pc = 0x1C659Cu;
label_1c659c:
    // 0x1c659c: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x1c659cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c65a0: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1C65A0u;
    SET_GPR_U32(ctx, 31, 0x1C65A8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1C65A0u, 0x1C65A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C65A8u;
label_1c65a8:
    // 0x1c65a8: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x1c65a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x1c65ac: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x1c65acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c65b0: 0x8c6400d4  lw          $a0, 0xD4($v1)
    ctx->pc = 0x1c65b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x1c65b4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1c65b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c65b8: 0xc0719cc  jal         func_1C6730
    ctx->pc = 0x1C65B8u;
    SET_GPR_U32(ctx, 31, 0x1C65C0u);
    ctx->pc = 0x1C6730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6730u, 0x1C65B8u, 0x1C65C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C65C0u;
label_1c65c0:
    // 0x1c65c0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c65c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c65c4: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1c65c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c65c8: 0x7ba400b0  lq          $a0, 0xB0($sp)
    ctx->pc = 0x1c65c8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c65cc: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1c65ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c65d0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c65d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c65d4: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1C65D4u;
    SET_GPR_U32(ctx, 31, 0x1C65DCu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1C65D4u, 0x1C65DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C65DCu;
label_1c65dc:
    // 0x1c65dc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1c65dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1c65e0: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C65E0u;
    {
        const bool branch_taken_0x1c65e0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1c65e0) {
            ctx->pc = 0x1C65F8u;
            goto label_1c65f8;
        }
    }
    ctx->pc = 0x1C65E8u;
    // 0x1c65e8: 0x3c1e004e  lui         $fp, 0x4E
    ctx->pc = 0x1c65e8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)78 << 16));
    // 0x1c65ec: 0x27de7618  addiu       $fp, $fp, 0x7618
    ctx->pc = 0x1c65ecu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 30232));
    // 0x1c65f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C65F0u;
    {
        const bool branch_taken_0x1c65f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c65f0) {
            ctx->pc = 0x1C6600u;
            goto label_1c6600;
        }
    }
    ctx->pc = 0x1C65F8u;
label_1c65f8:
    // 0x1c65f8: 0x3c1e004e  lui         $fp, 0x4E
    ctx->pc = 0x1c65f8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)78 << 16));
    // 0x1c65fc: 0x27de7628  addiu       $fp, $fp, 0x7628
    ctx->pc = 0x1c65fcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 30248));
label_1c6600:
    // 0x1c6600: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x1c6600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x1c6604: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1c6604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6608: 0xc08e57c  jal         func_2395F0
    ctx->pc = 0x1C6608u;
    SET_GPR_U32(ctx, 31, 0x1C6610u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x1C6608u, 0x1C6610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6610u;
label_1c6610:
    // 0x1c6610: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1c6610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1c6614: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c6614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6618: 0xc0406d0  jal         func_101B40
    ctx->pc = 0x1C6618u;
    SET_GPR_U32(ctx, 31, 0x1C6620u);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x1C6618u, 0x1C6620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6620u;
label_1c6620:
    // 0x1c6620: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x1c6620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c6624: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1C6624u;
    SET_GPR_U32(ctx, 31, 0x1C662Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1C6624u, 0x1C662Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C662Cu;
label_1c662c:
    // 0x1c662c: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x1c662cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c6630: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c6630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6634: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x1c6634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1c6638: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c6638u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c663c: 0xc08c378  jal         func_230DE0
    ctx->pc = 0x1C663Cu;
    SET_GPR_U32(ctx, 31, 0x1C6644u);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x1C663Cu, 0x1C6644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6644u;
label_1c6644:
    // 0x1c6644: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1c6644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1c6648: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1c6648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c664c: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x1C664Cu;
    SET_GPR_U32(ctx, 31, 0x1C6654u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x1C664Cu, 0x1C6654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6654u;
label_1c6654:
    // 0x1c6654: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1C6654u;
    {
        const bool branch_taken_0x1c6654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6654) {
            ctx->pc = 0x1C6694u;
            goto label_1c6694;
        }
    }
    ctx->pc = 0x1C665Cu;
label_1c665c:
    // 0x1c665c: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x1c665cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c6660: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1C6660u;
    SET_GPR_U32(ctx, 31, 0x1C6668u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1C6660u, 0x1C6668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6668u;
label_1c6668:
    // 0x1c6668: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x1c6668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x1c666c: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x1c666cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c6670: 0x8c4400d4  lw          $a0, 0xD4($v0)
    ctx->pc = 0x1c6670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x1c6674: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1c6674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6678: 0xc0719cc  jal         func_1C6730
    ctx->pc = 0x1C6678u;
    SET_GPR_U32(ctx, 31, 0x1C6680u);
    ctx->pc = 0x1C6730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6730u, 0x1C6678u, 0x1C6680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6680u;
label_1c6680:
    // 0x1c6680: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x1c6680u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c6684: 0x7ba400a0  lq          $a0, 0xA0($sp)
    ctx->pc = 0x1c6684u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c6688: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c6688u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c668c: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1C668Cu;
    SET_GPR_U32(ctx, 31, 0x1C6694u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1C668Cu, 0x1C6694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6694u;
label_1c6694:
    // 0x1c6694: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x1c6694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c6698: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1C6698u;
    SET_GPR_U32(ctx, 31, 0x1C66A0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1C6698u, 0x1C66A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C66A0u;
label_1c66a0:
    // 0x1c66a0: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x1c66a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c66a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c66a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c66a8: 0xc7ac0154  lwc1        $f12, 0x154($sp)
    ctx->pc = 0x1c66a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c66ac: 0xc7ad0150  lwc1        $f13, 0x150($sp)
    ctx->pc = 0x1c66acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c66b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c66b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c66b4: 0xc08c208  jal         func_230820
    ctx->pc = 0x1C66B4u;
    SET_GPR_U32(ctx, 31, 0x1C66BCu);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1C66B4u, 0x1C66BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C66BCu;
label_1c66bc:
    // 0x1c66bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c66bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c66c0: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x1c66c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1c66c4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1c66c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c66c8:
    // 0x1c66c8: 0x8f83bb44  lw          $v1, -0x44BC($gp)
    ctx->pc = 0x1c66c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949700)));
    // 0x1c66cc: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x1c66ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1c66d0: 0x1460fee5  bnez        $v1, . + 4 + (-0x11B << 2)
    ctx->pc = 0x1C66D0u;
    {
        const bool branch_taken_0x1c66d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c66d0) {
            ctx->pc = 0x1C6268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6268;
        }
    }
    ctx->pc = 0x1C66D8u;
    // 0x1c66d8: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x1c66d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1c66dc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1c66dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c66e0: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x1C66E0u;
    SET_GPR_U32(ctx, 31, 0x1C66E8u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1C66E0u, 0x1C66E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C66E8u;
label_1c66e8:
    // 0x1c66e8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c66e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c66ec:
    // 0x1c66ec: 0x93a5016f  lbu         $a1, 0x16F($sp)
    ctx->pc = 0x1c66ecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 367)));
    // 0x1c66f0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1c66f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c66f4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1c66f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c66f8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1c66f8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c66fc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1c66fcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c6700: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1c6700u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c6704: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1c6704u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c6708: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1c6708u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c670c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c670cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c6710: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c6710u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c6714: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c6714u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6718: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c6718u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c671c: 0x27bd0180  addiu       $sp, $sp, 0x180
    ctx->pc = 0x1c671cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1c6720: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6728u;
    // 0x1c6728: 0x0  nop
    ctx->pc = 0x1c6728u;
    // NOP
    // 0x1c672c: 0x0  nop
    ctx->pc = 0x1c672cu;
    // NOP
    ctx->pc = 0x1c6730u;
}
