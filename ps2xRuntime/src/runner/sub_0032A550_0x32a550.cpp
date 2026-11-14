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

// Function: sub_0032A550
// Address: 0x32a550 - 0x32a678
void sub_0032A550_0x32a550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032A550_0x32a550");
#endif

    switch (ctx->pc) {
        case 0x32a578u: goto label_32a578;
        case 0x32a5a8u: goto label_32a5a8;
        case 0x32a5ccu: goto label_32a5cc;
        case 0x32a5dcu: goto label_32a5dc;
        case 0x32a5ecu: goto label_32a5ec;
        case 0x32a610u: goto label_32a610;
        case 0x32a634u: goto label_32a634;
        case 0x32a644u: goto label_32a644;
        default: break;
    }

    ctx->pc = 0x32a550u;

    // 0x32a550: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32a550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32a554: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x32a554u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x32a558: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x32a558u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x32a55c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x32a55cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x32a560: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32a560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32a564: 0x24c6a678  addiu       $a2, $a2, -0x5988
    ctx->pc = 0x32a564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944376));
    // 0x32a568: 0x24e7a778  addiu       $a3, $a3, -0x5888
    ctx->pc = 0x32a568u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294944632));
    // 0x32a56c: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x32a56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x32a570: 0xc1063f6  jal         func_418FD8
    ctx->pc = 0x32A570u;
    SET_GPR_U32(ctx, 31, 0x32A578u);
    ctx->pc = 0x32A574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A570u;
    // 0x32a574: 0x24050123  addiu       $a1, $zero, 0x123 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418FD8u, 0x32A570u, 0x32A578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A578u;
label_32a578:
    // 0x32a578: 0x3c10004f  lui         $s0, 0x4F
    ctx->pc = 0x32a578u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)79 << 16));
    // 0x32a57c: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x32a57cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x32a580: 0xae022318  sw          $v0, 0x2318($s0)
    ctx->pc = 0x32a580u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4F2318u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4F2318u, _value); } while (0);
    // 0x32a584: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x32a584u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x32a588: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x32a588u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x32a58c: 0x26102318  addiu       $s0, $s0, 0x2318
    ctx->pc = 0x32a58cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8984));
    // 0x32a590: 0x250884b8  addiu       $t0, $t0, -0x7B48
    ctx->pc = 0x32a590u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294935736));
    // 0x32a594: 0x24c68438  addiu       $a2, $a2, -0x7BC8
    ctx->pc = 0x32a594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935608));
    // 0x32a598: 0x24e78460  addiu       $a3, $a3, -0x7BA0
    ctx->pc = 0x32a598u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294935648));
    // 0x32a59c: 0x24050123  addiu       $a1, $zero, 0x123
    ctx->pc = 0x32a59cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    // 0x32a5a0: 0xc0e28ec  jal         func_38A3B0
    ctx->pc = 0x32A5A0u;
    SET_GPR_U32(ctx, 31, 0x32A5A8u);
    ctx->pc = 0x32A5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A5A0u;
    // 0x32a5a4: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A3B0u, 0x32A5A0u, 0x32A5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A5A8u;
label_32a5a8:
    // 0x32a5a8: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x32a5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x32a5ac: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x32a5acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x32a5b0: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x32a5b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x32a5b4: 0x24c68520  addiu       $a2, $a2, -0x7AE0
    ctx->pc = 0x32a5b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935840));
    // 0x32a5b8: 0x24e78510  addiu       $a3, $a3, -0x7AF0
    ctx->pc = 0x32a5b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294935824));
    // 0x32a5bc: 0x24a58518  addiu       $a1, $a1, -0x7AE8
    ctx->pc = 0x32a5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935832));
    // 0x32a5c0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x32a5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x32a5c4: 0xc0e2910  jal         func_38A440
    ctx->pc = 0x32A5C4u;
    SET_GPR_U32(ctx, 31, 0x32A5CCu);
    ctx->pc = 0x32A5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A5C4u;
    // 0x32a5c8: 0x24040123  addiu       $a0, $zero, 0x123 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A440u, 0x32A5C4u, 0x32A5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A5CCu;
label_32a5cc:
    // 0x32a5cc: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x32a5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x32a5d0: 0x24040123  addiu       $a0, $zero, 0x123
    ctx->pc = 0x32a5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    // 0x32a5d4: 0xc0e291e  jal         func_38A478
    ctx->pc = 0x32A5D4u;
    SET_GPR_U32(ctx, 31, 0x32A5DCu);
    ctx->pc = 0x32A5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A5D4u;
    // 0x32a5d8: 0x24a58528  addiu       $a1, $a1, -0x7AD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A478u, 0x32A5D4u, 0x32A5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A5DCu;
label_32a5dc:
    // 0x32a5dc: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x32a5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x32a5e0: 0x24040123  addiu       $a0, $zero, 0x123
    ctx->pc = 0x32a5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    // 0x32a5e4: 0xc0e2928  jal         func_38A4A0
    ctx->pc = 0x32A5E4u;
    SET_GPR_U32(ctx, 31, 0x32A5ECu);
    ctx->pc = 0x32A5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A5E4u;
    // 0x32a5e8: 0x24a58588  addiu       $a1, $a1, -0x7A78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A4A0u, 0x32A5E4u, 0x32A5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A5ECu;
label_32a5ec:
    // 0x32a5ec: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x32a5ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x32a5f0: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x32a5f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x32a5f4: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x32a5f4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x32a5f8: 0x24c69380  addiu       $a2, $a2, -0x6C80
    ctx->pc = 0x32a5f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939520));
    // 0x32a5fc: 0x250893f8  addiu       $t0, $t0, -0x6C08
    ctx->pc = 0x32a5fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294939640));
    // 0x32a600: 0x24e793a0  addiu       $a3, $a3, -0x6C60
    ctx->pc = 0x32a600u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939552));
    // 0x32a604: 0x24050123  addiu       $a1, $zero, 0x123
    ctx->pc = 0x32a604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    // 0x32a608: 0xc0e344a  jal         func_38D128
    ctx->pc = 0x32A608u;
    SET_GPR_U32(ctx, 31, 0x32A610u);
    ctx->pc = 0x32A60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A608u;
    // 0x32a60c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D128u, 0x32A608u, 0x32A610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A610u;
label_32a610:
    // 0x32a610: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x32a610u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x32a614: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x32a614u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x32a618: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x32a618u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x32a61c: 0x24a59498  addiu       $a1, $a1, -0x6B68
    ctx->pc = 0x32a61cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939800));
    // 0x32a620: 0x24c694f0  addiu       $a2, $a2, -0x6B10
    ctx->pc = 0x32a620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939888));
    // 0x32a624: 0x24e79458  addiu       $a3, $a3, -0x6BA8
    ctx->pc = 0x32a624u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939736));
    // 0x32a628: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x32a628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x32a62c: 0xc0e345c  jal         func_38D170
    ctx->pc = 0x32A62Cu;
    SET_GPR_U32(ctx, 31, 0x32A634u);
    ctx->pc = 0x32A630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A62Cu;
    // 0x32a630: 0x24040123  addiu       $a0, $zero, 0x123 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D170u, 0x32A62Cu, 0x32A634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A634u;
label_32a634:
    // 0x32a634: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x32a634u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x32a638: 0x24040123  addiu       $a0, $zero, 0x123
    ctx->pc = 0x32a638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    // 0x32a63c: 0xc0e346a  jal         func_38D1A8
    ctx->pc = 0x32A63Cu;
    SET_GPR_U32(ctx, 31, 0x32A644u);
    ctx->pc = 0x32A640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A63Cu;
    // 0x32a640: 0x24a59520  addiu       $a1, $a1, -0x6AE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D1A8u, 0x32A63Cu, 0x32A644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A644u;
label_32a644:
    // 0x32a644: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x32a644u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32a648: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32a648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32a64c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32a64cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32a650: 0x3e00008  jr          $ra
    ctx->pc = 0x32A650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A650u;
        // 0x32a654: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A658u;
    // 0x32a658: 0xaf84a668  sw          $a0, -0x5998($gp)
    ctx->pc = 0x32a658u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294944360), GPR_U32(ctx, 4));
    // 0x32a65c: 0x3e00008  jr          $ra
    ctx->pc = 0x32A65Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A65Cu;
        // 0x32a660: 0xaf85a66c  sw          $a1, -0x5994($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294944364), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A65Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A664u;
    // 0x32a664: 0x0  nop
    ctx->pc = 0x32a664u;
    // NOP
    // 0x32a668: 0xaf84a660  sw          $a0, -0x59A0($gp)
    ctx->pc = 0x32a668u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294944352), GPR_U32(ctx, 4));
    // 0x32a66c: 0x3e00008  jr          $ra
    ctx->pc = 0x32A66Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A66Cu;
        // 0x32a670: 0xaf85a664  sw          $a1, -0x599C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294944356), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A66Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A674u;
    // 0x32a674: 0x0  nop
    ctx->pc = 0x32a674u;
    // NOP
    ctx->pc = 0x32a678u;
}
