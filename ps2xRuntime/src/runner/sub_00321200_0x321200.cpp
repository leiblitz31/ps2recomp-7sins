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

// Function: sub_00321200
// Address: 0x321200 - 0x3212b0
void sub_00321200_0x321200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321200_0x321200");
#endif

    switch (ctx->pc) {
        case 0x321200u: goto label_321200;
        case 0x321204u: goto label_321204;
        case 0x321208u: goto label_321208;
        case 0x32120cu: goto label_32120c;
        case 0x321210u: goto label_321210;
        case 0x321214u: goto label_321214;
        case 0x321218u: goto label_321218;
        case 0x32121cu: goto label_32121c;
        case 0x321220u: goto label_321220;
        case 0x321224u: goto label_321224;
        case 0x321228u: goto label_321228;
        case 0x32122cu: goto label_32122c;
        case 0x321230u: goto label_321230;
        case 0x321234u: goto label_321234;
        case 0x321238u: goto label_321238;
        case 0x32123cu: goto label_32123c;
        case 0x321240u: goto label_321240;
        case 0x321244u: goto label_321244;
        case 0x321248u: goto label_321248;
        case 0x32124cu: goto label_32124c;
        case 0x321250u: goto label_321250;
        case 0x321254u: goto label_321254;
        case 0x321258u: goto label_321258;
        case 0x32125cu: goto label_32125c;
        case 0x321260u: goto label_321260;
        case 0x321264u: goto label_321264;
        case 0x321268u: goto label_321268;
        case 0x32126cu: goto label_32126c;
        case 0x321270u: goto label_321270;
        case 0x321274u: goto label_321274;
        case 0x321278u: goto label_321278;
        case 0x32127cu: goto label_32127c;
        case 0x321280u: goto label_321280;
        case 0x321284u: goto label_321284;
        case 0x321288u: goto label_321288;
        case 0x32128cu: goto label_32128c;
        case 0x321290u: goto label_321290;
        case 0x321294u: goto label_321294;
        case 0x321298u: goto label_321298;
        case 0x32129cu: goto label_32129c;
        case 0x3212a0u: goto label_3212a0;
        case 0x3212a4u: goto label_3212a4;
        case 0x3212a8u: goto label_3212a8;
        case 0x3212acu: goto label_3212ac;
        default: break;
    }

    ctx->pc = 0x321200u;

label_321200:
    // 0x321200: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x321200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_321204:
    // 0x321204: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x321204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_321208:
    // 0x321208: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x321208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_32120c:
    // 0x32120c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32120cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_321210:
    // 0x321210: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x321210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_321214:
    // 0x321214: 0x3c110062  lui         $s1, 0x62
    ctx->pc = 0x321214u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
label_321218:
    // 0x321218: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x321218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_32121c:
    // 0x32121c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x32121cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_321220:
    // 0x321220: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x321220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_321224:
    // 0x321224: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_321228:
    if (ctx->pc == 0x321228u) {
        ctx->pc = 0x321228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321224u;
        // 0x321228: 0x8e120014  lw          $s2, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32122Cu;
        goto label_32122c;
    }
    ctx->pc = 0x321224u;
    {
        const bool branch_taken_0x321224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x321228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321224u;
        // 0x321228: 0x8e120014  lw          $s2, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321224) {
            ctx->pc = 0x321258u;
            goto label_321258;
        }
    }
    ctx->pc = 0x32122Cu;
label_32122c:
    // 0x32122c: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x32122cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_321230:
    // 0x321230: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_321234:
    if (ctx->pc == 0x321234u) {
        ctx->pc = 0x321234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321230u;
        // 0x321234: 0x2623e880  addiu       $v1, $s1, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321238u;
        goto label_321238;
    }
    ctx->pc = 0x321230u;
    {
        const bool branch_taken_0x321230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x321234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321230u;
        // 0x321234: 0x2623e880  addiu       $v1, $s1, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321230) {
            ctx->pc = 0x32124Cu;
            goto label_32124c;
        }
    }
    ctx->pc = 0x321238u;
label_321238:
    // 0x321238: 0x2622e880  addiu       $v0, $s1, -0x1780
    ctx->pc = 0x321238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961280));
label_32123c:
    // 0x32123c: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x32123cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_321240:
    // 0x321240: 0x60f809  jalr        $v1
label_321244:
    if (ctx->pc == 0x321244u) {
        ctx->pc = 0x321244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321240u;
        // 0x321244: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321248u;
        goto label_321248;
    }
    ctx->pc = 0x321240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x321248u);
        ctx->pc = 0x321244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321240u;
        // 0x321244: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321240u, 0x321248u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x321248u;
label_321248:
    // 0x321248: 0x2623e880  addiu       $v1, $s1, -0x1780
    ctx->pc = 0x321248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961280));
label_32124c:
    // 0x32124c: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x32124cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_321250:
    // 0x321250: 0x40f809  jalr        $v0
label_321254:
    if (ctx->pc == 0x321254u) {
        ctx->pc = 0x321254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321250u;
        // 0x321254: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321258u;
        goto label_321258;
    }
    ctx->pc = 0x321250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x321258u);
        ctx->pc = 0x321254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321250u;
        // 0x321254: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321250u, 0x321258u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x321258u;
label_321258:
    // 0x321258: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x321258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_32125c:
    // 0x32125c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x32125cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_321260:
    // 0x321260: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x321260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_321264:
    // 0x321264: 0xc0ef39c  jal         func_3BCE70
label_321268:
    if (ctx->pc == 0x321268u) {
        ctx->pc = 0x321268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321264u;
        // 0x321268: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32126Cu;
        goto label_32126c;
    }
    ctx->pc = 0x321264u;
    SET_GPR_U32(ctx, 31, 0x32126Cu);
    ctx->pc = 0x321268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321264u;
    // 0x321268: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BCE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BCE70u, 0x321264u, 0x32126Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32126Cu;
label_32126c:
    // 0x32126c: 0x2623e880  addiu       $v1, $s1, -0x1780
    ctx->pc = 0x32126cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961280));
label_321270:
    // 0x321270: 0x8f84bce4  lw          $a0, -0x431C($gp)
    ctx->pc = 0x321270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950116)));
label_321274:
    // 0x321274: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x321274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_321278:
    // 0x321278: 0x40f809  jalr        $v0
label_32127c:
    if (ctx->pc == 0x32127Cu) {
        ctx->pc = 0x32127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321278u;
        // 0x32127c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321280u;
        goto label_321280;
    }
    ctx->pc = 0x321278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x321280u);
        ctx->pc = 0x32127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321278u;
        // 0x32127c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321278u, 0x321280u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x321280u;
label_321280:
    // 0x321280: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_321284:
    if (ctx->pc == 0x321284u) {
        ctx->pc = 0x321284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321280u;
        // 0x321284: 0x8f82bce0  lw          $v0, -0x4320($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321288u;
        goto label_321288;
    }
    ctx->pc = 0x321280u;
    {
        const bool branch_taken_0x321280 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x321284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321280u;
        // 0x321284: 0x8f82bce0  lw          $v0, -0x4320($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321280) {
            ctx->pc = 0x321290u;
            goto label_321290;
        }
    }
    ctx->pc = 0x321288u;
label_321288:
    // 0x321288: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x321288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_32128c:
    // 0x32128c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x32128cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_321290:
    // 0x321290: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x321290u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_321294:
    // 0x321294: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x321294u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_321298:
    // 0x321298: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x321298u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_32129c:
    // 0x32129c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x32129cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3212a0:
    // 0x3212a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3212a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3212a4:
    // 0x3212a4: 0x3e00008  jr          $ra
label_3212a8:
    if (ctx->pc == 0x3212A8u) {
        ctx->pc = 0x3212A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3212A4u;
        // 0x3212a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3212ACu;
        goto label_3212ac;
    }
    ctx->pc = 0x3212A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3212A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3212A4u;
        // 0x3212a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3212A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3212ACu;
label_3212ac:
    // 0x3212ac: 0x0  nop
    ctx->pc = 0x3212acu;
    // NOP
    ctx->pc = 0x3212b0u;
}
