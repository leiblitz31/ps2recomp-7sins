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

// Function: sub_00129090
// Address: 0x129090 - 0x129290
void sub_00129090_0x129090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00129090_0x129090");
#endif

    switch (ctx->pc) {
        case 0x129090u: goto label_129090;
        case 0x129094u: goto label_129094;
        case 0x129098u: goto label_129098;
        case 0x12909cu: goto label_12909c;
        case 0x1290a0u: goto label_1290a0;
        case 0x1290a4u: goto label_1290a4;
        case 0x1290a8u: goto label_1290a8;
        case 0x1290acu: goto label_1290ac;
        case 0x1290b0u: goto label_1290b0;
        case 0x1290b4u: goto label_1290b4;
        case 0x1290b8u: goto label_1290b8;
        case 0x1290bcu: goto label_1290bc;
        case 0x1290c0u: goto label_1290c0;
        case 0x1290c4u: goto label_1290c4;
        case 0x1290c8u: goto label_1290c8;
        case 0x1290ccu: goto label_1290cc;
        case 0x1290d0u: goto label_1290d0;
        case 0x1290d4u: goto label_1290d4;
        case 0x1290d8u: goto label_1290d8;
        case 0x1290dcu: goto label_1290dc;
        case 0x1290e0u: goto label_1290e0;
        case 0x1290e4u: goto label_1290e4;
        case 0x1290e8u: goto label_1290e8;
        case 0x1290ecu: goto label_1290ec;
        case 0x1290f0u: goto label_1290f0;
        case 0x1290f4u: goto label_1290f4;
        case 0x1290f8u: goto label_1290f8;
        case 0x1290fcu: goto label_1290fc;
        case 0x129100u: goto label_129100;
        case 0x129104u: goto label_129104;
        case 0x129108u: goto label_129108;
        case 0x12910cu: goto label_12910c;
        case 0x129110u: goto label_129110;
        case 0x129114u: goto label_129114;
        case 0x129118u: goto label_129118;
        case 0x12911cu: goto label_12911c;
        case 0x129120u: goto label_129120;
        case 0x129124u: goto label_129124;
        case 0x129128u: goto label_129128;
        case 0x12912cu: goto label_12912c;
        case 0x129130u: goto label_129130;
        case 0x129134u: goto label_129134;
        case 0x129138u: goto label_129138;
        case 0x12913cu: goto label_12913c;
        case 0x129140u: goto label_129140;
        case 0x129144u: goto label_129144;
        case 0x129148u: goto label_129148;
        case 0x12914cu: goto label_12914c;
        case 0x129150u: goto label_129150;
        case 0x129154u: goto label_129154;
        case 0x129158u: goto label_129158;
        case 0x12915cu: goto label_12915c;
        case 0x129160u: goto label_129160;
        case 0x129164u: goto label_129164;
        case 0x129168u: goto label_129168;
        case 0x12916cu: goto label_12916c;
        case 0x129170u: goto label_129170;
        case 0x129174u: goto label_129174;
        case 0x129178u: goto label_129178;
        case 0x12917cu: goto label_12917c;
        case 0x129180u: goto label_129180;
        case 0x129184u: goto label_129184;
        case 0x129188u: goto label_129188;
        case 0x12918cu: goto label_12918c;
        case 0x129190u: goto label_129190;
        case 0x129194u: goto label_129194;
        case 0x129198u: goto label_129198;
        case 0x12919cu: goto label_12919c;
        case 0x1291a0u: goto label_1291a0;
        case 0x1291a4u: goto label_1291a4;
        case 0x1291a8u: goto label_1291a8;
        case 0x1291acu: goto label_1291ac;
        case 0x1291b0u: goto label_1291b0;
        case 0x1291b4u: goto label_1291b4;
        case 0x1291b8u: goto label_1291b8;
        case 0x1291bcu: goto label_1291bc;
        case 0x1291c0u: goto label_1291c0;
        case 0x1291c4u: goto label_1291c4;
        case 0x1291c8u: goto label_1291c8;
        case 0x1291ccu: goto label_1291cc;
        case 0x1291d0u: goto label_1291d0;
        case 0x1291d4u: goto label_1291d4;
        case 0x1291d8u: goto label_1291d8;
        case 0x1291dcu: goto label_1291dc;
        case 0x1291e0u: goto label_1291e0;
        case 0x1291e4u: goto label_1291e4;
        case 0x1291e8u: goto label_1291e8;
        case 0x1291ecu: goto label_1291ec;
        case 0x1291f0u: goto label_1291f0;
        case 0x1291f4u: goto label_1291f4;
        case 0x1291f8u: goto label_1291f8;
        case 0x1291fcu: goto label_1291fc;
        case 0x129200u: goto label_129200;
        case 0x129204u: goto label_129204;
        case 0x129208u: goto label_129208;
        case 0x12920cu: goto label_12920c;
        case 0x129210u: goto label_129210;
        case 0x129214u: goto label_129214;
        case 0x129218u: goto label_129218;
        case 0x12921cu: goto label_12921c;
        case 0x129220u: goto label_129220;
        case 0x129224u: goto label_129224;
        case 0x129228u: goto label_129228;
        case 0x12922cu: goto label_12922c;
        case 0x129230u: goto label_129230;
        case 0x129234u: goto label_129234;
        case 0x129238u: goto label_129238;
        case 0x12923cu: goto label_12923c;
        case 0x129240u: goto label_129240;
        case 0x129244u: goto label_129244;
        case 0x129248u: goto label_129248;
        case 0x12924cu: goto label_12924c;
        case 0x129250u: goto label_129250;
        case 0x129254u: goto label_129254;
        case 0x129258u: goto label_129258;
        case 0x12925cu: goto label_12925c;
        case 0x129260u: goto label_129260;
        case 0x129264u: goto label_129264;
        case 0x129268u: goto label_129268;
        case 0x12926cu: goto label_12926c;
        case 0x129270u: goto label_129270;
        case 0x129274u: goto label_129274;
        case 0x129278u: goto label_129278;
        case 0x12927cu: goto label_12927c;
        case 0x129280u: goto label_129280;
        case 0x129284u: goto label_129284;
        case 0x129288u: goto label_129288;
        case 0x12928cu: goto label_12928c;
        default: break;
    }

    ctx->pc = 0x129090u;

label_129090:
    // 0x129090: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x129090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_129094:
    // 0x129094: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x129094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_129098:
    // 0x129098: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x129098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_12909c:
    // 0x12909c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x12909cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1290a0:
    // 0x1290a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1290a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1290a4:
    // 0x1290a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1290a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1290a8:
    // 0x1290a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1290a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1290ac:
    // 0x1290ac: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x1290acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
label_1290b0:
    // 0x1290b0: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x1290b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
label_1290b4:
    // 0x1290b4: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x1290b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
label_1290b8:
    // 0x1290b8: 0xc05548c  jal         func_155230
label_1290bc:
    if (ctx->pc == 0x1290BCu) {
        ctx->pc = 0x1290C0u;
        goto label_1290c0;
    }
    ctx->pc = 0x1290B8u;
    SET_GPR_U32(ctx, 31, 0x1290C0u);
    ctx->pc = 0x155230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155230u, 0x1290B8u, 0x1290C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1290C0u;
label_1290c0:
    // 0x1290c0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1290c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1290c4:
    // 0x1290c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1290c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1290c8:
    // 0x1290c8: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x1290c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_1290cc:
    // 0x1290cc: 0xc0553d4  jal         func_154F50
label_1290d0:
    if (ctx->pc == 0x1290D0u) {
        ctx->pc = 0x1290D4u;
        goto label_1290d4;
    }
    ctx->pc = 0x1290CCu;
    SET_GPR_U32(ctx, 31, 0x1290D4u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x1290CCu, 0x1290D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1290D4u;
label_1290d4:
    // 0x1290d4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1290d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1290d8:
    // 0x1290d8: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1290d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1290dc:
    // 0x1290dc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1290dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1290e0:
    // 0x1290e0: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
label_1290e4:
    if (ctx->pc == 0x1290E4u) {
        ctx->pc = 0x1290E8u;
        goto label_1290e8;
    }
    ctx->pc = 0x1290E0u;
    {
        const bool branch_taken_0x1290e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1290e0) {
            ctx->pc = 0x12912Cu;
            goto label_12912c;
        }
    }
    ctx->pc = 0x1290E8u;
label_1290e8:
    // 0x1290e8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1290e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1290ec:
    // 0x1290ec: 0xaf82ba20  sw          $v0, -0x45E0($gp)
    ctx->pc = 0x1290ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949408), GPR_U32(ctx, 2));
label_1290f0:
    // 0x1290f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1290f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1290f4:
    // 0x1290f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1290f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1290f8:
    // 0x1290f8: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x1290f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_1290fc:
    // 0x1290fc: 0x320f809  jalr        $t9
label_129100:
    if (ctx->pc == 0x129100u) {
        ctx->pc = 0x129104u;
        goto label_129104;
    }
    ctx->pc = 0x1290FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x129104u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1290FCu, 0x129104u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x129104u;
label_129104:
    // 0x129104: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x129104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_129108:
    // 0x129108: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x129108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12910c:
    // 0x12910c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_129110:
    if (ctx->pc == 0x129110u) {
        ctx->pc = 0x129114u;
        goto label_129114;
    }
    ctx->pc = 0x12910Cu;
    {
        const bool branch_taken_0x12910c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x12910c) {
            ctx->pc = 0x129120u;
            goto label_129120;
        }
    }
    ctx->pc = 0x129114u;
label_129114:
    // 0x129114: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x129114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_129118:
    // 0x129118: 0xc08d230  jal         func_2348C0
label_12911c:
    if (ctx->pc == 0x12911Cu) {
        ctx->pc = 0x129120u;
        goto label_129120;
    }
    ctx->pc = 0x129118u;
    SET_GPR_U32(ctx, 31, 0x129120u);
    ctx->pc = 0x2348C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2348C0u, 0x129118u, 0x129120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129120u;
label_129120:
    // 0x129120: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x129120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_129124:
    // 0x129124: 0x1000004f  b           . + 4 + (0x4F << 2)
label_129128:
    if (ctx->pc == 0x129128u) {
        ctx->pc = 0x12912Cu;
        goto label_12912c;
    }
    ctx->pc = 0x129124u;
    {
        const bool branch_taken_0x129124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x129124) {
            ctx->pc = 0x129264u;
            goto label_129264;
        }
    }
    ctx->pc = 0x12912Cu;
label_12912c:
    // 0x12912c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x12912cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_129130:
    // 0x129130: 0x34500100  ori         $s0, $v0, 0x100
    ctx->pc = 0x129130u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_129134:
    // 0x129134: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x129134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_129138:
    // 0x129138: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x129138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_12913c:
    // 0x12913c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_129140:
    if (ctx->pc == 0x129140u) {
        ctx->pc = 0x129144u;
        goto label_129144;
    }
    ctx->pc = 0x12913Cu;
    {
        const bool branch_taken_0x12913c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12913c) {
            ctx->pc = 0x129154u;
            goto label_129154;
        }
    }
    ctx->pc = 0x129144u;
label_129144:
    // 0x129144: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x129144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_129148:
    // 0x129148: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x129148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_12914c:
    // 0x12914c: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
label_129150:
    if (ctx->pc == 0x129150u) {
        ctx->pc = 0x129154u;
        goto label_129154;
    }
    ctx->pc = 0x12914Cu;
    {
        const bool branch_taken_0x12914c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x12914c) {
            ctx->pc = 0x1291C4u;
            goto label_1291c4;
        }
    }
    ctx->pc = 0x129154u;
label_129154:
    // 0x129154: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x129154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_129158:
    // 0x129158: 0xaf82ba1c  sw          $v0, -0x45E4($gp)
    ctx->pc = 0x129158u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949404), GPR_U32(ctx, 2));
label_12915c:
    // 0x12915c: 0xaf80ba20  sw          $zero, -0x45E0($gp)
    ctx->pc = 0x12915cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949408), GPR_U32(ctx, 0));
label_129160:
    // 0x129160: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x129160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_129164:
    // 0x129164: 0xaf828b30  sw          $v0, -0x74D0($gp)
    ctx->pc = 0x129164u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 2));
label_129168:
    // 0x129168: 0x8f83ba1c  lw          $v1, -0x45E4($gp)
    ctx->pc = 0x129168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949404)));
label_12916c:
    // 0x12916c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x12916cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_129170:
    // 0x129170: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_129174:
    if (ctx->pc == 0x129174u) {
        ctx->pc = 0x129178u;
        goto label_129178;
    }
    ctx->pc = 0x129170u;
    {
        const bool branch_taken_0x129170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x129170) {
            ctx->pc = 0x129198u;
            goto label_129198;
        }
    }
    ctx->pc = 0x129178u;
label_129178:
    // 0x129178: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x129178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_12917c:
    // 0x12917c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_129180:
    if (ctx->pc == 0x129180u) {
        ctx->pc = 0x129184u;
        goto label_129184;
    }
    ctx->pc = 0x12917Cu;
    {
        const bool branch_taken_0x12917c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12917c) {
            ctx->pc = 0x12918Cu;
            goto label_12918c;
        }
    }
    ctx->pc = 0x129184u;
label_129184:
    // 0x129184: 0x10000016  b           . + 4 + (0x16 << 2)
label_129188:
    if (ctx->pc == 0x129188u) {
        ctx->pc = 0x12918Cu;
        goto label_12918c;
    }
    ctx->pc = 0x129184u;
    {
        const bool branch_taken_0x129184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x129184) {
            ctx->pc = 0x1291E0u;
            goto label_1291e0;
        }
    }
    ctx->pc = 0x12918Cu;
label_12918c:
    // 0x12918c: 0x36100001  ori         $s0, $s0, 0x1
    ctx->pc = 0x12918cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
label_129190:
    // 0x129190: 0x10000013  b           . + 4 + (0x13 << 2)
label_129194:
    if (ctx->pc == 0x129194u) {
        ctx->pc = 0x129198u;
        goto label_129198;
    }
    ctx->pc = 0x129190u;
    {
        const bool branch_taken_0x129190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x129190) {
            ctx->pc = 0x1291E0u;
            goto label_1291e0;
        }
    }
    ctx->pc = 0x129198u;
label_129198:
    // 0x129198: 0x36100003  ori         $s0, $s0, 0x3
    ctx->pc = 0x129198u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)3);
label_12919c:
    // 0x12919c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x12919cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1291a0:
    // 0x1291a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1291a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1291a4:
    // 0x1291a4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1291a8:
    if (ctx->pc == 0x1291A8u) {
        ctx->pc = 0x1291ACu;
        goto label_1291ac;
    }
    ctx->pc = 0x1291A4u;
    {
        const bool branch_taken_0x1291a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1291a4) {
            ctx->pc = 0x1291BCu;
            goto label_1291bc;
        }
    }
    ctx->pc = 0x1291ACu;
label_1291ac:
    // 0x1291ac: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1291acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1291b0:
    // 0x1291b0: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1291b0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_1291b4:
    // 0x1291b4: 0x1000000a  b           . + 4 + (0xA << 2)
label_1291b8:
    if (ctx->pc == 0x1291B8u) {
        ctx->pc = 0x1291BCu;
        goto label_1291bc;
    }
    ctx->pc = 0x1291B4u;
    {
        const bool branch_taken_0x1291b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1291b4) {
            ctx->pc = 0x1291E0u;
            goto label_1291e0;
        }
    }
    ctx->pc = 0x1291BCu;
label_1291bc:
    // 0x1291bc: 0x10000008  b           . + 4 + (0x8 << 2)
label_1291c0:
    if (ctx->pc == 0x1291C0u) {
        ctx->pc = 0x1291C4u;
        goto label_1291c4;
    }
    ctx->pc = 0x1291BCu;
    {
        const bool branch_taken_0x1291bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1291bc) {
            ctx->pc = 0x1291E0u;
            goto label_1291e0;
        }
    }
    ctx->pc = 0x1291C4u;
label_1291c4:
    // 0x1291c4: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1291c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1291c8:
    // 0x1291c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1291c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1291cc:
    // 0x1291cc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1291d0:
    if (ctx->pc == 0x1291D0u) {
        ctx->pc = 0x1291D4u;
        goto label_1291d4;
    }
    ctx->pc = 0x1291CCu;
    {
        const bool branch_taken_0x1291cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1291cc) {
            ctx->pc = 0x1291E0u;
            goto label_1291e0;
        }
    }
    ctx->pc = 0x1291D4u;
label_1291d4:
    // 0x1291d4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1291d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1291d8:
    // 0x1291d8: 0xaf82ba20  sw          $v0, -0x45E0($gp)
    ctx->pc = 0x1291d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949408), GPR_U32(ctx, 2));
label_1291dc:
    // 0x1291dc: 0xaf80ba1c  sw          $zero, -0x45E4($gp)
    ctx->pc = 0x1291dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949404), GPR_U32(ctx, 0));
label_1291e0:
    // 0x1291e0: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x1291e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_1291e4:
    // 0x1291e4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1291e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1291e8:
    // 0x1291e8: 0x24a52308  addiu       $a1, $a1, 0x2308
    ctx->pc = 0x1291e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8968));
label_1291ec:
    // 0x1291ec: 0xc08e57c  jal         func_2395F0
label_1291f0:
    if (ctx->pc == 0x1291F0u) {
        ctx->pc = 0x1291F4u;
        goto label_1291f4;
    }
    ctx->pc = 0x1291ECu;
    SET_GPR_U32(ctx, 31, 0x1291F4u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x1291ECu, 0x1291F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1291F4u;
label_1291f4:
    // 0x1291f4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1291f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1291f8:
    // 0x1291f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1291f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1291fc:
    // 0x1291fc: 0xc0406d0  jal         func_101B40
label_129200:
    if (ctx->pc == 0x129200u) {
        ctx->pc = 0x129204u;
        goto label_129204;
    }
    ctx->pc = 0x1291FCu;
    SET_GPR_U32(ctx, 31, 0x129204u);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x1291FCu, 0x129204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129204u;
label_129204:
    // 0x129204: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x129204u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_129208:
    // 0x129208: 0x8f83ba1c  lw          $v1, -0x45E4($gp)
    ctx->pc = 0x129208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949404)));
label_12920c:
    // 0x12920c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x12920cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_129210:
    // 0x129210: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_129214:
    if (ctx->pc == 0x129214u) {
        ctx->pc = 0x129218u;
        goto label_129218;
    }
    ctx->pc = 0x129210u;
    {
        const bool branch_taken_0x129210 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x129210) {
            ctx->pc = 0x129228u;
            goto label_129228;
        }
    }
    ctx->pc = 0x129218u;
label_129218:
    // 0x129218: 0x8f83ba1c  lw          $v1, -0x45E4($gp)
    ctx->pc = 0x129218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949404)));
label_12921c:
    // 0x12921c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x12921cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_129220:
    // 0x129220: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_129224:
    if (ctx->pc == 0x129224u) {
        ctx->pc = 0x129228u;
        goto label_129228;
    }
    ctx->pc = 0x129220u;
    {
        const bool branch_taken_0x129220 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x129220) {
            ctx->pc = 0x129230u;
            goto label_129230;
        }
    }
    ctx->pc = 0x129228u;
label_129228:
    // 0x129228: 0x3c110013  lui         $s1, 0x13
    ctx->pc = 0x129228u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)19 << 16));
label_12922c:
    // 0x12922c: 0x26319290  addiu       $s1, $s1, -0x6D70
    ctx->pc = 0x12922cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294939280));
label_129230:
    // 0x129230: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x129230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_129234:
    // 0x129234: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x129234u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_129238:
    // 0x129238: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x129238u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12923c:
    // 0x12923c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x12923cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_129240:
    // 0x129240: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x129240u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_129244:
    // 0x129244: 0xc08d218  jal         func_234860
label_129248:
    if (ctx->pc == 0x129248u) {
        ctx->pc = 0x12924Cu;
        goto label_12924c;
    }
    ctx->pc = 0x129244u;
    SET_GPR_U32(ctx, 31, 0x12924Cu);
    ctx->pc = 0x234860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234860u, 0x129244u, 0x12924Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12924Cu;
label_12924c:
    // 0x12924c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x12924cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_129250:
    // 0x129250: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x129250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_129254:
    // 0x129254: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x129254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_129258:
    // 0x129258: 0xc0406a0  jal         func_101A80
label_12925c:
    if (ctx->pc == 0x12925Cu) {
        ctx->pc = 0x129260u;
        goto label_129260;
    }
    ctx->pc = 0x129258u;
    SET_GPR_U32(ctx, 31, 0x129260u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x129258u, 0x129260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129260u;
label_129260:
    // 0x129260: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x129260u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_129264:
    // 0x129264: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x129264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_129268:
    // 0x129268: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x129268u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_12926c:
    // 0x12926c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x12926cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_129270:
    // 0x129270: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x129270u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_129274:
    // 0x129274: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x129274u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_129278:
    // 0x129278: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x129278u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_12927c:
    // 0x12927c: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x12927cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_129280:
    // 0x129280: 0x3e00008  jr          $ra
label_129284:
    if (ctx->pc == 0x129284u) {
        ctx->pc = 0x129288u;
        goto label_129288;
    }
    ctx->pc = 0x129280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x129288u;
label_129288:
    // 0x129288: 0x0  nop
    ctx->pc = 0x129288u;
    // NOP
label_12928c:
    // 0x12928c: 0x0  nop
    ctx->pc = 0x12928cu;
    // NOP
    ctx->pc = 0x129290u;
}
