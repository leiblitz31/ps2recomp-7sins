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

// Function: sub_0010D120
// Address: 0x10d120 - 0x10d360
void sub_0010D120_0x10d120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D120_0x10d120");
#endif

    switch (ctx->pc) {
        case 0x10d120u: goto label_10d120;
        case 0x10d124u: goto label_10d124;
        case 0x10d128u: goto label_10d128;
        case 0x10d12cu: goto label_10d12c;
        case 0x10d130u: goto label_10d130;
        case 0x10d134u: goto label_10d134;
        case 0x10d138u: goto label_10d138;
        case 0x10d13cu: goto label_10d13c;
        case 0x10d140u: goto label_10d140;
        case 0x10d144u: goto label_10d144;
        case 0x10d148u: goto label_10d148;
        case 0x10d14cu: goto label_10d14c;
        case 0x10d150u: goto label_10d150;
        case 0x10d154u: goto label_10d154;
        case 0x10d158u: goto label_10d158;
        case 0x10d15cu: goto label_10d15c;
        case 0x10d160u: goto label_10d160;
        case 0x10d164u: goto label_10d164;
        case 0x10d168u: goto label_10d168;
        case 0x10d16cu: goto label_10d16c;
        case 0x10d170u: goto label_10d170;
        case 0x10d174u: goto label_10d174;
        case 0x10d178u: goto label_10d178;
        case 0x10d17cu: goto label_10d17c;
        case 0x10d180u: goto label_10d180;
        case 0x10d184u: goto label_10d184;
        case 0x10d188u: goto label_10d188;
        case 0x10d18cu: goto label_10d18c;
        case 0x10d190u: goto label_10d190;
        case 0x10d194u: goto label_10d194;
        case 0x10d198u: goto label_10d198;
        case 0x10d19cu: goto label_10d19c;
        case 0x10d1a0u: goto label_10d1a0;
        case 0x10d1a4u: goto label_10d1a4;
        case 0x10d1a8u: goto label_10d1a8;
        case 0x10d1acu: goto label_10d1ac;
        case 0x10d1b0u: goto label_10d1b0;
        case 0x10d1b4u: goto label_10d1b4;
        case 0x10d1b8u: goto label_10d1b8;
        case 0x10d1bcu: goto label_10d1bc;
        case 0x10d1c0u: goto label_10d1c0;
        case 0x10d1c4u: goto label_10d1c4;
        case 0x10d1c8u: goto label_10d1c8;
        case 0x10d1ccu: goto label_10d1cc;
        case 0x10d1d0u: goto label_10d1d0;
        case 0x10d1d4u: goto label_10d1d4;
        case 0x10d1d8u: goto label_10d1d8;
        case 0x10d1dcu: goto label_10d1dc;
        case 0x10d1e0u: goto label_10d1e0;
        case 0x10d1e4u: goto label_10d1e4;
        case 0x10d1e8u: goto label_10d1e8;
        case 0x10d1ecu: goto label_10d1ec;
        case 0x10d1f0u: goto label_10d1f0;
        case 0x10d1f4u: goto label_10d1f4;
        case 0x10d1f8u: goto label_10d1f8;
        case 0x10d1fcu: goto label_10d1fc;
        case 0x10d200u: goto label_10d200;
        case 0x10d204u: goto label_10d204;
        case 0x10d208u: goto label_10d208;
        case 0x10d20cu: goto label_10d20c;
        case 0x10d210u: goto label_10d210;
        case 0x10d214u: goto label_10d214;
        case 0x10d218u: goto label_10d218;
        case 0x10d21cu: goto label_10d21c;
        case 0x10d220u: goto label_10d220;
        case 0x10d224u: goto label_10d224;
        case 0x10d228u: goto label_10d228;
        case 0x10d22cu: goto label_10d22c;
        case 0x10d230u: goto label_10d230;
        case 0x10d234u: goto label_10d234;
        case 0x10d238u: goto label_10d238;
        case 0x10d23cu: goto label_10d23c;
        case 0x10d240u: goto label_10d240;
        case 0x10d244u: goto label_10d244;
        case 0x10d248u: goto label_10d248;
        case 0x10d24cu: goto label_10d24c;
        case 0x10d250u: goto label_10d250;
        case 0x10d254u: goto label_10d254;
        case 0x10d258u: goto label_10d258;
        case 0x10d25cu: goto label_10d25c;
        case 0x10d260u: goto label_10d260;
        case 0x10d264u: goto label_10d264;
        case 0x10d268u: goto label_10d268;
        case 0x10d26cu: goto label_10d26c;
        case 0x10d270u: goto label_10d270;
        case 0x10d274u: goto label_10d274;
        case 0x10d278u: goto label_10d278;
        case 0x10d27cu: goto label_10d27c;
        case 0x10d280u: goto label_10d280;
        case 0x10d284u: goto label_10d284;
        case 0x10d288u: goto label_10d288;
        case 0x10d28cu: goto label_10d28c;
        case 0x10d290u: goto label_10d290;
        case 0x10d294u: goto label_10d294;
        case 0x10d298u: goto label_10d298;
        case 0x10d29cu: goto label_10d29c;
        case 0x10d2a0u: goto label_10d2a0;
        case 0x10d2a4u: goto label_10d2a4;
        case 0x10d2a8u: goto label_10d2a8;
        case 0x10d2acu: goto label_10d2ac;
        case 0x10d2b0u: goto label_10d2b0;
        case 0x10d2b4u: goto label_10d2b4;
        case 0x10d2b8u: goto label_10d2b8;
        case 0x10d2bcu: goto label_10d2bc;
        case 0x10d2c0u: goto label_10d2c0;
        case 0x10d2c4u: goto label_10d2c4;
        case 0x10d2c8u: goto label_10d2c8;
        case 0x10d2ccu: goto label_10d2cc;
        case 0x10d2d0u: goto label_10d2d0;
        case 0x10d2d4u: goto label_10d2d4;
        case 0x10d2d8u: goto label_10d2d8;
        case 0x10d2dcu: goto label_10d2dc;
        case 0x10d2e0u: goto label_10d2e0;
        case 0x10d2e4u: goto label_10d2e4;
        case 0x10d2e8u: goto label_10d2e8;
        case 0x10d2ecu: goto label_10d2ec;
        case 0x10d2f0u: goto label_10d2f0;
        case 0x10d2f4u: goto label_10d2f4;
        case 0x10d2f8u: goto label_10d2f8;
        case 0x10d2fcu: goto label_10d2fc;
        case 0x10d300u: goto label_10d300;
        case 0x10d304u: goto label_10d304;
        case 0x10d308u: goto label_10d308;
        case 0x10d30cu: goto label_10d30c;
        case 0x10d310u: goto label_10d310;
        case 0x10d314u: goto label_10d314;
        case 0x10d318u: goto label_10d318;
        case 0x10d31cu: goto label_10d31c;
        case 0x10d320u: goto label_10d320;
        case 0x10d324u: goto label_10d324;
        case 0x10d328u: goto label_10d328;
        case 0x10d32cu: goto label_10d32c;
        case 0x10d330u: goto label_10d330;
        case 0x10d334u: goto label_10d334;
        case 0x10d338u: goto label_10d338;
        case 0x10d33cu: goto label_10d33c;
        case 0x10d340u: goto label_10d340;
        case 0x10d344u: goto label_10d344;
        case 0x10d348u: goto label_10d348;
        case 0x10d34cu: goto label_10d34c;
        case 0x10d350u: goto label_10d350;
        case 0x10d354u: goto label_10d354;
        case 0x10d358u: goto label_10d358;
        case 0x10d35cu: goto label_10d35c;
        default: break;
    }

    ctx->pc = 0x10d120u;

label_10d120:
    // 0x10d120: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x10d120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_10d124:
    // 0x10d124: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10d124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10d128:
    // 0x10d128: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10d128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_10d12c:
    // 0x10d12c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x10d12cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_10d130:
    // 0x10d130: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x10d130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
label_10d134:
    // 0x10d134: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x10d134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
label_10d138:
    // 0x10d138: 0x8f82bb8c  lw          $v0, -0x4474($gp)
    ctx->pc = 0x10d138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949772)));
label_10d13c:
    // 0x10d13c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_10d140:
    if (ctx->pc == 0x10D140u) {
        ctx->pc = 0x10D144u;
        goto label_10d144;
    }
    ctx->pc = 0x10D13Cu;
    {
        const bool branch_taken_0x10d13c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d13c) {
            ctx->pc = 0x10D170u;
            goto label_10d170;
        }
    }
    ctx->pc = 0x10D144u;
label_10d144:
    // 0x10d144: 0x8f84b9ac  lw          $a0, -0x4654($gp)
    ctx->pc = 0x10d144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949292)));
label_10d148:
    // 0x10d148: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x10d148u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_10d14c:
    // 0x10d14c: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x10d14cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_10d150:
    // 0x10d150: 0x8fa70030  lw          $a3, 0x30($sp)
    ctx->pc = 0x10d150u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_10d154:
    // 0x10d154: 0x8fa80040  lw          $t0, 0x40($sp)
    ctx->pc = 0x10d154u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_10d158:
    // 0x10d158: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x10d158u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10d15c:
    // 0x10d15c: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x10d15cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_10d160:
    // 0x10d160: 0x320f809  jalr        $t9
label_10d164:
    if (ctx->pc == 0x10D164u) {
        ctx->pc = 0x10D168u;
        goto label_10d168;
    }
    ctx->pc = 0x10D160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10D168u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D160u, 0x10D168u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10D168u;
label_10d168:
    // 0x10d168: 0x10000002  b           . + 4 + (0x2 << 2)
label_10d16c:
    if (ctx->pc == 0x10D16Cu) {
        ctx->pc = 0x10D170u;
        goto label_10d170;
    }
    ctx->pc = 0x10D168u;
    {
        const bool branch_taken_0x10d168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d168) {
            ctx->pc = 0x10D174u;
            goto label_10d174;
        }
    }
    ctx->pc = 0x10D170u;
label_10d170:
    // 0x10d170: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10d170u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10d174:
    // 0x10d174: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10d174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10d178:
    // 0x10d178: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x10d178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_10d17c:
    // 0x10d17c: 0x3e00008  jr          $ra
label_10d180:
    if (ctx->pc == 0x10D180u) {
        ctx->pc = 0x10D184u;
        goto label_10d184;
    }
    ctx->pc = 0x10D17Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D17Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D184u;
label_10d184:
    // 0x10d184: 0x0  nop
    ctx->pc = 0x10d184u;
    // NOP
label_10d188:
    // 0x10d188: 0x0  nop
    ctx->pc = 0x10d188u;
    // NOP
label_10d18c:
    // 0x10d18c: 0x0  nop
    ctx->pc = 0x10d18cu;
    // NOP
label_10d190:
    // 0x10d190: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x10d190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_10d194:
    // 0x10d194: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x10d194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_10d198:
    // 0x10d198: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x10d198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_10d19c:
    // 0x10d19c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x10d19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_10d1a0:
    // 0x10d1a0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x10d1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_10d1a4:
    // 0x10d1a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x10d1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_10d1a8:
    // 0x10d1a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10d1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_10d1ac:
    // 0x10d1ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10d1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_10d1b0:
    // 0x10d1b0: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x10d1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
label_10d1b4:
    // 0x10d1b4: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x10d1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
label_10d1b8:
    // 0x10d1b8: 0xafa600a0  sw          $a2, 0xA0($sp)
    ctx->pc = 0x10d1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
label_10d1bc:
    // 0x10d1bc: 0xafa700b0  sw          $a3, 0xB0($sp)
    ctx->pc = 0x10d1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 7));
label_10d1c0:
    // 0x10d1c0: 0xafa800c0  sw          $t0, 0xC0($sp)
    ctx->pc = 0x10d1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 8));
label_10d1c4:
    // 0x10d1c4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x10d1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_10d1c8:
    // 0x10d1c8: 0xc0913f4  jal         func_244FD0
label_10d1cc:
    if (ctx->pc == 0x10D1CCu) {
        ctx->pc = 0x10D1D0u;
        goto label_10d1d0;
    }
    ctx->pc = 0x10D1C8u;
    SET_GPR_U32(ctx, 31, 0x10D1D0u);
    ctx->pc = 0x244FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244FD0u, 0x10D1C8u, 0x10D1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D1D0u;
label_10d1d0:
    // 0x10d1d0: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x10d1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
label_10d1d4:
    // 0x10d1d4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x10d1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_10d1d8:
    // 0x10d1d8: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x10d1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
label_10d1dc:
    // 0x10d1dc: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x10d1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_10d1e0:
    // 0x10d1e0: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x10d1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
label_10d1e4:
    // 0x10d1e4: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x10d1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_10d1e8:
    // 0x10d1e8: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x10d1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_10d1ec:
    // 0x10d1ec: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x10d1ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_10d1f0:
    // 0x10d1f0: 0xc043240  jal         func_10C900
label_10d1f4:
    if (ctx->pc == 0x10D1F4u) {
        ctx->pc = 0x10D1F8u;
        goto label_10d1f8;
    }
    ctx->pc = 0x10D1F0u;
    SET_GPR_U32(ctx, 31, 0x10D1F8u);
    ctx->pc = 0x10C900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C900u, 0x10D1F0u, 0x10D1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D1F8u;
label_10d1f8:
    // 0x10d1f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10d1f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10d1fc:
    // 0x10d1fc: 0x1010004d  beq         $zero, $s0, . + 4 + (0x4D << 2)
label_10d200:
    if (ctx->pc == 0x10D200u) {
        ctx->pc = 0x10D204u;
        goto label_10d204;
    }
    ctx->pc = 0x10D1FCu;
    {
        const bool branch_taken_0x10d1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x10d1fc) {
            ctx->pc = 0x10D334u;
            goto label_10d334;
        }
    }
    ctx->pc = 0x10D204u;
label_10d204:
    // 0x10d204: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x10d204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_10d208:
    // 0x10d208: 0xc043440  jal         func_10D100
label_10d20c:
    if (ctx->pc == 0x10D20Cu) {
        ctx->pc = 0x10D210u;
        goto label_10d210;
    }
    ctx->pc = 0x10D208u;
    SET_GPR_U32(ctx, 31, 0x10D210u);
    ctx->pc = 0x10D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D100u, 0x10D208u, 0x10D210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D210u;
label_10d210:
    // 0x10d210: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10d210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10d214:
    // 0x10d214: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10d214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10d218:
    // 0x10d218: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10d218u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10d21c:
    // 0x10d21c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x10d21cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10d220:
    // 0x10d220: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x10d220u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_10d224:
    // 0x10d224: 0x320f809  jalr        $t9
label_10d228:
    if (ctx->pc == 0x10D228u) {
        ctx->pc = 0x10D22Cu;
        goto label_10d22c;
    }
    ctx->pc = 0x10D224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10D22Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D224u, 0x10D22Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10D22Cu;
label_10d22c:
    // 0x10d22c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x10d22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_10d230:
    // 0x10d230: 0x1002000c  beq         $zero, $v0, . + 4 + (0xC << 2)
label_10d234:
    if (ctx->pc == 0x10D234u) {
        ctx->pc = 0x10D238u;
        goto label_10d238;
    }
    ctx->pc = 0x10D230u;
    {
        const bool branch_taken_0x10d230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x10d230) {
            ctx->pc = 0x10D264u;
            goto label_10d264;
        }
    }
    ctx->pc = 0x10D238u;
label_10d238:
    // 0x10d238: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10d238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10d23c:
    // 0x10d23c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x10d23cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_10d240:
    // 0x10d240: 0xc085538  jal         func_2154E0
label_10d244:
    if (ctx->pc == 0x10D244u) {
        ctx->pc = 0x10D248u;
        goto label_10d248;
    }
    ctx->pc = 0x10D240u;
    SET_GPR_U32(ctx, 31, 0x10D248u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x10D240u, 0x10D248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D248u;
label_10d248:
    // 0x10d248: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x10d248u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10d24c:
    // 0x10d24c: 0x10130005  beq         $zero, $s3, . + 4 + (0x5 << 2)
label_10d250:
    if (ctx->pc == 0x10D250u) {
        ctx->pc = 0x10D254u;
        goto label_10d254;
    }
    ctx->pc = 0x10D24Cu;
    {
        const bool branch_taken_0x10d24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 19));
        if (branch_taken_0x10d24c) {
            ctx->pc = 0x10D264u;
            goto label_10d264;
        }
    }
    ctx->pc = 0x10D254u;
label_10d254:
    // 0x10d254: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10d254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10d258:
    // 0x10d258: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x10d258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_10d25c:
    // 0x10d25c: 0xc090f14  jal         func_243C50
label_10d260:
    if (ctx->pc == 0x10D260u) {
        ctx->pc = 0x10D264u;
        goto label_10d264;
    }
    ctx->pc = 0x10D25Cu;
    SET_GPR_U32(ctx, 31, 0x10D264u);
    ctx->pc = 0x243C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243C50u, 0x10D25Cu, 0x10D264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D264u;
label_10d264:
    // 0x10d264: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x10d264u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10d268:
    // 0x10d268: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x10d268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_10d26c:
    // 0x10d26c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10d26cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_10d270:
    // 0x10d270: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_10d274:
    if (ctx->pc == 0x10D274u) {
        ctx->pc = 0x10D278u;
        goto label_10d278;
    }
    ctx->pc = 0x10D270u;
    {
        const bool branch_taken_0x10d270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d270) {
            ctx->pc = 0x10D2A8u;
            goto label_10d2a8;
        }
    }
    ctx->pc = 0x10D278u;
label_10d278:
    // 0x10d278: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10d278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10d27c:
    // 0x10d27c: 0xc085530  jal         func_2154C0
label_10d280:
    if (ctx->pc == 0x10D280u) {
        ctx->pc = 0x10D284u;
        goto label_10d284;
    }
    ctx->pc = 0x10D27Cu;
    SET_GPR_U32(ctx, 31, 0x10D284u);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x10D27Cu, 0x10D284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D284u;
label_10d284:
    // 0x10d284: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x10d284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_10d288:
    // 0x10d288: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
label_10d28c:
    if (ctx->pc == 0x10D28Cu) {
        ctx->pc = 0x10D290u;
        goto label_10d290;
    }
    ctx->pc = 0x10D288u;
    {
        const bool branch_taken_0x10d288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x10d288) {
            ctx->pc = 0x10D2A4u;
            goto label_10d2a4;
        }
    }
    ctx->pc = 0x10D290u;
label_10d290:
    // 0x10d290: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x10d290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10d294:
    // 0x10d294: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_10d298:
    if (ctx->pc == 0x10D298u) {
        ctx->pc = 0x10D29Cu;
        goto label_10d29c;
    }
    ctx->pc = 0x10D294u;
    {
        const bool branch_taken_0x10d294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x10d294) {
            ctx->pc = 0x10D2A4u;
            goto label_10d2a4;
        }
    }
    ctx->pc = 0x10D29Cu;
label_10d29c:
    // 0x10d29c: 0x10000002  b           . + 4 + (0x2 << 2)
label_10d2a0:
    if (ctx->pc == 0x10D2A0u) {
        ctx->pc = 0x10D2A4u;
        goto label_10d2a4;
    }
    ctx->pc = 0x10D29Cu;
    {
        const bool branch_taken_0x10d29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d29c) {
            ctx->pc = 0x10D2A8u;
            goto label_10d2a8;
        }
    }
    ctx->pc = 0x10D2A4u;
label_10d2a4:
    // 0x10d2a4: 0x36310005  ori         $s1, $s1, 0x5
    ctx->pc = 0x10d2a4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)5);
label_10d2a8:
    // 0x10d2a8: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x10d2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_10d2ac:
    // 0x10d2ac: 0xc043440  jal         func_10D100
label_10d2b0:
    if (ctx->pc == 0x10D2B0u) {
        ctx->pc = 0x10D2B4u;
        goto label_10d2b4;
    }
    ctx->pc = 0x10D2ACu;
    SET_GPR_U32(ctx, 31, 0x10D2B4u);
    ctx->pc = 0x10D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D100u, 0x10D2ACu, 0x10D2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D2B4u;
label_10d2b4:
    // 0x10d2b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10d2b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10d2b8:
    // 0x10d2b8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x10d2b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10d2bc:
    // 0x10d2bc: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x10d2bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_10d2c0:
    // 0x10d2c0: 0x320f809  jalr        $t9
label_10d2c4:
    if (ctx->pc == 0x10D2C4u) {
        ctx->pc = 0x10D2C8u;
        goto label_10d2c8;
    }
    ctx->pc = 0x10D2C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10D2C8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D2C0u, 0x10D2C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10D2C8u;
label_10d2c8:
    // 0x10d2c8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x10d2c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10d2cc:
    // 0x10d2cc: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x10d2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_10d2d0:
    // 0x10d2d0: 0xc043440  jal         func_10D100
label_10d2d4:
    if (ctx->pc == 0x10D2D4u) {
        ctx->pc = 0x10D2D8u;
        goto label_10d2d8;
    }
    ctx->pc = 0x10D2D0u;
    SET_GPR_U32(ctx, 31, 0x10D2D8u);
    ctx->pc = 0x10D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D100u, 0x10D2D0u, 0x10D2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D2D8u;
label_10d2d8:
    // 0x10d2d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10d2d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10d2dc:
    // 0x10d2dc: 0xc0412dc  jal         func_104B70
label_10d2e0:
    if (ctx->pc == 0x10D2E0u) {
        ctx->pc = 0x10D2E4u;
        goto label_10d2e4;
    }
    ctx->pc = 0x10D2DCu;
    SET_GPR_U32(ctx, 31, 0x10D2E4u);
    ctx->pc = 0x104B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104B70u, 0x10D2DCu, 0x10D2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D2E4u;
label_10d2e4:
    // 0x10d2e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10d2e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10d2e8:
    // 0x10d2e8: 0xc090590  jal         func_241640
label_10d2ec:
    if (ctx->pc == 0x10D2ECu) {
        ctx->pc = 0x10D2F0u;
        goto label_10d2f0;
    }
    ctx->pc = 0x10D2E8u;
    SET_GPR_U32(ctx, 31, 0x10D2F0u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x10D2E8u, 0x10D2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D2F0u;
label_10d2f0:
    // 0x10d2f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10d2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10d2f4:
    // 0x10d2f4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x10d2f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_10d2f8:
    // 0x10d2f8: 0xc09158c  jal         func_245630
label_10d2fc:
    if (ctx->pc == 0x10D2FCu) {
        ctx->pc = 0x10D300u;
        goto label_10d300;
    }
    ctx->pc = 0x10D2F8u;
    SET_GPR_U32(ctx, 31, 0x10D300u);
    ctx->pc = 0x245630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245630u, 0x10D2F8u, 0x10D300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D300u;
label_10d300:
    // 0x10d300: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10d300u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10d304:
    // 0x10d304: 0x1012000b  beq         $zero, $s2, . + 4 + (0xB << 2)
label_10d308:
    if (ctx->pc == 0x10D308u) {
        ctx->pc = 0x10D30Cu;
        goto label_10d30c;
    }
    ctx->pc = 0x10D304u;
    {
        const bool branch_taken_0x10d304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 18));
        if (branch_taken_0x10d304) {
            ctx->pc = 0x10D334u;
            goto label_10d334;
        }
    }
    ctx->pc = 0x10D30Cu;
label_10d30c:
    // 0x10d30c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10d30cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10d310:
    // 0x10d310: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x10d310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_10d314:
    // 0x10d314: 0xc085538  jal         func_2154E0
label_10d318:
    if (ctx->pc == 0x10D318u) {
        ctx->pc = 0x10D31Cu;
        goto label_10d31c;
    }
    ctx->pc = 0x10D314u;
    SET_GPR_U32(ctx, 31, 0x10D31Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x10D314u, 0x10D31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D31Cu;
label_10d31c:
    // 0x10d31c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x10d31cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10d320:
    // 0x10d320: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x10d320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_10d324:
    // 0x10d324: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10d324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10d328:
    // 0x10d328: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x10d328u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10d32c:
    // 0x10d32c: 0xc091ab0  jal         func_246AC0
label_10d330:
    if (ctx->pc == 0x10D330u) {
        ctx->pc = 0x10D334u;
        goto label_10d334;
    }
    ctx->pc = 0x10D32Cu;
    SET_GPR_U32(ctx, 31, 0x10D334u);
    ctx->pc = 0x246AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246AC0u, 0x10D32Cu, 0x10D334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D334u;
label_10d334:
    // 0x10d334: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10d334u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10d338:
    // 0x10d338: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x10d338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_10d33c:
    // 0x10d33c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x10d33cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_10d340:
    // 0x10d340: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x10d340u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_10d344:
    // 0x10d344: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x10d344u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_10d348:
    // 0x10d348: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10d348u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10d34c:
    // 0x10d34c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10d34cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10d350:
    // 0x10d350: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10d350u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_10d354:
    // 0x10d354: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x10d354u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_10d358:
    // 0x10d358: 0x3e00008  jr          $ra
label_10d35c:
    if (ctx->pc == 0x10D35Cu) {
        ctx->pc = 0x10D360u;
        goto label_fallthrough_0x10d358;
    }
    ctx->pc = 0x10D358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10d358:
    ctx->pc = 0x10D360u;
}
