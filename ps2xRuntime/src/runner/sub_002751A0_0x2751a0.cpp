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

// Function: sub_002751A0
// Address: 0x2751a0 - 0x275690
void sub_002751A0_0x2751a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002751A0_0x2751a0");
#endif

    switch (ctx->pc) {
        case 0x2751b8u: goto label_2751b8;
        case 0x27521cu: goto label_27521c;
        case 0x275254u: goto label_275254;
        case 0x275268u: goto label_275268;
        case 0x275274u: goto label_275274;
        case 0x275288u: goto label_275288;
        case 0x2752a4u: goto label_2752a4;
        case 0x2752f4u: goto label_2752f4;
        case 0x275310u: goto label_275310;
        case 0x275320u: goto label_275320;
        case 0x27532cu: goto label_27532c;
        case 0x275340u: goto label_275340;
        case 0x27534cu: goto label_27534c;
        case 0x275358u: goto label_275358;
        case 0x275364u: goto label_275364;
        case 0x275370u: goto label_275370;
        case 0x275384u: goto label_275384;
        case 0x275394u: goto label_275394;
        case 0x2753a0u: goto label_2753a0;
        case 0x2753b4u: goto label_2753b4;
        case 0x2753d0u: goto label_2753d0;
        case 0x2753e8u: goto label_2753e8;
        case 0x2753fcu: goto label_2753fc;
        case 0x27540cu: goto label_27540c;
        case 0x275420u: goto label_275420;
        case 0x275438u: goto label_275438;
        case 0x27544cu: goto label_27544c;
        case 0x27545cu: goto label_27545c;
        case 0x27546cu: goto label_27546c;
        case 0x275480u: goto label_275480;
        case 0x27549cu: goto label_27549c;
        case 0x2754acu: goto label_2754ac;
        case 0x2754b8u: goto label_2754b8;
        case 0x2754ccu: goto label_2754cc;
        case 0x2754f0u: goto label_2754f0;
        case 0x275500u: goto label_275500;
        case 0x275510u: goto label_275510;
        case 0x27551cu: goto label_27551c;
        case 0x275528u: goto label_275528;
        case 0x275538u: goto label_275538;
        case 0x275544u: goto label_275544;
        case 0x27555cu: goto label_27555c;
        case 0x275570u: goto label_275570;
        case 0x275580u: goto label_275580;
        case 0x275590u: goto label_275590;
        case 0x2755a0u: goto label_2755a0;
        case 0x2755b4u: goto label_2755b4;
        case 0x2755c4u: goto label_2755c4;
        case 0x2755d4u: goto label_2755d4;
        case 0x2755ecu: goto label_2755ec;
        case 0x27565cu: goto label_27565c;
        case 0x27567cu: goto label_27567c;
        default: break;
    }

    ctx->pc = 0x2751a0u;

    // 0x2751a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2751a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2751a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2751a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2751a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2751a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2751ac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2751acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2751b0: 0xc09d130  jal         func_2744C0
    ctx->pc = 0x2751B0u;
    SET_GPR_U32(ctx, 31, 0x2751B8u);
    ctx->pc = 0x2744C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2744C0u, 0x2751B0u, 0x2751B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2751B8u;
label_2751b8:
    // 0x2751b8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2751b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2751bc: 0x24635b90  addiu       $v1, $v1, 0x5B90
    ctx->pc = 0x2751bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23440));
    // 0x2751c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2751c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2751c4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2751c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2751c8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2751c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2751cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2751ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2751d0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2751d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2751d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2751D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2751D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2751DCu;
    // 0x2751dc: 0x0  nop
    ctx->pc = 0x2751dcu;
    // NOP
    // 0x2751e0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2751e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2751e4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2751e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2751e8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2751e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2751ec: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2751ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2751f0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2751f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2751f4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2751f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2751f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2751f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2751fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2751fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x275200: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x275200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x275204: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x275204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x275208: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x275208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27520c: 0xafa40100  sw          $a0, 0x100($sp)
    ctx->pc = 0x27520cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 4));
    // 0x275210: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x275210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x275214: 0xc09d248  jal         func_274920
    ctx->pc = 0x275214u;
    SET_GPR_U32(ctx, 31, 0x27521Cu);
    ctx->pc = 0x274920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274920u, 0x275214u, 0x27521Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27521Cu;
label_27521c:
    // 0x27521c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x27521cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x275220: 0x104300ee  beq         $v0, $v1, . + 4 + (0xEE << 2)
    ctx->pc = 0x275220u;
    {
        const bool branch_taken_0x275220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x275220) {
            ctx->pc = 0x2755DCu;
            goto label_2755dc;
        }
    }
    ctx->pc = 0x275228u;
    // 0x275228: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x275228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27522c: 0x104300eb  beq         $v0, $v1, . + 4 + (0xEB << 2)
    ctx->pc = 0x27522Cu;
    {
        const bool branch_taken_0x27522c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x27522c) {
            ctx->pc = 0x2755DCu;
            goto label_2755dc;
        }
    }
    ctx->pc = 0x275234u;
    // 0x275234: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x275234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x275238: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x275238u;
    {
        const bool branch_taken_0x275238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x275238) {
            ctx->pc = 0x275248u;
            goto label_275248;
        }
    }
    ctx->pc = 0x275240u;
    // 0x275240: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x275240u;
    {
        const bool branch_taken_0x275240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275240) {
            ctx->pc = 0x2755ECu;
            goto label_2755ec;
        }
    }
    ctx->pc = 0x275248u;
label_275248:
    // 0x275248: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x275248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x27524c: 0xc09d274  jal         func_2749D0
    ctx->pc = 0x27524Cu;
    SET_GPR_U32(ctx, 31, 0x275254u);
    ctx->pc = 0x2749D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2749D0u, 0x27524Cu, 0x275254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275254u;
label_275254:
    // 0x275254: 0x8f83bbb4  lw          $v1, -0x444C($gp)
    ctx->pc = 0x275254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x275258: 0x8c64002c  lw          $a0, 0x2C($v1)
    ctx->pc = 0x275258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x27525c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27525cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275260: 0xc088fb4  jal         func_223ED0
    ctx->pc = 0x275260u;
    SET_GPR_U32(ctx, 31, 0x275268u);
    ctx->pc = 0x223ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223ED0u, 0x275260u, 0x275268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275268u;
label_275268:
    // 0x275268: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x275268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x27526c: 0xc09d274  jal         func_2749D0
    ctx->pc = 0x27526Cu;
    SET_GPR_U32(ctx, 31, 0x275274u);
    ctx->pc = 0x2749D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2749D0u, 0x27526Cu, 0x275274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275274u;
label_275274:
    // 0x275274: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x275274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275278: 0x240504c8  addiu       $a1, $zero, 0x4C8
    ctx->pc = 0x275278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1224));
    // 0x27527c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27527cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275280: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x275280u;
    SET_GPR_U32(ctx, 31, 0x275288u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x275280u, 0x275288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275288u;
label_275288:
    // 0x275288: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x275288u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27528c: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x27528cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x275290: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x275290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x275294: 0x240504c8  addiu       $a1, $zero, 0x4C8
    ctx->pc = 0x275294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1224));
    // 0x275298: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x275298u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27529c: 0xc040924  jal         func_102490
    ctx->pc = 0x27529Cu;
    SET_GPR_U32(ctx, 31, 0x2752A4u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x27529Cu, 0x2752A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2752A4u;
label_2752a4:
    // 0x2752a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2752a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2752a8: 0x12c20080  beq         $s6, $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x2752A8u;
    {
        const bool branch_taken_0x2752a8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        if (branch_taken_0x2752a8) {
            ctx->pc = 0x2754ACu;
            goto label_2754ac;
        }
    }
    ctx->pc = 0x2752B0u;
    // 0x2752b0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2752b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2752b4: 0x12c2007d  beq         $s6, $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x2752B4u;
    {
        const bool branch_taken_0x2752b4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        if (branch_taken_0x2752b4) {
            ctx->pc = 0x2754ACu;
            goto label_2754ac;
        }
    }
    ctx->pc = 0x2752BCu;
    // 0x2752bc: 0x12c0007b  beqz        $s6, . + 4 + (0x7B << 2)
    ctx->pc = 0x2752BCu;
    {
        const bool branch_taken_0x2752bc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x2752bc) {
            ctx->pc = 0x2754ACu;
            goto label_2754ac;
        }
    }
    ctx->pc = 0x2752C4u;
    // 0x2752c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2752c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2752c8: 0x12c20003  beq         $s6, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2752C8u;
    {
        const bool branch_taken_0x2752c8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        if (branch_taken_0x2752c8) {
            ctx->pc = 0x2752D8u;
            goto label_2752d8;
        }
    }
    ctx->pc = 0x2752D0u;
    // 0x2752d0: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x2752D0u;
    {
        const bool branch_taken_0x2752d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2752d0) {
            ctx->pc = 0x2754ACu;
            goto label_2754ac;
        }
    }
    ctx->pc = 0x2752D8u;
label_2752d8:
    // 0x2752d8: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x2752d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x2752dc: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2752dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2752e0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2752e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2752e4: 0x24a5d0a0  addiu       $a1, $a1, -0x2F60
    ctx->pc = 0x2752e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955168));
    // 0x2752e8: 0x2786a188  addiu       $a2, $gp, -0x5E78
    ctx->pc = 0x2752e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943112));
    // 0x2752ec: 0xc04206c  jal         func_1081B0
    ctx->pc = 0x2752ECu;
    SET_GPR_U32(ctx, 31, 0x2752F4u);
    ctx->pc = 0x1081B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1081B0u, 0x2752ECu, 0x2752F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2752F4u;
label_2752f4:
    // 0x2752f4: 0x8f83bbb4  lw          $v1, -0x444C($gp)
    ctx->pc = 0x2752f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x2752f8: 0x8c64002c  lw          $a0, 0x2C($v1)
    ctx->pc = 0x2752f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x2752fc: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2752fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x275300: 0x24a5d080  addiu       $a1, $a1, -0x2F80
    ctx->pc = 0x275300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955136));
    // 0x275304: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x275304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275308: 0xc041b90  jal         func_106E40
    ctx->pc = 0x275308u;
    SET_GPR_U32(ctx, 31, 0x275310u);
    ctx->pc = 0x106E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E40u, 0x275308u, 0x275310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275310u;
label_275310:
    // 0x275310: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x275310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x275314: 0x2785a188  addiu       $a1, $gp, -0x5E78
    ctx->pc = 0x275314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943112));
    // 0x275318: 0xc040304  jal         func_100C10
    ctx->pc = 0x275318u;
    SET_GPR_U32(ctx, 31, 0x275320u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x275318u, 0x275320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275320u;
label_275320:
    // 0x275320: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x275320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x275324: 0xc050ed8  jal         func_143B60
    ctx->pc = 0x275324u;
    SET_GPR_U32(ctx, 31, 0x27532Cu);
    ctx->pc = 0x143B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143B60u, 0x275324u, 0x27532Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27532Cu;
label_27532c:
    // 0x27532c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27532cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275330: 0x2405054e  addiu       $a1, $zero, 0x54E
    ctx->pc = 0x275330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1358));
    // 0x275334: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x275334u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275338: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x275338u;
    SET_GPR_U32(ctx, 31, 0x275340u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x275338u, 0x275340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275340u;
label_275340:
    // 0x275340: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x275340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
    // 0x275344: 0xc090864  jal         func_242190
    ctx->pc = 0x275344u;
    SET_GPR_U32(ctx, 31, 0x27534Cu);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x275344u, 0x27534Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27534Cu;
label_27534c:
    // 0x27534c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27534cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275350: 0xc090598  jal         func_241660
    ctx->pc = 0x275350u;
    SET_GPR_U32(ctx, 31, 0x275358u);
    ctx->pc = 0x241660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241660u, 0x275350u, 0x275358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275358u;
label_275358:
    // 0x275358: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x275358u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27535c: 0xc090864  jal         func_242190
    ctx->pc = 0x27535Cu;
    SET_GPR_U32(ctx, 31, 0x275364u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x27535Cu, 0x275364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275364u;
label_275364:
    // 0x275364: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x275364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275368: 0xc090590  jal         func_241640
    ctx->pc = 0x275368u;
    SET_GPR_U32(ctx, 31, 0x275370u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x275368u, 0x275370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275370u;
label_275370:
    // 0x275370: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x275370u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275374: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x275374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275378: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x275378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x27537c: 0xc09157c  jal         func_2455F0
    ctx->pc = 0x27537Cu;
    SET_GPR_U32(ctx, 31, 0x275384u);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x27537Cu, 0x275384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275384u;
label_275384:
    // 0x275384: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x275384u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275388: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x275388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27538c: 0xc040e7c  jal         func_1039F0
    ctx->pc = 0x27538Cu;
    SET_GPR_U32(ctx, 31, 0x275394u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x27538Cu, 0x275394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275394u;
label_275394:
    // 0x275394: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x275394u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275398: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x275398u;
    {
        const bool branch_taken_0x275398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275398) {
            ctx->pc = 0x275460u;
            goto label_275460;
        }
    }
    ctx->pc = 0x2753A0u;
label_2753a0:
    // 0x2753a0: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2753a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2753a4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2753a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2753a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2753a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2753ac: 0xc095a34  jal         func_2568D0
    ctx->pc = 0x2753ACu;
    SET_GPR_U32(ctx, 31, 0x2753B4u);
    ctx->pc = 0x2568D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2568D0u, 0x2753ACu, 0x2753B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2753B4u;
label_2753b4:
    // 0x2753b4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2753b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2753b8: 0x10120014  beq         $zero, $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x2753B8u;
    {
        const bool branch_taken_0x2753b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 18));
        if (branch_taken_0x2753b8) {
            ctx->pc = 0x27540Cu;
            goto label_27540c;
        }
    }
    ctx->pc = 0x2753C0u;
    // 0x2753c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2753c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2753c4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2753c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2753c8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2753C8u;
    SET_GPR_U32(ctx, 31, 0x2753D0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2753C8u, 0x2753D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2753D0u;
label_2753d0:
    // 0x2753d0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2753d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2753d4: 0x1013000d  beq         $zero, $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x2753D4u;
    {
        const bool branch_taken_0x2753d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 19));
        if (branch_taken_0x2753d4) {
            ctx->pc = 0x27540Cu;
            goto label_27540c;
        }
    }
    ctx->pc = 0x2753DCu;
    // 0x2753dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2753dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2753e0: 0xc091008  jal         func_244020
    ctx->pc = 0x2753E0u;
    SET_GPR_U32(ctx, 31, 0x2753E8u);
    ctx->pc = 0x244020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244020u, 0x2753E0u, 0x2753E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2753E8u;
label_2753e8:
    // 0x2753e8: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x2753e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x2753ec: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2753ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2753f0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2753f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2753f4: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2753F4u;
    SET_GPR_U32(ctx, 31, 0x2753FCu);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2753F4u, 0x2753FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2753FCu;
label_2753fc:
    // 0x2753fc: 0x26440014  addiu       $a0, $s2, 0x14
    ctx->pc = 0x2753fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x275400: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x275400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x275404: 0xc041d58  jal         func_107560
    ctx->pc = 0x275404u;
    SET_GPR_U32(ctx, 31, 0x27540Cu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x275404u, 0x27540Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27540Cu;
label_27540c:
    // 0x27540c: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x27540cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x275410: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x275410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x275414: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x275414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275418: 0xc09138c  jal         func_244E30
    ctx->pc = 0x275418u;
    SET_GPR_U32(ctx, 31, 0x275420u);
    ctx->pc = 0x244E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E30u, 0x275418u, 0x275420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275420u;
label_275420:
    // 0x275420: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x275420u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x275424: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x275424u;
    {
        const bool branch_taken_0x275424 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x275424) {
            ctx->pc = 0x27545Cu;
            goto label_27545c;
        }
    }
    ctx->pc = 0x27542Cu;
    // 0x27542c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27542cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275430: 0xc09138c  jal         func_244E30
    ctx->pc = 0x275430u;
    SET_GPR_U32(ctx, 31, 0x275438u);
    ctx->pc = 0x244E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E30u, 0x275430u, 0x275438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275438u;
label_275438:
    // 0x275438: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x275438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x27543c: 0x2785a190  addiu       $a1, $gp, -0x5E70
    ctx->pc = 0x27543cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943120));
    // 0x275440: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x275440u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275444: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x275444u;
    SET_GPR_U32(ctx, 31, 0x27544Cu);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x275444u, 0x27544Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27544Cu;
label_27544c:
    // 0x27544c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x27544cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x275450: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x275450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x275454: 0xc0424e8  jal         func_1093A0
    ctx->pc = 0x275454u;
    SET_GPR_U32(ctx, 31, 0x27545Cu);
    ctx->pc = 0x1093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1093A0u, 0x275454u, 0x27545Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27545Cu;
label_27545c:
    // 0x27545c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x27545cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_275460:
    // 0x275460: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x275460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275464: 0xc04147c  jal         func_1051F0
    ctx->pc = 0x275464u;
    SET_GPR_U32(ctx, 31, 0x27546Cu);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x275464u, 0x27546Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27546Cu;
label_27546c:
    // 0x27546c: 0x1622ffcc  bne         $s1, $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x27546Cu;
    {
        const bool branch_taken_0x27546c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x27546c) {
            ctx->pc = 0x2753A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2753a0;
        }
    }
    ctx->pc = 0x275474u;
    // 0x275474: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x275474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x275478: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x275478u;
    SET_GPR_U32(ctx, 31, 0x275480u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x275478u, 0x275480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275480u;
label_275480:
    // 0x275480: 0x8f83bbb4  lw          $v1, -0x444C($gp)
    ctx->pc = 0x275480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x275484: 0x8c64002c  lw          $a0, 0x2C($v1)
    ctx->pc = 0x275484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x275488: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x275488u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x27548c: 0x24a5d0c0  addiu       $a1, $a1, -0x2F40
    ctx->pc = 0x27548cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955200));
    // 0x275490: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x275490u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275494: 0xc041b90  jal         func_106E40
    ctx->pc = 0x275494u;
    SET_GPR_U32(ctx, 31, 0x27549Cu);
    ctx->pc = 0x106E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E40u, 0x275494u, 0x27549Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27549Cu;
label_27549c:
    // 0x27549c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x27549cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2754a0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2754a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2754a4: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2754A4u;
    SET_GPR_U32(ctx, 31, 0x2754ACu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2754A4u, 0x2754ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2754ACu;
label_2754ac:
    // 0x2754ac: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x2754acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2754b0: 0xc09d274  jal         func_2749D0
    ctx->pc = 0x2754B0u;
    SET_GPR_U32(ctx, 31, 0x2754B8u);
    ctx->pc = 0x2749D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2749D0u, 0x2754B0u, 0x2754B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2754B8u;
label_2754b8:
    // 0x2754b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2754b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2754bc: 0x240504c7  addiu       $a1, $zero, 0x4C7
    ctx->pc = 0x2754bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1223));
    // 0x2754c0: 0x2786a188  addiu       $a2, $gp, -0x5E78
    ctx->pc = 0x2754c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943112));
    // 0x2754c4: 0xc041a50  jal         func_106940
    ctx->pc = 0x2754C4u;
    SET_GPR_U32(ctx, 31, 0x2754CCu);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x2754C4u, 0x2754CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2754CCu;
label_2754cc:
    // 0x2754cc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2754ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2754d0: 0x82820000  lb          $v0, 0x0($s4)
    ctx->pc = 0x2754d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2754d4: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2754D4u;
    {
        const bool branch_taken_0x2754d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2754d4) {
            ctx->pc = 0x2755A8u;
            goto label_2755a8;
        }
    }
    ctx->pc = 0x2754DCu;
    // 0x2754dc: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2754dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2754e0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2754e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2754e4: 0x24a5d0e0  addiu       $a1, $a1, -0x2F20
    ctx->pc = 0x2754e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955232));
    // 0x2754e8: 0xc040304  jal         func_100C10
    ctx->pc = 0x2754E8u;
    SET_GPR_U32(ctx, 31, 0x2754F0u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x2754E8u, 0x2754F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2754F0u;
label_2754f0:
    // 0x2754f0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2754f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2754f4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2754f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2754f8: 0xc0424e8  jal         func_1093A0
    ctx->pc = 0x2754F8u;
    SET_GPR_U32(ctx, 31, 0x275500u);
    ctx->pc = 0x1093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1093A0u, 0x2754F8u, 0x275500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275500u;
label_275500:
    // 0x275500: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x275500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x275504: 0x2785a198  addiu       $a1, $gp, -0x5E68
    ctx->pc = 0x275504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943128));
    // 0x275508: 0xc0424e8  jal         func_1093A0
    ctx->pc = 0x275508u;
    SET_GPR_U32(ctx, 31, 0x275510u);
    ctx->pc = 0x1093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1093A0u, 0x275508u, 0x275510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275510u;
label_275510:
    // 0x275510: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x275510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x275514: 0xc088560  jal         func_221580
    ctx->pc = 0x275514u;
    SET_GPR_U32(ctx, 31, 0x27551Cu);
    ctx->pc = 0x221580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221580u, 0x275514u, 0x27551Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27551Cu;
label_27551c:
    // 0x27551c: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x27551cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x275520: 0xc09d274  jal         func_2749D0
    ctx->pc = 0x275520u;
    SET_GPR_U32(ctx, 31, 0x275528u);
    ctx->pc = 0x2749D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2749D0u, 0x275520u, 0x275528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275528u;
label_275528:
    // 0x275528: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x275528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x27552c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27552cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275530: 0xc088fb4  jal         func_223ED0
    ctx->pc = 0x275530u;
    SET_GPR_U32(ctx, 31, 0x275538u);
    ctx->pc = 0x223ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223ED0u, 0x275530u, 0x275538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275538u;
label_275538:
    // 0x275538: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x275538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x27553c: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x27553Cu;
    SET_GPR_U32(ctx, 31, 0x275544u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x27553Cu, 0x275544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275544u;
label_275544:
    // 0x275544: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x275544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x275548: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x275548u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x27554c: 0x24a5d0f8  addiu       $a1, $a1, -0x2F08
    ctx->pc = 0x27554cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955256));
    // 0x275550: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x275550u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275554: 0xc041b90  jal         func_106E40
    ctx->pc = 0x275554u;
    SET_GPR_U32(ctx, 31, 0x27555Cu);
    ctx->pc = 0x106E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E40u, 0x275554u, 0x27555Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27555Cu;
label_27555c:
    // 0x27555c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x27555cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x275560: 0x2405054c  addiu       $a1, $zero, 0x54C
    ctx->pc = 0x275560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1356));
    // 0x275564: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x275564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x275568: 0xc040924  jal         func_102490
    ctx->pc = 0x275568u;
    SET_GPR_U32(ctx, 31, 0x275570u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x275568u, 0x275570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275570u;
label_275570:
    // 0x275570: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x275570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x275574: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x275574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x275578: 0xc08ef28  jal         func_23BCA0
    ctx->pc = 0x275578u;
    SET_GPR_U32(ctx, 31, 0x275580u);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x275578u, 0x275580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275580u;
label_275580:
    // 0x275580: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x275580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x275584: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x275584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x275588: 0xc0887b4  jal         func_221ED0
    ctx->pc = 0x275588u;
    SET_GPR_U32(ctx, 31, 0x275590u);
    ctx->pc = 0x221ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221ED0u, 0x275588u, 0x275590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275590u;
label_275590:
    // 0x275590: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x275590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x275594: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x275594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x275598: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x275598u;
    SET_GPR_U32(ctx, 31, 0x2755A0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x275598u, 0x2755A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2755A0u;
label_2755a0:
    // 0x2755a0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2755A0u;
    {
        const bool branch_taken_0x2755a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2755a0) {
            ctx->pc = 0x2755C4u;
            goto label_2755c4;
        }
    }
    ctx->pc = 0x2755A8u;
label_2755a8:
    // 0x2755a8: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x2755a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2755ac: 0xc09d274  jal         func_2749D0
    ctx->pc = 0x2755ACu;
    SET_GPR_U32(ctx, 31, 0x2755B4u);
    ctx->pc = 0x2749D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2749D0u, 0x2755ACu, 0x2755B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2755B4u;
label_2755b4:
    // 0x2755b4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2755b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2755b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2755b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2755bc: 0xc08ef28  jal         func_23BCA0
    ctx->pc = 0x2755BCu;
    SET_GPR_U32(ctx, 31, 0x2755C4u);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x2755BCu, 0x2755C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2755C4u;
label_2755c4:
    // 0x2755c4: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x2755c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2755c8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2755c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2755cc: 0xc09d250  jal         func_274940
    ctx->pc = 0x2755CCu;
    SET_GPR_U32(ctx, 31, 0x2755D4u);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x2755CCu, 0x2755D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2755D4u;
label_2755d4:
    // 0x2755d4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2755D4u;
    {
        const bool branch_taken_0x2755d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2755d4) {
            ctx->pc = 0x2755ECu;
            goto label_2755ec;
        }
    }
    ctx->pc = 0x2755DCu;
label_2755dc:
    // 0x2755dc: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x2755dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2755e0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2755e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2755e4: 0xc09d250  jal         func_274940
    ctx->pc = 0x2755E4u;
    SET_GPR_U32(ctx, 31, 0x2755ECu);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x2755E4u, 0x2755ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2755ECu;
label_2755ec:
    // 0x2755ec: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2755ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2755f0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2755f0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2755f4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2755f4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2755f8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2755f8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2755fc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2755fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x275600: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x275600u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x275604: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x275604u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x275608: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x275608u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27560c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27560cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275610: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x275610u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275614: 0x27bd0110  addiu       $sp, $sp, 0x110
    ctx->pc = 0x275614u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x275618: 0x3e00008  jr          $ra
    ctx->pc = 0x275618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275620u;
    // 0x275620: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x275620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x275624: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x275624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x275628: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x275628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x27562c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x27562cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x275630: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x275630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275634: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x275634u;
    {
        const bool branch_taken_0x275634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x275634) {
            ctx->pc = 0x27567Cu;
            goto label_27567c;
        }
    }
    ctx->pc = 0x27563Cu;
    // 0x27563c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x27563cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x275640: 0x24635b90  addiu       $v1, $v1, 0x5B90
    ctx->pc = 0x275640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23440));
    // 0x275644: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x275644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275648: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x275648u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x27564c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x27564cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275650: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x275650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275654: 0xc09d150  jal         func_274540
    ctx->pc = 0x275654u;
    SET_GPR_U32(ctx, 31, 0x27565Cu);
    ctx->pc = 0x274540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274540u, 0x275654u, 0x27565Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27565Cu;
label_27565c:
    // 0x27565c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x27565cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x275660: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x275660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x275664: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x275664u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x275668: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x275668u;
    {
        const bool branch_taken_0x275668 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x275668) {
            ctx->pc = 0x27567Cu;
            goto label_27567c;
        }
    }
    ctx->pc = 0x275670u;
    // 0x275670: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x275670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275674: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x275674u;
    SET_GPR_U32(ctx, 31, 0x27567Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x275674u, 0x27567Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27567Cu;
label_27567c:
    // 0x27567c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x27567cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275680: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x275680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275684: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x275684u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x275688: 0x3e00008  jr          $ra
    ctx->pc = 0x275688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275690u;
}
