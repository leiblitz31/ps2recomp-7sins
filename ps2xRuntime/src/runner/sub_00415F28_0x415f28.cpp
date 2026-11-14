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

// Function: sub_00415F28
// Address: 0x415f28 - 0x4162f0
void sub_00415F28_0x415f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00415F28_0x415f28");
#endif

    switch (ctx->pc) {
        case 0x415f58u: goto label_415f58;
        case 0x415f88u: goto label_415f88;
        case 0x415fc4u: goto label_415fc4;
        case 0x415fccu: goto label_415fcc;
        case 0x415fe8u: goto label_415fe8;
        case 0x415ffcu: goto label_415ffc;
        case 0x41600cu: goto label_41600c;
        case 0x41601cu: goto label_41601c;
        case 0x416024u: goto label_416024;
        case 0x416030u: goto label_416030;
        case 0x416040u: goto label_416040;
        case 0x416048u: goto label_416048;
        case 0x41605cu: goto label_41605c;
        case 0x41606cu: goto label_41606c;
        case 0x416074u: goto label_416074;
        case 0x416084u: goto label_416084;
        case 0x41609cu: goto label_41609c;
        case 0x4160a4u: goto label_4160a4;
        case 0x4160acu: goto label_4160ac;
        case 0x4160bcu: goto label_4160bc;
        case 0x4160c4u: goto label_4160c4;
        case 0x4160ecu: goto label_4160ec;
        case 0x416108u: goto label_416108;
        case 0x416130u: goto label_416130;
        case 0x41613cu: goto label_41613c;
        case 0x4161a0u: goto label_4161a0;
        case 0x4161c0u: goto label_4161c0;
        case 0x4161f0u: goto label_4161f0;
        case 0x416210u: goto label_416210;
        case 0x416230u: goto label_416230;
        case 0x41626cu: goto label_41626c;
        case 0x416288u: goto label_416288;
        case 0x4162b4u: goto label_4162b4;
        case 0x4162c8u: goto label_4162c8;
        default: break;
    }

    ctx->pc = 0x415f28u;

    // 0x415f28: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x415f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x415f2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x415f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x415f30: 0x7fb10160  sq          $s1, 0x160($sp)
    ctx->pc = 0x415f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 17));
    // 0x415f34: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x415f34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x415f38: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x415f38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x415f3c: 0x7fb00170  sq          $s0, 0x170($sp)
    ctx->pc = 0x415f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 16));
    // 0x415f40: 0x7fb20150  sq          $s2, 0x150($sp)
    ctx->pc = 0x415f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 18));
    // 0x415f44: 0x7fb30140  sq          $s3, 0x140($sp)
    ctx->pc = 0x415f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 19));
    // 0x415f48: 0x7fb40130  sq          $s4, 0x130($sp)
    ctx->pc = 0x415f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 20));
    // 0x415f4c: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x415f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x415f50: 0xc103322  jal         func_40CC88
    ctx->pc = 0x415F50u;
    SET_GPR_U32(ctx, 31, 0x415F58u);
    ctx->pc = 0x415F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415F50u;
    // 0x415f54: 0x27a70114  addiu       $a3, $sp, 0x114 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x415F50u, 0x415F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415F58u;
label_415f58:
    // 0x415f58: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x415F58u;
    {
        const bool branch_taken_0x415f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x415F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415F58u;
        // 0x415f5c: 0x8fa30114  lw          $v1, 0x114($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415f58) {
            ctx->pc = 0x416140u;
            goto label_416140;
        }
    }
    ctx->pc = 0x415F60u;
    // 0x415f60: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x415f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
    // 0x415f64: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x415f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x415f68: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x415f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x415f6c: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x415f6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
    // 0x415f70: 0x1060006a  beqz        $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x415F70u;
    {
        const bool branch_taken_0x415f70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x415F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415F70u;
        // 0x415f74: 0x8fa60110  lw          $a2, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415f70) {
            ctx->pc = 0x41611Cu;
            goto label_41611c;
        }
    }
    ctx->pc = 0x415F78u;
    // 0x415f78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x415f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x415f7c: 0xafa00118  sw          $zero, 0x118($sp)
    ctx->pc = 0x415f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
    // 0x415f80: 0xc10480a  jal         func_412028
    ctx->pc = 0x415F80u;
    SET_GPR_U32(ctx, 31, 0x415F88u);
    ctx->pc = 0x415F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415F80u;
    // 0x415f84: 0x27a50118  addiu       $a1, $sp, 0x118 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x415F80u, 0x415F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415F88u;
label_415f88:
    // 0x415f88: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x415f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x415f8c: 0x1443006d  bne         $v0, $v1, . + 4 + (0x6D << 2)
    ctx->pc = 0x415F8Cu;
    {
        const bool branch_taken_0x415f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x415F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415F8Cu;
        // 0x415f90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415f8c) {
            ctx->pc = 0x416144u;
            goto label_416144;
        }
    }
    ctx->pc = 0x415F94u;
    // 0x415f94: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x415f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x415f98: 0x41a02  srl         $v1, $a0, 8
    ctx->pc = 0x415f98u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x415f9c: 0x41302  srl         $v0, $a0, 12
    ctx->pc = 0x415f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 12));
    // 0x415fa0: 0x309400ff  andi        $s4, $a0, 0xFF
    ctx->pc = 0x415fa0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x415fa4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x415fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x415fa8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x415FA8u;
    {
        const bool branch_taken_0x415fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x415FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415FA8u;
        // 0x415fac: 0x3063000f  andi        $v1, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x415fa8) {
            ctx->pc = 0x415FBCu;
            goto label_415fbc;
        }
    }
    ctx->pc = 0x415FB0u;
    // 0x415fb0: 0x31300  sll         $v0, $v1, 12
    ctx->pc = 0x415fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
    // 0x415fb4: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x415fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x415fb8: 0xafa20118  sw          $v0, 0x118($sp)
    ctx->pc = 0x415fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 2));
label_415fbc:
    // 0x415fbc: 0xc1080e4  jal         func_420390
    ctx->pc = 0x415FBCu;
    SET_GPR_U32(ctx, 31, 0x415FC4u);
    ctx->pc = 0x415FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415FBCu;
    // 0x415fc0: 0x97b0011a  lhu         $s0, 0x11A($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 282)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420390u, 0x415FBCu, 0x415FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415FC4u;
label_415fc4:
    // 0x415fc4: 0xc1080f2  jal         func_4203C8
    ctx->pc = 0x415FC4u;
    SET_GPR_U32(ctx, 31, 0x415FCCu);
    ctx->pc = 0x415FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415FC4u;
    // 0x415fc8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4203C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4203C8u, 0x415FC4u, 0x415FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415FCCu;
label_415fcc:
    // 0x415fcc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x415fccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x415fd0: 0x2682fffd  addiu       $v0, $s4, -0x3
    ctx->pc = 0x415fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967293));
    // 0x415fd4: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x415fd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x415fd8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x415FD8u;
    {
        const bool branch_taken_0x415fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x415fd8) {
            ctx->pc = 0x416014u;
            goto label_416014;
        }
    }
    ctx->pc = 0x415FE0u;
    // 0x415fe0: 0xc1080dc  jal         func_420370
    ctx->pc = 0x415FE0u;
    SET_GPR_U32(ctx, 31, 0x415FE8u);
    ctx->pc = 0x415FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415FE0u;
    // 0x415fe4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420370u, 0x415FE0u, 0x415FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415FE8u;
label_415fe8:
    // 0x415fe8: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x415fe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x415fec: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x415FECu;
    {
        const bool branch_taken_0x415fec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x415fec) {
            ctx->pc = 0x416004u;
            goto label_416004;
        }
    }
    ctx->pc = 0x415FF4u;
    // 0x415ff4: 0xc1080ea  jal         func_4203A8
    ctx->pc = 0x415FF4u;
    SET_GPR_U32(ctx, 31, 0x415FFCu);
    ctx->pc = 0x415FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415FF4u;
    // 0x415ff8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4203A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4203A8u, 0x415FF4u, 0x415FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415FFCu;
label_415ffc:
    // 0x415ffc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x415FFCu;
    {
        const bool branch_taken_0x415ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x416000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415FFCu;
        // 0x416000: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415ffc) {
            ctx->pc = 0x416028u;
            goto label_416028;
        }
    }
    ctx->pc = 0x416004u;
label_416004:
    // 0x416004: 0xc1080ea  jal         func_4203A8
    ctx->pc = 0x416004u;
    SET_GPR_U32(ctx, 31, 0x41600Cu);
    ctx->pc = 0x416008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416004u;
    // 0x416008: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4203A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4203A8u, 0x416004u, 0x41600Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41600Cu;
label_41600c:
    // 0x41600c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x41600Cu;
    {
        const bool branch_taken_0x41600c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x416010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41600Cu;
        // 0x416010: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41600c) {
            ctx->pc = 0x416028u;
            goto label_416028;
        }
    }
    ctx->pc = 0x416014u;
label_416014:
    // 0x416014: 0xc1080dc  jal         func_420370
    ctx->pc = 0x416014u;
    SET_GPR_U32(ctx, 31, 0x41601Cu);
    ctx->pc = 0x416018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416014u;
    // 0x416018: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420370u, 0x416014u, 0x41601Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41601Cu;
label_41601c:
    // 0x41601c: 0xc1080ea  jal         func_4203A8
    ctx->pc = 0x41601Cu;
    SET_GPR_U32(ctx, 31, 0x416024u);
    ctx->pc = 0x416020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41601Cu;
    // 0x416020: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4203A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4203A8u, 0x41601Cu, 0x416024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416024u;
label_416024:
    // 0x416024: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x416024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_416028:
    // 0x416028: 0xc10521e  jal         func_414878
    ctx->pc = 0x416028u;
    SET_GPR_U32(ctx, 31, 0x416030u);
    ctx->pc = 0x41602Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416028u;
    // 0x41602c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x414878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x414878u, 0x416028u, 0x416030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416030u;
label_416030:
    // 0x416030: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x416030u;
    {
        const bool branch_taken_0x416030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x416034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416030u;
        // 0x416034: 0x27b00080  addiu       $s0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416030) {
            ctx->pc = 0x416050u;
            goto label_416050;
        }
    }
    ctx->pc = 0x416038u;
    // 0x416038: 0xc1080dc  jal         func_420370
    ctx->pc = 0x416038u;
    SET_GPR_U32(ctx, 31, 0x416040u);
    ctx->pc = 0x41603Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416038u;
    // 0x41603c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420370u, 0x416038u, 0x416040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416040u;
label_416040:
    // 0x416040: 0xc1080ea  jal         func_4203A8
    ctx->pc = 0x416040u;
    SET_GPR_U32(ctx, 31, 0x416048u);
    ctx->pc = 0x416044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416040u;
    // 0x416044: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4203A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4203A8u, 0x416040u, 0x416048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416048u;
label_416048:
    // 0x416048: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x416048u;
    {
        const bool branch_taken_0x416048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41604Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416048u;
        // 0x41604c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416048) {
            ctx->pc = 0x416144u;
            goto label_416144;
        }
    }
    ctx->pc = 0x416050u;
label_416050:
    // 0x416050: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x416050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x416054: 0xc10521e  jal         func_414878
    ctx->pc = 0x416054u;
    SET_GPR_U32(ctx, 31, 0x41605Cu);
    ctx->pc = 0x416058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416054u;
    // 0x416058: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x414878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x414878u, 0x416054u, 0x41605Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41605Cu;
label_41605c:
    // 0x41605c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x41605Cu;
    {
        const bool branch_taken_0x41605c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x416060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41605Cu;
        // 0x416060: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41605c) {
            ctx->pc = 0x41607Cu;
            goto label_41607c;
        }
    }
    ctx->pc = 0x416064u;
    // 0x416064: 0xc1080dc  jal         func_420370
    ctx->pc = 0x416064u;
    SET_GPR_U32(ctx, 31, 0x41606Cu);
    ctx->pc = 0x416068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416064u;
    // 0x416068: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420370u, 0x416064u, 0x41606Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41606Cu;
label_41606c:
    // 0x41606c: 0xc1080ea  jal         func_4203A8
    ctx->pc = 0x41606Cu;
    SET_GPR_U32(ctx, 31, 0x416074u);
    ctx->pc = 0x416070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41606Cu;
    // 0x416070: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4203A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4203A8u, 0x41606Cu, 0x416074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416074u;
label_416074:
    // 0x416074: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x416074u;
    {
        const bool branch_taken_0x416074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x416078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416074u;
        // 0x416078: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416074) {
            ctx->pc = 0x416144u;
            goto label_416144;
        }
    }
    ctx->pc = 0x41607Cu;
label_41607c:
    // 0x41607c: 0xc107fa4  jal         func_41FE90
    ctx->pc = 0x41607Cu;
    SET_GPR_U32(ctx, 31, 0x416084u);
    ctx->pc = 0x416080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41607Cu;
    // 0x416080: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41FE90u, 0x41607Cu, 0x416084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416084u;
label_416084:
    // 0x416084: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x416084u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x416088: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x416088u;
    {
        const bool branch_taken_0x416088 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x41608Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416088u;
        // 0x41608c: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416088) {
            ctx->pc = 0x4160B4u;
            goto label_4160b4;
        }
    }
    ctx->pc = 0x416090u;
    // 0x416090: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x416090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x416094: 0xc104ac2  jal         func_412B08
    ctx->pc = 0x416094u;
    SET_GPR_U32(ctx, 31, 0x41609Cu);
    ctx->pc = 0x416098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416094u;
    // 0x416098: 0x2484ca10  addiu       $a0, $a0, -0x35F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412B08u, 0x416094u, 0x41609Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41609Cu;
label_41609c:
    // 0x41609c: 0xc1080dc  jal         func_420370
    ctx->pc = 0x41609Cu;
    SET_GPR_U32(ctx, 31, 0x4160A4u);
    ctx->pc = 0x4160A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41609Cu;
    // 0x4160a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420370u, 0x41609Cu, 0x4160A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4160A4u;
label_4160a4:
    // 0x4160a4: 0xc1080ea  jal         func_4203A8
    ctx->pc = 0x4160A4u;
    SET_GPR_U32(ctx, 31, 0x4160ACu);
    ctx->pc = 0x4160A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4160A4u;
    // 0x4160a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4203A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4203A8u, 0x4160A4u, 0x4160ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4160ACu;
label_4160ac:
    // 0x4160ac: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x4160ACu;
    {
        const bool branch_taken_0x4160ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4160B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4160ACu;
        // 0x4160b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4160ac) {
            ctx->pc = 0x416144u;
            goto label_416144;
        }
    }
    ctx->pc = 0x4160B4u;
label_4160b4:
    // 0x4160b4: 0xc1080dc  jal         func_420370
    ctx->pc = 0x4160B4u;
    SET_GPR_U32(ctx, 31, 0x4160BCu);
    ctx->pc = 0x4160B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4160B4u;
    // 0x4160b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420370u, 0x4160B4u, 0x4160BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4160BCu;
label_4160bc:
    // 0x4160bc: 0xc1080ea  jal         func_4203A8
    ctx->pc = 0x4160BCu;
    SET_GPR_U32(ctx, 31, 0x4160C4u);
    ctx->pc = 0x4160C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4160BCu;
    // 0x4160c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4203A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4203A8u, 0x4160BCu, 0x4160C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4160C4u;
label_4160c4:
    // 0x4160c4: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x4160c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x4160c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4160c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4160cc: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4160CCu;
    {
        const bool branch_taken_0x4160cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4160D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4160CCu;
        // 0x4160d0: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4160cc) {
            ctx->pc = 0x4160FCu;
            goto label_4160fc;
        }
    }
    ctx->pc = 0x4160D4u;
    // 0x4160d4: 0x97a20118  lhu         $v0, 0x118($sp)
    ctx->pc = 0x4160d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x4160d8: 0x2484ca10  addiu       $a0, $a0, -0x35F0
    ctx->pc = 0x4160d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953488));
    // 0x4160dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4160dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4160e0: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x4160e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x4160e4: 0xc1049e2  jal         func_412788
    ctx->pc = 0x4160E4u;
    SET_GPR_U32(ctx, 31, 0x4160ECu);
    ctx->pc = 0x4160E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4160E4u;
    // 0x4160e8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412788u, 0x4160E4u, 0x4160ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4160ECu;
label_4160ec:
    // 0x4160ec: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x4160ECu;
    {
        const bool branch_taken_0x4160ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4160F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4160ECu;
        // 0x4160f0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4160ec) {
            ctx->pc = 0x416144u;
            goto label_416144;
        }
    }
    ctx->pc = 0x4160F4u;
    // 0x4160f4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x4160F4u;
    {
        const bool branch_taken_0x4160f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4160F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4160F4u;
        // 0x4160f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4160f4) {
            ctx->pc = 0x416144u;
            goto label_416144;
        }
    }
    ctx->pc = 0x4160FCu;
label_4160fc:
    // 0x4160fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4160fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x416100: 0xc104ac2  jal         func_412B08
    ctx->pc = 0x416100u;
    SET_GPR_U32(ctx, 31, 0x416108u);
    ctx->pc = 0x416104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416100u;
    // 0x416104: 0x2484ca10  addiu       $a0, $a0, -0x35F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412B08u, 0x416100u, 0x416108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416108u;
label_416108:
    // 0x416108: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x416108u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41610c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x41610Cu;
    {
        const bool branch_taken_0x41610c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x416110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41610Cu;
        // 0x416110: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41610c) {
            ctx->pc = 0x416144u;
            goto label_416144;
        }
    }
    ctx->pc = 0x416114u;
    // 0x416114: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x416114u;
    {
        const bool branch_taken_0x416114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x416118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416114u;
        // 0x416118: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416114) {
            ctx->pc = 0x416144u;
            goto label_416144;
        }
    }
    ctx->pc = 0x41611Cu;
label_41611c:
    // 0x41611c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x41611cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x416120: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x416120u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x416124: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x416124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x416128: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x416128u;
    SET_GPR_U32(ctx, 31, 0x416130u);
    ctx->pc = 0x41612Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416128u;
    // 0x41612c: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x416128u, 0x416130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416130u;
label_416130:
    // 0x416130: 0xafa20104  sw          $v0, 0x104($sp)
    ctx->pc = 0x416130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
    // 0x416134: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x416134u;
    SET_GPR_U32(ctx, 31, 0x41613Cu);
    ctx->pc = 0x416138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416134u;
    // 0x416138: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x416134u, 0x41613Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41613Cu;
label_41613c:
    // 0x41613c: 0x0  nop
    ctx->pc = 0x41613cu;
    // NOP
label_416140:
    // 0x416140: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x416140u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_416144:
    // 0x416144: 0x7bb00170  lq          $s0, 0x170($sp)
    ctx->pc = 0x416144u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x416148: 0x7bb10160  lq          $s1, 0x160($sp)
    ctx->pc = 0x416148u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x41614c: 0x7bb20150  lq          $s2, 0x150($sp)
    ctx->pc = 0x41614cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x416150: 0x7bb30140  lq          $s3, 0x140($sp)
    ctx->pc = 0x416150u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x416154: 0x7bb40130  lq          $s4, 0x130($sp)
    ctx->pc = 0x416154u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x416158: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x416158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x41615c: 0x3e00008  jr          $ra
    ctx->pc = 0x41615Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x416160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41615Cu;
        // 0x416160: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41615Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x416164u;
    // 0x416164: 0x0  nop
    ctx->pc = 0x416164u;
    // NOP
    // 0x416168: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x416168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x41616c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x41616cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x416170: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x416170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x416174: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x416174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x416178: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x416178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x41617c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x41617cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x416180: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x416180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x416184: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x416184u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x416188: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x416188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x41618c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x41618cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x416190: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x416190u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x416194: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x416194u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x416198: 0xc1082d8  jal         func_420B60
    ctx->pc = 0x416198u;
    SET_GPR_U32(ctx, 31, 0x4161A0u);
    ctx->pc = 0x41619Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416198u;
    // 0x41619c: 0x24a56848  addiu       $a1, $a1, 0x6848 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420B60u, 0x416198u, 0x4161A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4161A0u;
label_4161a0:
    // 0x4161a0: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x4161a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x4161a4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4161A4u;
    {
        const bool branch_taken_0x4161a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4161A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4161A4u;
        // 0x4161a8: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4161a4) {
            ctx->pc = 0x4161B4u;
            goto label_4161b4;
        }
    }
    ctx->pc = 0x4161ACu;
    // 0x4161ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4161ACu;
    {
        const bool branch_taken_0x4161ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4161B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4161ACu;
        // 0x4161b0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4161ac) {
            ctx->pc = 0x4161D0u;
            goto label_4161d0;
        }
    }
    ctx->pc = 0x4161B4u;
label_4161b4:
    // 0x4161b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4161b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4161b8: 0xc104aec  jal         func_412BB0
    ctx->pc = 0x4161B8u;
    SET_GPR_U32(ctx, 31, 0x4161C0u);
    ctx->pc = 0x4161BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4161B8u;
    // 0x4161bc: 0x2484ca28  addiu       $a0, $a0, -0x35D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412BB0u, 0x4161B8u, 0x4161C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4161C0u;
label_4161c0:
    // 0x4161c0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x4161c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4161c4: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x4161c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x4161c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4161c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4161cc: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x4161ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_4161d0:
    // 0x4161d0: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x4161D0u;
    {
        const bool branch_taken_0x4161d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4161D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4161D0u;
        // 0x4161d4: 0x3c070003  lui         $a3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4161d0) {
            ctx->pc = 0x416290u;
            goto label_416290;
        }
    }
    ctx->pc = 0x4161D8u;
    // 0x4161d8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x4161d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4161dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4161dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4161e0: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x4161e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x4161e4: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x4161e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x4161e8: 0xc103404  jal         func_40D010
    ctx->pc = 0x4161E8u;
    SET_GPR_U32(ctx, 31, 0x4161F0u);
    ctx->pc = 0x4161ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4161E8u;
    // 0x4161ec: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x4161E8u, 0x4161F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4161F0u;
label_4161f0:
    // 0x4161f0: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x4161F0u;
    {
        const bool branch_taken_0x4161f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4161F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4161F0u;
        // 0x4161f4: 0x3c070003  lui         $a3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4161f0) {
            ctx->pc = 0x416290u;
            goto label_416290;
        }
    }
    ctx->pc = 0x4161F8u;
    // 0x4161f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4161f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4161fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4161fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x416200: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x416200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x416204: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x416204u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x416208: 0xc103404  jal         func_40D010
    ctx->pc = 0x416208u;
    SET_GPR_U32(ctx, 31, 0x416210u);
    ctx->pc = 0x41620Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416208u;
    // 0x41620c: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x416208u, 0x416210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416210u;
label_416210:
    // 0x416210: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x416210u;
    {
        const bool branch_taken_0x416210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x416214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416210u;
        // 0x416214: 0x3c050041  lui         $a1, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416210) {
            ctx->pc = 0x416290u;
            goto label_416290;
        }
    }
    ctx->pc = 0x416218u;
    // 0x416218: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x416218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x41621c: 0x24a568d8  addiu       $a1, $a1, 0x68D8
    ctx->pc = 0x41621cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26840));
    // 0x416220: 0xa7a00000  sh          $zero, 0x0($sp)
    ctx->pc = 0x416220u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x416224: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x416224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x416228: 0xc1082d8  jal         func_420B60
    ctx->pc = 0x416228u;
    SET_GPR_U32(ctx, 31, 0x416230u);
    ctx->pc = 0x41622Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416228u;
    // 0x41622c: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420B60u, 0x416228u, 0x416230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416230u;
label_416230:
    // 0x416230: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x416230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x416234: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x416234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x416238: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x416238u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x41623c: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x41623Cu;
    {
        const bool branch_taken_0x41623c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x416240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41623Cu;
        // 0x416240: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41623c) {
            ctx->pc = 0x4162DCu;
            goto label_4162dc;
        }
    }
    ctx->pc = 0x416244u;
    // 0x416244: 0x97a20030  lhu         $v0, 0x30($sp)
    ctx->pc = 0x416244u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x416248: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x416248u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x41624c: 0x2484e890  addiu       $a0, $a0, -0x1770
    ctx->pc = 0x41624cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961296));
    // 0x416250: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x416250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x416254: 0x37a60002  ori         $a2, $sp, 0x2
    ctx->pc = 0x416254u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)2);
    // 0x416258: 0xa7a20000  sh          $v0, 0x0($sp)
    ctx->pc = 0x416258u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x41625c: 0xa7a00002  sh          $zero, 0x2($sp)
    ctx->pc = 0x41625cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x416260: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x416260u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x416264: 0xc106494  jal         func_419250
    ctx->pc = 0x416264u;
    SET_GPR_U32(ctx, 31, 0x41626Cu);
    ctx->pc = 0x416268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416264u;
    // 0x416268: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419250u, 0x416264u, 0x41626Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41626Cu;
label_41626c:
    // 0x41626c: 0x97a30002  lhu         $v1, 0x2($sp)
    ctx->pc = 0x41626cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x416270: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x416270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x416274: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x416274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x416278: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x416278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x41627c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x41627cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x416280: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x416280u;
    SET_GPR_U32(ctx, 31, 0x416288u);
    ctx->pc = 0x416284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416280u;
    // 0x416284: 0xa7a30002  sh          $v1, 0x2($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x416280u, 0x416288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416288u;
label_416288:
    // 0x416288: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x416288u;
    {
        const bool branch_taken_0x416288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41628Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416288u;
        // 0x41628c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416288) {
            ctx->pc = 0x416298u;
            goto label_416298;
        }
    }
    ctx->pc = 0x416290u;
label_416290:
    // 0x416290: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x416290u;
    {
        const bool branch_taken_0x416290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x416294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416290u;
        // 0x416294: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416290) {
            ctx->pc = 0x4162DCu;
            goto label_4162dc;
        }
    }
    ctx->pc = 0x416298u;
label_416298:
    // 0x416298: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x416298u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x41629c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41629cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4162a0: 0x24a568f0  addiu       $a1, $a1, 0x68F0
    ctx->pc = 0x4162a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26864));
    // 0x4162a4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x4162a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4162a8: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x4162a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x4162ac: 0xc1082d8  jal         func_420B60
    ctx->pc = 0x4162ACu;
    SET_GPR_U32(ctx, 31, 0x4162B4u);
    ctx->pc = 0x4162B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4162ACu;
    // 0x4162b0: 0xafb10010  sw          $s1, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420B60u, 0x4162ACu, 0x4162B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4162B4u;
label_4162b4:
    // 0x4162b4: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x4162b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x4162b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4162b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4162bc: 0x2484ca28  addiu       $a0, $a0, -0x35D8
    ctx->pc = 0x4162bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953512));
    // 0x4162c0: 0xc104a72  jal         func_4129C8
    ctx->pc = 0x4162C0u;
    SET_GPR_U32(ctx, 31, 0x4162C8u);
    ctx->pc = 0x4162C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4162C0u;
    // 0x4162c4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4129C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4129C8u, 0x4162C0u, 0x4162C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4162C8u;
label_4162c8:
    // 0x4162c8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4162C8u;
    {
        const bool branch_taken_0x4162c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4162c8) {
            ctx->pc = 0x4162CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4162C8u;
            // 0x4162cc: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4162D0u;
            goto label_4162d0;
        }
    }
    ctx->pc = 0x4162D0u;
label_4162d0:
    // 0x4162d0: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x4162d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x4162d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4162d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4162d8: 0x203100b  movn        $v0, $s0, $v1
    ctx->pc = 0x4162d8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
label_4162dc:
    // 0x4162dc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x4162dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4162e0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x4162e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4162e4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4162e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4162e8: 0x3e00008  jr          $ra
    ctx->pc = 0x4162E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4162ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4162E8u;
        // 0x4162ec: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4162E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4162F0u;
}
