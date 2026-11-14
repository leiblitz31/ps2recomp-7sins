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

// Function: sub_0037D1E0
// Address: 0x37d1e0 - 0x37d290
void sub_0037D1E0_0x37d1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037D1E0_0x37d1e0");
#endif

    switch (ctx->pc) {
        case 0x37d1e0u: goto label_37d1e0;
        case 0x37d1e4u: goto label_37d1e4;
        case 0x37d1e8u: goto label_37d1e8;
        case 0x37d1ecu: goto label_37d1ec;
        case 0x37d1f0u: goto label_37d1f0;
        case 0x37d1f4u: goto label_37d1f4;
        case 0x37d1f8u: goto label_37d1f8;
        case 0x37d1fcu: goto label_37d1fc;
        case 0x37d200u: goto label_37d200;
        case 0x37d204u: goto label_37d204;
        case 0x37d208u: goto label_37d208;
        case 0x37d20cu: goto label_37d20c;
        case 0x37d210u: goto label_37d210;
        case 0x37d214u: goto label_37d214;
        case 0x37d218u: goto label_37d218;
        case 0x37d21cu: goto label_37d21c;
        case 0x37d220u: goto label_37d220;
        case 0x37d224u: goto label_37d224;
        case 0x37d228u: goto label_37d228;
        case 0x37d22cu: goto label_37d22c;
        case 0x37d230u: goto label_37d230;
        case 0x37d234u: goto label_37d234;
        case 0x37d238u: goto label_37d238;
        case 0x37d23cu: goto label_37d23c;
        case 0x37d240u: goto label_37d240;
        case 0x37d244u: goto label_37d244;
        case 0x37d248u: goto label_37d248;
        case 0x37d24cu: goto label_37d24c;
        case 0x37d250u: goto label_37d250;
        case 0x37d254u: goto label_37d254;
        case 0x37d258u: goto label_37d258;
        case 0x37d25cu: goto label_37d25c;
        case 0x37d260u: goto label_37d260;
        case 0x37d264u: goto label_37d264;
        case 0x37d268u: goto label_37d268;
        case 0x37d26cu: goto label_37d26c;
        case 0x37d270u: goto label_37d270;
        case 0x37d274u: goto label_37d274;
        case 0x37d278u: goto label_37d278;
        case 0x37d27cu: goto label_37d27c;
        case 0x37d280u: goto label_37d280;
        case 0x37d284u: goto label_37d284;
        case 0x37d288u: goto label_37d288;
        case 0x37d28cu: goto label_37d28c;
        default: break;
    }

    ctx->pc = 0x37d1e0u;

label_37d1e0:
    // 0x37d1e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x37d1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_37d1e4:
    // 0x37d1e4: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x37d1e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
label_37d1e8:
    // 0x37d1e8: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x37d1e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
label_37d1ec:
    // 0x37d1ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37d1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_37d1f0:
    // 0x37d1f0: 0x24c6be98  addiu       $a2, $a2, -0x4168
    ctx->pc = 0x37d1f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950552));
label_37d1f4:
    // 0x37d1f4: 0x24e7d6c0  addiu       $a3, $a3, -0x2940
    ctx->pc = 0x37d1f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956736));
label_37d1f8:
    // 0x37d1f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x37d1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37d1fc:
    // 0x37d1fc: 0xc1063f6  jal         func_418FD8
label_37d200:
    if (ctx->pc == 0x37D200u) {
        ctx->pc = 0x37D200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D1FCu;
        // 0x37d200: 0x24050102  addiu       $a1, $zero, 0x102 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D204u;
        goto label_37d204;
    }
    ctx->pc = 0x37D1FCu;
    SET_GPR_U32(ctx, 31, 0x37D204u);
    ctx->pc = 0x37D200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D1FCu;
    // 0x37d200: 0x24050102  addiu       $a1, $zero, 0x102 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418FD8u, 0x37D1FCu, 0x37D204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D204u;
label_37d204:
    // 0x37d204: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x37d204u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_37d208:
    // 0x37d208: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37d208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_37d20c:
    // 0x37d20c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x37d20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_37d210:
    // 0x37d210: 0x3e00008  jr          $ra
label_37d214:
    if (ctx->pc == 0x37D214u) {
        ctx->pc = 0x37D214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D210u;
        // 0x37d214: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D218u;
        goto label_37d218;
    }
    ctx->pc = 0x37D210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D210u;
        // 0x37d214: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D218u;
label_37d218:
    // 0x37d218: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37d218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_37d21c:
    // 0x37d21c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x37d21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_37d220:
    // 0x37d220: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37d220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_37d224:
    // 0x37d224: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37d224u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37d228:
    // 0x37d228: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37d228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_37d22c:
    // 0x37d22c: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x37d22cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_37d230:
    // 0x37d230: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_37d234:
    if (ctx->pc == 0x37D234u) {
        ctx->pc = 0x37D234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D230u;
        // 0x37d234: 0x3c110062  lui         $s1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D238u;
        goto label_37d238;
    }
    ctx->pc = 0x37D230u;
    {
        const bool branch_taken_0x37d230 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D230u;
        // 0x37d234: 0x3c110062  lui         $s1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d230) {
            ctx->pc = 0x37D24Cu;
            goto label_37d24c;
        }
    }
    ctx->pc = 0x37D238u;
label_37d238:
    // 0x37d238: 0x2622e880  addiu       $v0, $s1, -0x1780
    ctx->pc = 0x37d238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961280));
label_37d23c:
    // 0x37d23c: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x37d23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_37d240:
    // 0x37d240: 0x60f809  jalr        $v1
label_37d244:
    if (ctx->pc == 0x37D244u) {
        ctx->pc = 0x37D248u;
        goto label_37d248;
    }
    ctx->pc = 0x37D240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x37D248u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D240u, 0x37D248u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37D248u;
label_37d248:
    // 0x37d248: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x37d248u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_37d24c:
    // 0x37d24c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x37d24cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_37d250:
    // 0x37d250: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_37d254:
    if (ctx->pc == 0x37D254u) {
        ctx->pc = 0x37D254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D250u;
        // 0x37d254: 0x2623e880  addiu       $v1, $s1, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D258u;
        goto label_37d258;
    }
    ctx->pc = 0x37D250u;
    {
        const bool branch_taken_0x37d250 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D250u;
        // 0x37d254: 0x2623e880  addiu       $v1, $s1, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d250) {
            ctx->pc = 0x37D268u;
            goto label_37d268;
        }
    }
    ctx->pc = 0x37D258u;
label_37d258:
    // 0x37d258: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x37d258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_37d25c:
    // 0x37d25c: 0x40f809  jalr        $v0
label_37d260:
    if (ctx->pc == 0x37D260u) {
        ctx->pc = 0x37D264u;
        goto label_37d264;
    }
    ctx->pc = 0x37D25Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37D264u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D25Cu, 0x37D264u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37D264u;
label_37d264:
    // 0x37d264: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x37d264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_37d268:
    // 0x37d268: 0x2623e880  addiu       $v1, $s1, -0x1780
    ctx->pc = 0x37d268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961280));
label_37d26c:
    // 0x37d26c: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x37d26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_37d270:
    // 0x37d270: 0x40f809  jalr        $v0
label_37d274:
    if (ctx->pc == 0x37D274u) {
        ctx->pc = 0x37D274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D270u;
        // 0x37d274: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D278u;
        goto label_37d278;
    }
    ctx->pc = 0x37D270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37D278u);
        ctx->pc = 0x37D274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D270u;
        // 0x37d274: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D270u, 0x37D278u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37D278u;
label_37d278:
    // 0x37d278: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x37d278u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_37d27c:
    // 0x37d27c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37d27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37d280:
    // 0x37d280: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37d280u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37d284:
    // 0x37d284: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37d284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_37d288:
    // 0x37d288: 0x3e00008  jr          $ra
label_37d28c:
    if (ctx->pc == 0x37D28Cu) {
        ctx->pc = 0x37D28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D288u;
        // 0x37d28c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D290u;
        goto label_fallthrough_0x37d288;
    }
    ctx->pc = 0x37D288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D288u;
        // 0x37d28c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x37d288:
    ctx->pc = 0x37D290u;
}
