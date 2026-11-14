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

// Function: sub_002BD1B0
// Address: 0x2bd1b0 - 0x2bd430
void sub_002BD1B0_0x2bd1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BD1B0_0x2bd1b0");
#endif

    switch (ctx->pc) {
        case 0x2bd200u: goto label_2bd200;
        case 0x2bd218u: goto label_2bd218;
        case 0x2bd234u: goto label_2bd234;
        case 0x2bd254u: goto label_2bd254;
        case 0x2bd264u: goto label_2bd264;
        case 0x2bd274u: goto label_2bd274;
        case 0x2bd284u: goto label_2bd284;
        case 0x2bd298u: goto label_2bd298;
        case 0x2bd2acu: goto label_2bd2ac;
        case 0x2bd2d0u: goto label_2bd2d0;
        case 0x2bd2e4u: goto label_2bd2e4;
        case 0x2bd2f4u: goto label_2bd2f4;
        case 0x2bd30cu: goto label_2bd30c;
        case 0x2bd324u: goto label_2bd324;
        case 0x2bd338u: goto label_2bd338;
        case 0x2bd348u: goto label_2bd348;
        case 0x2bd358u: goto label_2bd358;
        case 0x2bd368u: goto label_2bd368;
        case 0x2bd37cu: goto label_2bd37c;
        case 0x2bd38cu: goto label_2bd38c;
        case 0x2bd3a4u: goto label_2bd3a4;
        case 0x2bd3b8u: goto label_2bd3b8;
        case 0x2bd3c4u: goto label_2bd3c4;
        case 0x2bd3f4u: goto label_2bd3f4;
        case 0x2bd404u: goto label_2bd404;
        default: break;
    }

    ctx->pc = 0x2bd1b0u;

    // 0x2bd1b0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x2bd1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x2bd1b4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2bd1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2bd1b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2bd1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2bd1bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2bd1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2bd1c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2bd1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2bd1c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bd1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2bd1c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bd1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bd1cc: 0xafa400f0  sw          $a0, 0xF0($sp)
    ctx->pc = 0x2bd1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 4));
    // 0x2bd1d0: 0xafa50100  sw          $a1, 0x100($sp)
    ctx->pc = 0x2bd1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 5));
    // 0x2bd1d4: 0xa3a60110  sb          $a2, 0x110($sp)
    ctx->pc = 0x2bd1d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 272), (uint8_t)GPR_U32(ctx, 6));
    // 0x2bd1d8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2bd1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2bd1dc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2bd1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2bd1e0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2bd1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2bd1e4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2bd1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2bd1e8: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2BD1E8u;
    {
        const bool branch_taken_0x2bd1e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bd1e8) {
            ctx->pc = 0x2BD28Cu;
            goto label_2bd28c;
        }
    }
    ctx->pc = 0x2BD1F0u;
    // 0x2bd1f0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2bd1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2bd1f4: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x2bd1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2bd1f8: 0xc0788d4  jal         func_1E2350
    ctx->pc = 0x2BD1F8u;
    SET_GPR_U32(ctx, 31, 0x2BD200u);
    ctx->pc = 0x1E2350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2350u, 0x2BD1F8u, 0x2BD200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD200u;
label_2bd200:
    // 0x2bd200: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2bd200u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd204: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2bd204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2bd208: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x2bd208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x2bd20c: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x2bd20cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2bd210: 0xc0788d4  jal         func_1E2350
    ctx->pc = 0x2BD210u;
    SET_GPR_U32(ctx, 31, 0x2BD218u);
    ctx->pc = 0x1E2350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2350u, 0x2BD210u, 0x2BD218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD218u;
label_2bd218:
    // 0x2bd218: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2bd218u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd21c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2bd21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2bd220: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2bd220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2bd224: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x2bd224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2bd228: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2bd228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bd22c: 0xc07887c  jal         func_1E21F0
    ctx->pc = 0x2BD22Cu;
    SET_GPR_U32(ctx, 31, 0x2BD234u);
    ctx->pc = 0x1E21F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E21F0u, 0x2BD22Cu, 0x2BD234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD234u;
label_2bd234:
    // 0x2bd234: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x2bd234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x2bd238: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2bd238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd23c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2bd23cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd240: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x2bd240u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2bd244: 0x27a800ec  addiu       $t0, $sp, 0xEC
    ctx->pc = 0x2bd244u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x2bd248: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2bd248u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd24c: 0xc078b74  jal         func_1E2DD0
    ctx->pc = 0x2BD24Cu;
    SET_GPR_U32(ctx, 31, 0x2BD254u);
    ctx->pc = 0x1E2DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2DD0u, 0x2BD24Cu, 0x2BD254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD254u;
label_2bd254:
    // 0x2bd254: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x2bd254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x2bd258: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x2bd258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2bd25c: 0xc078858  jal         func_1E2160
    ctx->pc = 0x2BD25Cu;
    SET_GPR_U32(ctx, 31, 0x2BD264u);
    ctx->pc = 0x1E2160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2160u, 0x2BD25Cu, 0x2BD264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD264u;
label_2bd264:
    // 0x2bd264: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x2bd264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x2bd268: 0x93a50110  lbu         $a1, 0x110($sp)
    ctx->pc = 0x2bd268u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2bd26c: 0xc078820  jal         func_1E2080
    ctx->pc = 0x2BD26Cu;
    SET_GPR_U32(ctx, 31, 0x2BD274u);
    ctx->pc = 0x1E2080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2080u, 0x2BD26Cu, 0x2BD274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD274u;
label_2bd274:
    // 0x2bd274: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2bd274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2bd278: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x2bd278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2bd27c: 0xc078a30  jal         func_1E28C0
    ctx->pc = 0x2BD27Cu;
    SET_GPR_U32(ctx, 31, 0x2BD284u);
    ctx->pc = 0x1E28C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E28C0u, 0x2BD27Cu, 0x2BD284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD284u;
label_2bd284:
    // 0x2bd284: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x2BD284u;
    {
        const bool branch_taken_0x2bd284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd284) {
            ctx->pc = 0x2BD404u;
            goto label_2bd404;
        }
    }
    ctx->pc = 0x2BD28Cu;
label_2bd28c:
    // 0x2bd28c: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x2bd28cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2bd290: 0xc077f2c  jal         func_1DFCB0
    ctx->pc = 0x2BD290u;
    SET_GPR_U32(ctx, 31, 0x2BD298u);
    ctx->pc = 0x1DFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFCB0u, 0x2BD290u, 0x2BD298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD298u;
label_2bd298:
    // 0x2bd298: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BD298u;
    {
        const bool branch_taken_0x2bd298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd298) {
            ctx->pc = 0x2BD2B8u;
            goto label_2bd2b8;
        }
    }
    ctx->pc = 0x2BD2A0u;
    // 0x2bd2a0: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x2bd2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2bd2a4: 0xc077f2c  jal         func_1DFCB0
    ctx->pc = 0x2BD2A4u;
    SET_GPR_U32(ctx, 31, 0x2BD2ACu);
    ctx->pc = 0x1DFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFCB0u, 0x2BD2A4u, 0x2BD2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD2ACu;
label_2bd2ac:
    // 0x2bd2ac: 0x28840  sll         $s1, $v0, 1
    ctx->pc = 0x2bd2acu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2bd2b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2BD2B0u;
    {
        const bool branch_taken_0x2bd2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd2b0) {
            ctx->pc = 0x2BD2BCu;
            goto label_2bd2bc;
        }
    }
    ctx->pc = 0x2BD2B8u;
label_2bd2b8:
    // 0x2bd2b8: 0x24110020  addiu       $s1, $zero, 0x20
    ctx->pc = 0x2bd2b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2bd2bc:
    // 0x2bd2bc: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x2bd2bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd2c0: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x2bd2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2bd2c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2bd2c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd2c8: 0xc078b28  jal         func_1E2CA0
    ctx->pc = 0x2BD2C8u;
    SET_GPR_U32(ctx, 31, 0x2BD2D0u);
    ctx->pc = 0x1E2CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2CA0u, 0x2BD2C8u, 0x2BD2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD2D0u;
label_2bd2d0:
    // 0x2bd2d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bd2d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd2d4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2bd2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2bd2d8: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x2bd2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2bd2dc: 0xc0788e4  jal         func_1E2390
    ctx->pc = 0x2BD2DCu;
    SET_GPR_U32(ctx, 31, 0x2BD2E4u);
    ctx->pc = 0x1E2390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2390u, 0x2BD2DCu, 0x2BD2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD2E4u;
label_2bd2e4:
    // 0x2bd2e4: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x2bd2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x2bd2e8: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x2bd2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2bd2ec: 0xc0788d4  jal         func_1E2350
    ctx->pc = 0x2BD2ECu;
    SET_GPR_U32(ctx, 31, 0x2BD2F4u);
    ctx->pc = 0x1E2350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2350u, 0x2BD2ECu, 0x2BD2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD2F4u;
label_2bd2f4:
    // 0x2bd2f4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2bd2f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd2f8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2bd2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2bd2fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bd2fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd300: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2bd300u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd304: 0xc078b08  jal         func_1E2C20
    ctx->pc = 0x2BD304u;
    SET_GPR_U32(ctx, 31, 0x2BD30Cu);
    ctx->pc = 0x1E2C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2C20u, 0x2BD304u, 0x2BD30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD30Cu;
label_2bd30c:
    // 0x2bd30c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2bd30cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2bd310: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x2bd310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2bd314: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2bd314u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd318: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2bd318u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd31c: 0xc078a50  jal         func_1E2940
    ctx->pc = 0x2BD31Cu;
    SET_GPR_U32(ctx, 31, 0x2BD324u);
    ctx->pc = 0x1E2940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2940u, 0x2BD31Cu, 0x2BD324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD324u;
label_2bd324:
    // 0x2bd324: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2bd324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2bd328: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x2bd328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2bd32c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2bd32cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd330: 0xc0af50c  jal         func_2BD430
    ctx->pc = 0x2BD330u;
    SET_GPR_U32(ctx, 31, 0x2BD338u);
    ctx->pc = 0x2BD430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BD430u, 0x2BD330u, 0x2BD338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD338u;
label_2bd338:
    // 0x2bd338: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x2bd338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x2bd33c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2bd33cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2bd340: 0xc078858  jal         func_1E2160
    ctx->pc = 0x2BD340u;
    SET_GPR_U32(ctx, 31, 0x2BD348u);
    ctx->pc = 0x1E2160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2160u, 0x2BD340u, 0x2BD348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD348u;
label_2bd348:
    // 0x2bd348: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x2bd348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x2bd34c: 0x93a50110  lbu         $a1, 0x110($sp)
    ctx->pc = 0x2bd34cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2bd350: 0xc078820  jal         func_1E2080
    ctx->pc = 0x2BD350u;
    SET_GPR_U32(ctx, 31, 0x2BD358u);
    ctx->pc = 0x1E2080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2080u, 0x2BD350u, 0x2BD358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD358u;
label_2bd358:
    // 0x2bd358: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2bd358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2bd35c: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x2bd35cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2bd360: 0xc0788d4  jal         func_1E2350
    ctx->pc = 0x2BD360u;
    SET_GPR_U32(ctx, 31, 0x2BD368u);
    ctx->pc = 0x1E2350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2350u, 0x2BD360u, 0x2BD368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD368u;
label_2bd368:
    // 0x2bd368: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2bd368u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd36c: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x2bd36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x2bd370: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x2bd370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2bd374: 0xc078c10  jal         func_1E3040
    ctx->pc = 0x2BD374u;
    SET_GPR_U32(ctx, 31, 0x2BD37Cu);
    ctx->pc = 0x1E3040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3040u, 0x2BD374u, 0x2BD37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD37Cu;
label_2bd37c:
    // 0x2bd37c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2bd37cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2bd380: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x2bd380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2bd384: 0xc0788d4  jal         func_1E2350
    ctx->pc = 0x2BD384u;
    SET_GPR_U32(ctx, 31, 0x2BD38Cu);
    ctx->pc = 0x1E2350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2350u, 0x2BD384u, 0x2BD38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD38Cu;
label_2bd38c:
    // 0x2bd38c: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x2bd38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x2bd390: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2bd390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd394: 0x27a60078  addiu       $a2, $sp, 0x78
    ctx->pc = 0x2bd394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x2bd398: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2bd398u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd39c: 0xc078a50  jal         func_1E2940
    ctx->pc = 0x2BD39Cu;
    SET_GPR_U32(ctx, 31, 0x2BD3A4u);
    ctx->pc = 0x1E2940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2940u, 0x2BD39Cu, 0x2BD3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD3A4u;
label_2bd3a4:
    // 0x2bd3a4: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2bd3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2bd3a8: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x2bd3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2bd3ac: 0x27a50088  addiu       $a1, $sp, 0x88
    ctx->pc = 0x2bd3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x2bd3b0: 0xc0789e8  jal         func_1E27A0
    ctx->pc = 0x2BD3B0u;
    SET_GPR_U32(ctx, 31, 0x2BD3B8u);
    ctx->pc = 0x1E27A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E27A0u, 0x2BD3B0u, 0x2BD3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD3B8u;
label_2bd3b8:
    // 0x2bd3b8: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x2bd3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2bd3bc: 0xc075888  jal         func_1D6220
    ctx->pc = 0x2BD3BCu;
    SET_GPR_U32(ctx, 31, 0x2BD3C4u);
    ctx->pc = 0x1D6220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6220u, 0x2BD3BCu, 0x2BD3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD3C4u;
label_2bd3c4:
    // 0x2bd3c4: 0x2643001f  addiu       $v1, $s2, 0x1F
    ctx->pc = 0x2bd3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 31));
    // 0x2bd3c8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2bd3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2bd3cc: 0x31142  srl         $v0, $v1, 5
    ctx->pc = 0x2bd3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x2bd3d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2bd3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2bd3d4: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x2bd3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2bd3d8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2bd3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2bd3dc: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x2bd3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x2bd3e0: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x2bd3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x2bd3e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bd3e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd3e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2bd3e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd3ec: 0xc078b08  jal         func_1E2C20
    ctx->pc = 0x2BD3ECu;
    SET_GPR_U32(ctx, 31, 0x2BD3F4u);
    ctx->pc = 0x1E2C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2C20u, 0x2BD3ECu, 0x2BD3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD3F4u;
label_2bd3f4:
    // 0x2bd3f4: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x2bd3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2bd3f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bd3f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd3fc: 0xc0789e8  jal         func_1E27A0
    ctx->pc = 0x2BD3FCu;
    SET_GPR_U32(ctx, 31, 0x2BD404u);
    ctx->pc = 0x1E27A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E27A0u, 0x2BD3FCu, 0x2BD404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD404u;
label_2bd404:
    // 0x2bd404: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2bd404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bd408: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2bd408u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bd40c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2bd40cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bd410: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2bd410u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bd414: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bd414u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bd418: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bd418u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bd41c: 0x27bd0120  addiu       $sp, $sp, 0x120
    ctx->pc = 0x2bd41cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2bd420: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD428u;
    // 0x2bd428: 0x0  nop
    ctx->pc = 0x2bd428u;
    // NOP
    // 0x2bd42c: 0x0  nop
    ctx->pc = 0x2bd42cu;
    // NOP
    ctx->pc = 0x2bd430u;
}
