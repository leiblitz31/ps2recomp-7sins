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

// Function: sub_00343120
// Address: 0x343120 - 0x343280
void sub_00343120_0x343120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00343120_0x343120");
#endif

    switch (ctx->pc) {
        case 0x343120u: goto label_343120;
        case 0x343124u: goto label_343124;
        case 0x343128u: goto label_343128;
        case 0x34312cu: goto label_34312c;
        case 0x343130u: goto label_343130;
        case 0x343134u: goto label_343134;
        case 0x343138u: goto label_343138;
        case 0x34313cu: goto label_34313c;
        case 0x343140u: goto label_343140;
        case 0x343144u: goto label_343144;
        case 0x343148u: goto label_343148;
        case 0x34314cu: goto label_34314c;
        case 0x343150u: goto label_343150;
        case 0x343154u: goto label_343154;
        case 0x343158u: goto label_343158;
        case 0x34315cu: goto label_34315c;
        case 0x343160u: goto label_343160;
        case 0x343164u: goto label_343164;
        case 0x343168u: goto label_343168;
        case 0x34316cu: goto label_34316c;
        case 0x343170u: goto label_343170;
        case 0x343174u: goto label_343174;
        case 0x343178u: goto label_343178;
        case 0x34317cu: goto label_34317c;
        case 0x343180u: goto label_343180;
        case 0x343184u: goto label_343184;
        case 0x343188u: goto label_343188;
        case 0x34318cu: goto label_34318c;
        case 0x343190u: goto label_343190;
        case 0x343194u: goto label_343194;
        case 0x343198u: goto label_343198;
        case 0x34319cu: goto label_34319c;
        case 0x3431a0u: goto label_3431a0;
        case 0x3431a4u: goto label_3431a4;
        case 0x3431a8u: goto label_3431a8;
        case 0x3431acu: goto label_3431ac;
        case 0x3431b0u: goto label_3431b0;
        case 0x3431b4u: goto label_3431b4;
        case 0x3431b8u: goto label_3431b8;
        case 0x3431bcu: goto label_3431bc;
        case 0x3431c0u: goto label_3431c0;
        case 0x3431c4u: goto label_3431c4;
        case 0x3431c8u: goto label_3431c8;
        case 0x3431ccu: goto label_3431cc;
        case 0x3431d0u: goto label_3431d0;
        case 0x3431d4u: goto label_3431d4;
        case 0x3431d8u: goto label_3431d8;
        case 0x3431dcu: goto label_3431dc;
        case 0x3431e0u: goto label_3431e0;
        case 0x3431e4u: goto label_3431e4;
        case 0x3431e8u: goto label_3431e8;
        case 0x3431ecu: goto label_3431ec;
        case 0x3431f0u: goto label_3431f0;
        case 0x3431f4u: goto label_3431f4;
        case 0x3431f8u: goto label_3431f8;
        case 0x3431fcu: goto label_3431fc;
        case 0x343200u: goto label_343200;
        case 0x343204u: goto label_343204;
        case 0x343208u: goto label_343208;
        case 0x34320cu: goto label_34320c;
        case 0x343210u: goto label_343210;
        case 0x343214u: goto label_343214;
        case 0x343218u: goto label_343218;
        case 0x34321cu: goto label_34321c;
        case 0x343220u: goto label_343220;
        case 0x343224u: goto label_343224;
        case 0x343228u: goto label_343228;
        case 0x34322cu: goto label_34322c;
        case 0x343230u: goto label_343230;
        case 0x343234u: goto label_343234;
        case 0x343238u: goto label_343238;
        case 0x34323cu: goto label_34323c;
        case 0x343240u: goto label_343240;
        case 0x343244u: goto label_343244;
        case 0x343248u: goto label_343248;
        case 0x34324cu: goto label_34324c;
        case 0x343250u: goto label_343250;
        case 0x343254u: goto label_343254;
        case 0x343258u: goto label_343258;
        case 0x34325cu: goto label_34325c;
        case 0x343260u: goto label_343260;
        case 0x343264u: goto label_343264;
        case 0x343268u: goto label_343268;
        case 0x34326cu: goto label_34326c;
        case 0x343270u: goto label_343270;
        case 0x343274u: goto label_343274;
        case 0x343278u: goto label_343278;
        case 0x34327cu: goto label_34327c;
        default: break;
    }

    ctx->pc = 0x343120u;

label_343120:
    // 0x343120: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x343120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_343124:
    // 0x343124: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x343124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_343128:
    // 0x343128: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x343128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_34312c:
    // 0x34312c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x34312cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_343130:
    // 0x343130: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x343130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_343134:
    // 0x343134: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x343134u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_343138:
    // 0x343138: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x343138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_34313c:
    // 0x34313c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x34313cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_343140:
    // 0x343140: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x343140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_343144:
    // 0x343144: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x343144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_343148:
    // 0x343148: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x343148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_34314c:
    // 0x34314c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x34314cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_343150:
    // 0x343150: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x343150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_343154:
    // 0x343154: 0x8e74000c  lw          $s4, 0xC($s3)
    ctx->pc = 0x343154u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_343158:
    // 0x343158: 0x8e700018  lw          $s0, 0x18($s3)
    ctx->pc = 0x343158u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_34315c:
    // 0x34315c: 0xc103440  jal         func_40D100
label_343160:
    if (ctx->pc == 0x343160u) {
        ctx->pc = 0x343160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34315Cu;
        // 0x343160: 0x26850004  addiu       $a1, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343164u;
        goto label_343164;
    }
    ctx->pc = 0x34315Cu;
    SET_GPR_U32(ctx, 31, 0x343164u);
    ctx->pc = 0x343160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34315Cu;
    // 0x343160: 0x26850004  addiu       $a1, $s4, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x34315Cu, 0x343164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343164u;
label_343164:
    // 0x343164: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x343164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_343168:
    // 0x343168: 0x26650004  addiu       $a1, $s3, 0x4
    ctx->pc = 0x343168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_34316c:
    // 0x34316c: 0xc103440  jal         func_40D100
label_343170:
    if (ctx->pc == 0x343170u) {
        ctx->pc = 0x343170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34316Cu;
        // 0x343170: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343174u;
        goto label_343174;
    }
    ctx->pc = 0x34316Cu;
    SET_GPR_U32(ctx, 31, 0x343174u);
    ctx->pc = 0x343170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34316Cu;
    // 0x343170: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x34316Cu, 0x343174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343174u;
label_343174:
    // 0x343174: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x343174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_343178:
    // 0x343178: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x343178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_34317c:
    // 0x34317c: 0xc103440  jal         func_40D100
label_343180:
    if (ctx->pc == 0x343180u) {
        ctx->pc = 0x343180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34317Cu;
        // 0x343180: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343184u;
        goto label_343184;
    }
    ctx->pc = 0x34317Cu;
    SET_GPR_U32(ctx, 31, 0x343184u);
    ctx->pc = 0x343180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34317Cu;
    // 0x343180: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x34317Cu, 0x343184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343184u;
label_343184:
    // 0x343184: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x343184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_343188:
    // 0x343188: 0x26650014  addiu       $a1, $s3, 0x14
    ctx->pc = 0x343188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
label_34318c:
    // 0x34318c: 0xc103440  jal         func_40D100
label_343190:
    if (ctx->pc == 0x343190u) {
        ctx->pc = 0x343190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34318Cu;
        // 0x343190: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343194u;
        goto label_343194;
    }
    ctx->pc = 0x34318Cu;
    SET_GPR_U32(ctx, 31, 0x343194u);
    ctx->pc = 0x343190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34318Cu;
    // 0x343190: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x34318Cu, 0x343194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343194u;
label_343194:
    // 0x343194: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x343194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_343198:
    // 0x343198: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x343198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34319c:
    // 0x34319c: 0x8c63c344  lw          $v1, -0x3CBC($v1)
    ctx->pc = 0x34319cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294951748)));
label_3431a0:
    // 0x3431a0: 0x54620014  bnel        $v1, $v0, . + 4 + (0x14 << 2)
label_3431a4:
    if (ctx->pc == 0x3431A4u) {
        ctx->pc = 0x3431A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3431A0u;
        // 0x3431a4: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3431A8u;
        goto label_3431a8;
    }
    ctx->pc = 0x3431A0u;
    {
        const bool branch_taken_0x3431a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3431a0) {
            ctx->pc = 0x3431A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3431A0u;
            // 0x3431a4: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3431F4u;
            goto label_3431f4;
        }
    }
    ctx->pc = 0x3431A8u;
label_3431a8:
    // 0x3431a8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3431a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3431ac:
    // 0x3431ac: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x3431acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_3431b0:
    // 0x3431b0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3431b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3431b4:
    // 0x3431b4: 0xc103440  jal         func_40D100
label_3431b8:
    if (ctx->pc == 0x3431B8u) {
        ctx->pc = 0x3431B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3431B4u;
        // 0x3431b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3431BCu;
        goto label_3431bc;
    }
    ctx->pc = 0x3431B4u;
    SET_GPR_U32(ctx, 31, 0x3431BCu);
    ctx->pc = 0x3431B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3431B4u;
    // 0x3431b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x3431B4u, 0x3431BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3431BCu;
label_3431bc:
    // 0x3431bc: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3431bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3431c0:
    // 0x3431c0: 0xc0d1288  jal         func_344A20
label_3431c4:
    if (ctx->pc == 0x3431C4u) {
        ctx->pc = 0x3431C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3431C0u;
        // 0x3431c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3431C8u;
        goto label_3431c8;
    }
    ctx->pc = 0x3431C0u;
    SET_GPR_U32(ctx, 31, 0x3431C8u);
    ctx->pc = 0x3431C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3431C0u;
    // 0x3431c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344A20u, 0x3431C0u, 0x3431C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3431C8u;
label_3431c8:
    // 0x3431c8: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x3431c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_3431cc:
    // 0x3431cc: 0xc0d1288  jal         func_344A20
label_3431d0:
    if (ctx->pc == 0x3431D0u) {
        ctx->pc = 0x3431D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3431CCu;
        // 0x3431d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3431D4u;
        goto label_3431d4;
    }
    ctx->pc = 0x3431CCu;
    SET_GPR_U32(ctx, 31, 0x3431D4u);
    ctx->pc = 0x3431D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3431CCu;
    // 0x3431d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344A20u, 0x3431CCu, 0x3431D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3431D4u;
label_3431d4:
    // 0x3431d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3431d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3431d8:
    // 0x3431d8: 0xc0d0e78  jal         func_3439E0
label_3431dc:
    if (ctx->pc == 0x3431DCu) {
        ctx->pc = 0x3431DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3431D8u;
        // 0x3431dc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3431E0u;
        goto label_3431e0;
    }
    ctx->pc = 0x3431D8u;
    SET_GPR_U32(ctx, 31, 0x3431E0u);
    ctx->pc = 0x3431DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3431D8u;
    // 0x3431dc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3439E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3439E0u, 0x3431D8u, 0x3431E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3431E0u;
label_3431e0:
    // 0x3431e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3431e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3431e4:
    // 0x3431e4: 0xc0d04dc  jal         func_341370
label_3431e8:
    if (ctx->pc == 0x3431E8u) {
        ctx->pc = 0x3431E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3431E4u;
        // 0x3431e8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3431ECu;
        goto label_3431ec;
    }
    ctx->pc = 0x3431E4u;
    SET_GPR_U32(ctx, 31, 0x3431ECu);
    ctx->pc = 0x3431E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3431E4u;
    // 0x3431e8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341370u, 0x3431E4u, 0x3431ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3431ECu;
label_3431ec:
    // 0x3431ec: 0x10000006  b           . + 4 + (0x6 << 2)
label_3431f0:
    if (ctx->pc == 0x3431F0u) {
        ctx->pc = 0x3431F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3431ECu;
        // 0x3431f0: 0x8e820014  lw          $v0, 0x14($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3431F4u;
        goto label_3431f4;
    }
    ctx->pc = 0x3431ECu;
    {
        const bool branch_taken_0x3431ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3431F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3431ECu;
        // 0x3431f0: 0x8e820014  lw          $v0, 0x14($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3431ec) {
            ctx->pc = 0x343208u;
            goto label_343208;
        }
    }
    ctx->pc = 0x3431F4u;
label_3431f4:
    // 0x3431f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3431f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3431f8:
    // 0x3431f8: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x3431f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_3431fc:
    // 0x3431fc: 0xc103440  jal         func_40D100
label_343200:
    if (ctx->pc == 0x343200u) {
        ctx->pc = 0x343200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3431FCu;
        // 0x343200: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343204u;
        goto label_343204;
    }
    ctx->pc = 0x3431FCu;
    SET_GPR_U32(ctx, 31, 0x343204u);
    ctx->pc = 0x343200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3431FCu;
    // 0x343200: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x3431FCu, 0x343204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343204u;
label_343204:
    // 0x343204: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x343204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_343208:
    // 0x343208: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
label_34320c:
    if (ctx->pc == 0x34320Cu) {
        ctx->pc = 0x34320Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343208u;
        // 0x34320c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343210u;
        goto label_343210;
    }
    ctx->pc = 0x343208u;
    {
        const bool branch_taken_0x343208 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x34320Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343208u;
        // 0x34320c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343208) {
            ctx->pc = 0x343254u;
            goto label_343254;
        }
    }
    ctx->pc = 0x343210u;
label_343210:
    // 0x343210: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x343210u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_343214:
    // 0x343214: 0x0  nop
    ctx->pc = 0x343214u;
    // NOP
label_343218:
    // 0x343218: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x343218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_34321c:
    // 0x34321c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x34321cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_343220:
    // 0x343220: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x343220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_343224:
    // 0x343224: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_343228:
    if (ctx->pc == 0x343228u) {
        ctx->pc = 0x343228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343224u;
        // 0x343228: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34322Cu;
        goto label_34322c;
    }
    ctx->pc = 0x343224u;
    {
        const bool branch_taken_0x343224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x343228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343224u;
        // 0x343228: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343224) {
            ctx->pc = 0x343240u;
            goto label_343240;
        }
    }
    ctx->pc = 0x34322Cu;
label_34322c:
    // 0x34322c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x34322cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_343230:
    // 0x343230: 0x40f809  jalr        $v0
label_343234:
    if (ctx->pc == 0x343234u) {
        ctx->pc = 0x343234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343230u;
        // 0x343234: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343238u;
        goto label_343238;
    }
    ctx->pc = 0x343230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x343238u);
        ctx->pc = 0x343234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343230u;
        // 0x343234: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343230u, 0x343238u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x343238u;
label_343238:
    // 0x343238: 0x14530007  bne         $v0, $s3, . + 4 + (0x7 << 2)
label_34323c:
    if (ctx->pc == 0x34323Cu) {
        ctx->pc = 0x34323Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343238u;
        // 0x34323c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343240u;
        goto label_343240;
    }
    ctx->pc = 0x343238u;
    {
        const bool branch_taken_0x343238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x34323Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343238u;
        // 0x34323c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343238) {
            ctx->pc = 0x343258u;
            goto label_343258;
        }
    }
    ctx->pc = 0x343240u;
label_343240:
    // 0x343240: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x343240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_343244:
    // 0x343244: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x343244u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_343248:
    // 0x343248: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x343248u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_34324c:
    // 0x34324c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_343250:
    if (ctx->pc == 0x343250u) {
        ctx->pc = 0x343250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34324Cu;
        // 0x343250: 0x2652002c  addiu       $s2, $s2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343254u;
        goto label_343254;
    }
    ctx->pc = 0x34324Cu;
    {
        const bool branch_taken_0x34324c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x343250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34324Cu;
        // 0x343250: 0x2652002c  addiu       $s2, $s2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34324c) {
            ctx->pc = 0x343218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_343218;
        }
    }
    ctx->pc = 0x343254u;
label_343254:
    // 0x343254: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x343254u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_343258:
    // 0x343258: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x343258u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_34325c:
    // 0x34325c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x34325cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_343260:
    // 0x343260: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x343260u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_343264:
    // 0x343264: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x343264u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_343268:
    // 0x343268: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x343268u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_34326c:
    // 0x34326c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x34326cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_343270:
    // 0x343270: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x343270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_343274:
    // 0x343274: 0x3e00008  jr          $ra
label_343278:
    if (ctx->pc == 0x343278u) {
        ctx->pc = 0x343278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343274u;
        // 0x343278: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34327Cu;
        goto label_34327c;
    }
    ctx->pc = 0x343274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x343278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343274u;
        // 0x343278: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34327Cu;
label_34327c:
    // 0x34327c: 0x0  nop
    ctx->pc = 0x34327cu;
    // NOP
    ctx->pc = 0x343280u;
}
