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

// Function: sub_0041D1B0
// Address: 0x41d1b0 - 0x41d2b0
void sub_0041D1B0_0x41d1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041D1B0_0x41d1b0");
#endif

    switch (ctx->pc) {
        case 0x41d1b0u: goto label_41d1b0;
        case 0x41d1b4u: goto label_41d1b4;
        case 0x41d1b8u: goto label_41d1b8;
        case 0x41d1bcu: goto label_41d1bc;
        case 0x41d1c0u: goto label_41d1c0;
        case 0x41d1c4u: goto label_41d1c4;
        case 0x41d1c8u: goto label_41d1c8;
        case 0x41d1ccu: goto label_41d1cc;
        case 0x41d1d0u: goto label_41d1d0;
        case 0x41d1d4u: goto label_41d1d4;
        case 0x41d1d8u: goto label_41d1d8;
        case 0x41d1dcu: goto label_41d1dc;
        case 0x41d1e0u: goto label_41d1e0;
        case 0x41d1e4u: goto label_41d1e4;
        case 0x41d1e8u: goto label_41d1e8;
        case 0x41d1ecu: goto label_41d1ec;
        case 0x41d1f0u: goto label_41d1f0;
        case 0x41d1f4u: goto label_41d1f4;
        case 0x41d1f8u: goto label_41d1f8;
        case 0x41d1fcu: goto label_41d1fc;
        case 0x41d200u: goto label_41d200;
        case 0x41d204u: goto label_41d204;
        case 0x41d208u: goto label_41d208;
        case 0x41d20cu: goto label_41d20c;
        case 0x41d210u: goto label_41d210;
        case 0x41d214u: goto label_41d214;
        case 0x41d218u: goto label_41d218;
        case 0x41d21cu: goto label_41d21c;
        case 0x41d220u: goto label_41d220;
        case 0x41d224u: goto label_41d224;
        case 0x41d228u: goto label_41d228;
        case 0x41d22cu: goto label_41d22c;
        case 0x41d230u: goto label_41d230;
        case 0x41d234u: goto label_41d234;
        case 0x41d238u: goto label_41d238;
        case 0x41d23cu: goto label_41d23c;
        case 0x41d240u: goto label_41d240;
        case 0x41d244u: goto label_41d244;
        case 0x41d248u: goto label_41d248;
        case 0x41d24cu: goto label_41d24c;
        case 0x41d250u: goto label_41d250;
        case 0x41d254u: goto label_41d254;
        case 0x41d258u: goto label_41d258;
        case 0x41d25cu: goto label_41d25c;
        case 0x41d260u: goto label_41d260;
        case 0x41d264u: goto label_41d264;
        case 0x41d268u: goto label_41d268;
        case 0x41d26cu: goto label_41d26c;
        case 0x41d270u: goto label_41d270;
        case 0x41d274u: goto label_41d274;
        case 0x41d278u: goto label_41d278;
        case 0x41d27cu: goto label_41d27c;
        case 0x41d280u: goto label_41d280;
        case 0x41d284u: goto label_41d284;
        case 0x41d288u: goto label_41d288;
        case 0x41d28cu: goto label_41d28c;
        case 0x41d290u: goto label_41d290;
        case 0x41d294u: goto label_41d294;
        case 0x41d298u: goto label_41d298;
        case 0x41d29cu: goto label_41d29c;
        case 0x41d2a0u: goto label_41d2a0;
        case 0x41d2a4u: goto label_41d2a4;
        case 0x41d2a8u: goto label_41d2a8;
        case 0x41d2acu: goto label_41d2ac;
        default: break;
    }

    ctx->pc = 0x41d1b0u;

label_41d1b0:
    // 0x41d1b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x41d1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_41d1b4:
    // 0x41d1b4: 0x8f82be10  lw          $v0, -0x41F0($gp)
    ctx->pc = 0x41d1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950416)));
label_41d1b8:
    // 0x41d1b8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x41d1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_41d1bc:
    // 0x41d1bc: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x41d1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_41d1c0:
    // 0x41d1c0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x41d1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_41d1c4:
    // 0x41d1c4: 0x2472e880  addiu       $s2, $v1, -0x1780
    ctx->pc = 0x41d1c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_41d1c8:
    // 0x41d1c8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x41d1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_41d1cc:
    // 0x41d1cc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x41d1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_41d1d0:
    // 0x41d1d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x41d1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_41d1d4:
    // 0x41d1d4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x41d1d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_41d1d8:
    // 0x41d1d8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x41d1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_41d1dc:
    // 0x41d1dc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x41d1dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_41d1e0:
    // 0x41d1e0: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x41d1e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_41d1e4:
    // 0x41d1e4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x41d1e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41d1e8:
    // 0x41d1e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41d1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_41d1ec:
    // 0x41d1ec: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x41d1ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_41d1f0:
    // 0x41d1f0: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x41d1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_41d1f4:
    // 0x41d1f4: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x41d1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_41d1f8:
    // 0x41d1f8: 0x8e420118  lw          $v0, 0x118($s2)
    ctx->pc = 0x41d1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 280)));
label_41d1fc:
    // 0x41d1fc: 0x40f809  jalr        $v0
label_41d200:
    if (ctx->pc == 0x41D200u) {
        ctx->pc = 0x41D200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D1FCu;
        // 0x41d200: 0x34a50407  ori         $a1, $a1, 0x407 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1031);
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D204u;
        goto label_41d204;
    }
    ctx->pc = 0x41D1FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41D204u);
        ctx->pc = 0x41D200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D1FCu;
        // 0x41d200: 0x34a50407  ori         $a1, $a1, 0x407 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1031);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D1FCu, 0x41D204u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41D204u;
label_41d204:
    // 0x41d204: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x41d204u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41d208:
    // 0x41d208: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
label_41d20c:
    if (ctx->pc == 0x41D20Cu) {
        ctx->pc = 0x41D20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D208u;
        // 0x41d20c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D210u;
        goto label_41d210;
    }
    ctx->pc = 0x41D208u;
    {
        const bool branch_taken_0x41d208 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x41D20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D208u;
        // 0x41d20c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41d208) {
            ctx->pc = 0x41D284u;
            goto label_41d284;
        }
    }
    ctx->pc = 0x41D210u;
label_41d210:
    // 0x41d210: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x41d210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_41d214:
    // 0x41d214: 0xae14000c  sw          $s4, 0xC($s0)
    ctx->pc = 0x41d214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 20));
label_41d218:
    // 0x41d218: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x41d218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41d21c:
    // 0x41d21c: 0xae150010  sw          $s5, 0x10($s0)
    ctx->pc = 0x41d21cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 21));
label_41d220:
    // 0x41d220: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41d220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41d224:
    // 0x41d224: 0xae130014  sw          $s3, 0x14($s0)
    ctx->pc = 0x41d224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 19));
label_41d228:
    // 0x41d228: 0xa2000022  sb          $zero, 0x22($s0)
    ctx->pc = 0x41d228u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 34), (uint8_t)GPR_U32(ctx, 0));
label_41d22c:
    // 0x41d22c: 0xa2000021  sb          $zero, 0x21($s0)
    ctx->pc = 0x41d22cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 0));
label_41d230:
    // 0x41d230: 0xa600001c  sh          $zero, 0x1C($s0)
    ctx->pc = 0x41d230u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 0));
label_41d234:
    // 0x41d234: 0xa600001e  sh          $zero, 0x1E($s0)
    ctx->pc = 0x41d234u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 30), (uint16_t)GPR_U32(ctx, 0));
label_41d238:
    // 0x41d238: 0xae100000  sw          $s0, 0x0($s0)
    ctx->pc = 0x41d238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
label_41d23c:
    // 0x41d23c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x41d23cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_41d240:
    // 0x41d240: 0x40f809  jalr        $v0
label_41d244:
    if (ctx->pc == 0x41D244u) {
        ctx->pc = 0x41D244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D240u;
        // 0x41d244: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D248u;
        goto label_41d248;
    }
    ctx->pc = 0x41D240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41D248u);
        ctx->pc = 0x41D244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D240u;
        // 0x41d244: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D240u, 0x41D248u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41D248u;
label_41d248:
    // 0x41d248: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_41d24c:
    if (ctx->pc == 0x41D24Cu) {
        ctx->pc = 0x41D24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D248u;
        // 0x41d24c: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D250u;
        goto label_41d250;
    }
    ctx->pc = 0x41D248u;
    {
        const bool branch_taken_0x41d248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41D24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D248u;
        // 0x41d24c: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41d248) {
            ctx->pc = 0x41D270u;
            goto label_41d270;
        }
    }
    ctx->pc = 0x41D250u;
label_41d250:
    // 0x41d250: 0x8f83be10  lw          $v1, -0x41F0($gp)
    ctx->pc = 0x41d250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950416)));
label_41d254:
    // 0x41d254: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41d254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41d258:
    // 0x41d258: 0x8e42011c  lw          $v0, 0x11C($s2)
    ctx->pc = 0x41d258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 284)));
label_41d25c:
    // 0x41d25c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x41d25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_41d260:
    // 0x41d260: 0x40f809  jalr        $v0
label_41d264:
    if (ctx->pc == 0x41D264u) {
        ctx->pc = 0x41D264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D260u;
        // 0x41d264: 0x8c640060  lw          $a0, 0x60($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D268u;
        goto label_41d268;
    }
    ctx->pc = 0x41D260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41D268u);
        ctx->pc = 0x41D264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D260u;
        // 0x41d264: 0x8c640060  lw          $a0, 0x60($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D260u, 0x41D268u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41D268u;
label_41d268:
    // 0x41d268: 0x10000007  b           . + 4 + (0x7 << 2)
label_41d26c:
    if (ctx->pc == 0x41D26Cu) {
        ctx->pc = 0x41D26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D268u;
        // 0x41d26c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D270u;
        goto label_41d270;
    }
    ctx->pc = 0x41D268u;
    {
        const bool branch_taken_0x41d268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41D26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D268u;
        // 0x41d26c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41d268) {
            ctx->pc = 0x41D288u;
            goto label_41d288;
        }
    }
    ctx->pc = 0x41D270u;
label_41d270:
    // 0x41d270: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41d270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41d274:
    // 0x41d274: 0xc104c80  jal         func_413200
label_41d278:
    if (ctx->pc == 0x41D278u) {
        ctx->pc = 0x41D278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D274u;
        // 0x41d278: 0x2484c9f8  addiu       $a0, $a0, -0x3608 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D27Cu;
        goto label_41d27c;
    }
    ctx->pc = 0x41D274u;
    SET_GPR_U32(ctx, 31, 0x41D27Cu);
    ctx->pc = 0x41D278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41D274u;
    // 0x41d278: 0x2484c9f8  addiu       $a0, $a0, -0x3608 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413200u, 0x41D274u, 0x41D27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41D27Cu;
label_41d27c:
    // 0x41d27c: 0x10000002  b           . + 4 + (0x2 << 2)
label_41d280:
    if (ctx->pc == 0x41D280u) {
        ctx->pc = 0x41D280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D27Cu;
        // 0x41d280: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D284u;
        goto label_41d284;
    }
    ctx->pc = 0x41D27Cu;
    {
        const bool branch_taken_0x41d27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41D280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D27Cu;
        // 0x41d280: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41d27c) {
            ctx->pc = 0x41D288u;
            goto label_41d288;
        }
    }
    ctx->pc = 0x41D284u;
label_41d284:
    // 0x41d284: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x41d284u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41d288:
    // 0x41d288: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x41d288u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_41d28c:
    // 0x41d28c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x41d28cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_41d290:
    // 0x41d290: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x41d290u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_41d294:
    // 0x41d294: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x41d294u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_41d298:
    // 0x41d298: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x41d298u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41d29c:
    // 0x41d29c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x41d29cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41d2a0:
    // 0x41d2a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41d2a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_41d2a4:
    // 0x41d2a4: 0x3e00008  jr          $ra
label_41d2a8:
    if (ctx->pc == 0x41D2A8u) {
        ctx->pc = 0x41D2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D2A4u;
        // 0x41d2a8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D2ACu;
        goto label_41d2ac;
    }
    ctx->pc = 0x41D2A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D2A4u;
        // 0x41d2a8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D2A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41D2ACu;
label_41d2ac:
    // 0x41d2ac: 0x0  nop
    ctx->pc = 0x41d2acu;
    // NOP
    ctx->pc = 0x41d2b0u;
}
