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

// Function: sub_002D3110
// Address: 0x2d3110 - 0x2d3600
void sub_002D3110_0x2d3110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3110_0x2d3110");
#endif

    switch (ctx->pc) {
        case 0x2d3144u: goto label_2d3144;
        case 0x2d3158u: goto label_2d3158;
        case 0x2d3190u: goto label_2d3190;
        case 0x2d31a0u: goto label_2d31a0;
        case 0x2d31e0u: goto label_2d31e0;
        case 0x2d31f0u: goto label_2d31f0;
        case 0x2d3204u: goto label_2d3204;
        case 0x2d3214u: goto label_2d3214;
        case 0x2d3238u: goto label_2d3238;
        case 0x2d3248u: goto label_2d3248;
        case 0x2d325cu: goto label_2d325c;
        case 0x2d326cu: goto label_2d326c;
        case 0x2d3290u: goto label_2d3290;
        case 0x2d32a0u: goto label_2d32a0;
        case 0x2d32b4u: goto label_2d32b4;
        case 0x2d32c4u: goto label_2d32c4;
        case 0x2d3590u: goto label_2d3590;
        case 0x2d35a4u: goto label_2d35a4;
        case 0x2d35c0u: goto label_2d35c0;
        default: break;
    }

    ctx->pc = 0x2d3110u;

    // 0x2d3110: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2d3110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x2d3114: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2d3114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2d3118: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d3118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d311c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d311cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d3120: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d3120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d3124: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d3124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d3128: 0xafa400e0  sw          $a0, 0xE0($sp)
    ctx->pc = 0x2d3128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 4));
    // 0x2d312c: 0xafa500f0  sw          $a1, 0xF0($sp)
    ctx->pc = 0x2d312cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 5));
    // 0x2d3130: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2d3130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2d3134: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x2d3134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2d3138: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2d3138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2d313c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2D313Cu;
    SET_GPR_U32(ctx, 31, 0x2D3144u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2D313Cu, 0x2D3144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3144u;
label_2d3144:
    // 0x2d3144: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d3144u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3148: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x2d3148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2d314c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d314cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3150: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2D3150u;
    SET_GPR_U32(ctx, 31, 0x2D3158u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2D3150u, 0x2D3158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3158u;
label_2d3158:
    // 0x2d3158: 0x27a30058  addiu       $v1, $sp, 0x58
    ctx->pc = 0x2d3158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2d315c: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x2d315cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2d3160: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2d3160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d3164: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2d3164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3168: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2d3168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d316c: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2d316cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d3170: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2d3170u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2d3174: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2d3174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2d3178: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2d3178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2d317c: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x2d317cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2d3180: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2d3180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d3184: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d3184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3188: 0xc0b4c2c  jal         func_2D30B0
    ctx->pc = 0x2D3188u;
    SET_GPR_U32(ctx, 31, 0x2D3190u);
    ctx->pc = 0x2D30B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D30B0u, 0x2D3188u, 0x2D3190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3190u;
label_2d3190:
    // 0x2d3190: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2d3190u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d3194: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2d3194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2d3198: 0xc0b4d80  jal         func_2D3600
    ctx->pc = 0x2D3198u;
    SET_GPR_U32(ctx, 31, 0x2D31A0u);
    ctx->pc = 0x2D3600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3600u, 0x2D3198u, 0x2D31A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D31A0u;
label_2d31a0:
    // 0x2d31a0: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x2d31a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2d31a4: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2d31a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d31a8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2d31a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d31ac: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2d31acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d31b0: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x2d31b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2d31b4: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2d31b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2d31b8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2d31b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2d31bc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2d31bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2d31c0: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x2d31c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2d31c4: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x2d31c4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d31c8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2d31c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d31cc: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x2d31ccu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x2d31d0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2d31d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2d31d4: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2d31d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2d31d8: 0xc082ab4  jal         func_20AAD0
    ctx->pc = 0x2D31D8u;
    SET_GPR_U32(ctx, 31, 0x2D31E0u);
    ctx->pc = 0x20AAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AAD0u, 0x2D31D8u, 0x2D31E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D31E0u;
label_2d31e0:
    // 0x2d31e0: 0x2453000c  addiu       $s3, $v0, 0xC
    ctx->pc = 0x2d31e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x2d31e4: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2d31e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2d31e8: 0xc082b68  jal         func_20ADA0
    ctx->pc = 0x2D31E8u;
    SET_GPR_U32(ctx, 31, 0x2D31F0u);
    ctx->pc = 0x20ADA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20ADA0u, 0x2D31E8u, 0x2D31F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D31F0u;
label_2d31f0:
    // 0x2d31f0: 0x12620008  beq         $s3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D31F0u;
    {
        const bool branch_taken_0x2d31f0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d31f0) {
            ctx->pc = 0x2D3214u;
            goto label_2d3214;
        }
    }
    ctx->pc = 0x2D31F8u;
    // 0x2d31f8: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2d31f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2d31fc: 0xc082ab4  jal         func_20AAD0
    ctx->pc = 0x2D31FCu;
    SET_GPR_U32(ctx, 31, 0x2D3204u);
    ctx->pc = 0x20AAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AAD0u, 0x2D31FCu, 0x2D3204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3204u;
label_2d3204:
    // 0x2d3204: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2d3204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2d3208: 0x2445000c  addiu       $a1, $v0, 0xC
    ctx->pc = 0x2d3208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x2d320c: 0xc041d58  jal         func_107560
    ctx->pc = 0x2D320Cu;
    SET_GPR_U32(ctx, 31, 0x2D3214u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2D320Cu, 0x2D3214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3214u;
label_2d3214:
    // 0x2d3214: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2d3214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2d3218: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x2d3218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2d321c: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x2d321cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d3220: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2d3220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3224: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x2d3224u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x2d3228: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2d3228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2d322c: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2d322cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2d3230: 0xc082ab4  jal         func_20AAD0
    ctx->pc = 0x2D3230u;
    SET_GPR_U32(ctx, 31, 0x2D3238u);
    ctx->pc = 0x20AAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AAD0u, 0x2D3230u, 0x2D3238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3238u;
label_2d3238:
    // 0x2d3238: 0x24530018  addiu       $s3, $v0, 0x18
    ctx->pc = 0x2d3238u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x2d323c: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2d323cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2d3240: 0xc082b68  jal         func_20ADA0
    ctx->pc = 0x2D3240u;
    SET_GPR_U32(ctx, 31, 0x2D3248u);
    ctx->pc = 0x20ADA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20ADA0u, 0x2D3240u, 0x2D3248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3248u;
label_2d3248:
    // 0x2d3248: 0x12620008  beq         $s3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D3248u;
    {
        const bool branch_taken_0x2d3248 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d3248) {
            ctx->pc = 0x2D326Cu;
            goto label_2d326c;
        }
    }
    ctx->pc = 0x2D3250u;
    // 0x2d3250: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2d3250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2d3254: 0xc082ab4  jal         func_20AAD0
    ctx->pc = 0x2D3254u;
    SET_GPR_U32(ctx, 31, 0x2D325Cu);
    ctx->pc = 0x20AAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AAD0u, 0x2D3254u, 0x2D325Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D325Cu;
label_2d325c:
    // 0x2d325c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2d325cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2d3260: 0x24450018  addiu       $a1, $v0, 0x18
    ctx->pc = 0x2d3260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x2d3264: 0xc041d58  jal         func_107560
    ctx->pc = 0x2D3264u;
    SET_GPR_U32(ctx, 31, 0x2D326Cu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2D3264u, 0x2D326Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D326Cu;
label_2d326c:
    // 0x2d326c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2d326cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2d3270: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x2d3270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2d3274: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x2d3274u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d3278: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2d3278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d327c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x2d327cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x2d3280: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2d3280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2d3284: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2d3284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2d3288: 0xc082ab4  jal         func_20AAD0
    ctx->pc = 0x2D3288u;
    SET_GPR_U32(ctx, 31, 0x2D3290u);
    ctx->pc = 0x20AAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AAD0u, 0x2D3288u, 0x2D3290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3290u;
label_2d3290:
    // 0x2d3290: 0x24530024  addiu       $s3, $v0, 0x24
    ctx->pc = 0x2d3290u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x2d3294: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2d3294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2d3298: 0xc082b68  jal         func_20ADA0
    ctx->pc = 0x2D3298u;
    SET_GPR_U32(ctx, 31, 0x2D32A0u);
    ctx->pc = 0x20ADA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20ADA0u, 0x2D3298u, 0x2D32A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D32A0u;
label_2d32a0:
    // 0x2d32a0: 0x12620008  beq         $s3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D32A0u;
    {
        const bool branch_taken_0x2d32a0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d32a0) {
            ctx->pc = 0x2D32C4u;
            goto label_2d32c4;
        }
    }
    ctx->pc = 0x2D32A8u;
    // 0x2d32a8: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2d32a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2d32ac: 0xc082ab4  jal         func_20AAD0
    ctx->pc = 0x2D32ACu;
    SET_GPR_U32(ctx, 31, 0x2D32B4u);
    ctx->pc = 0x20AAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AAD0u, 0x2D32ACu, 0x2D32B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D32B4u;
label_2d32b4:
    // 0x2d32b4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2d32b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2d32b8: 0x24450024  addiu       $a1, $v0, 0x24
    ctx->pc = 0x2d32b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x2d32bc: 0xc041d58  jal         func_107560
    ctx->pc = 0x2D32BCu;
    SET_GPR_U32(ctx, 31, 0x2D32C4u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2D32BCu, 0x2D32C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D32C4u;
label_2d32c4:
    // 0x2d32c4: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2d32c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2d32c8: 0xc4430014  lwc1        $f3, 0x14($v0)
    ctx->pc = 0x2d32c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d32cc: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x2d32ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x2d32d0: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x2d32d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d32d4: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2d32d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2d32d8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2d32d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d32dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d32dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d32e0: 0x0  nop
    ctx->pc = 0x2d32e0u;
    // NOP
    // 0x2d32e4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2d32e4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2d32e8: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x2d32e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2d32ec: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2d32ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2d32f0: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x2d32f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2d32f4: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2d32f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2d32f8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2d32f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d32fc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2d32fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3300: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2d3300u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2d3304: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2d3304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2d3308: 0xc7a100dc  lwc1        $f1, 0xDC($sp)
    ctx->pc = 0x2d3308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d330c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2d330cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2d3310: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d3310u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d3314: 0x0  nop
    ctx->pc = 0x2d3314u;
    // NOP
    // 0x2d3318: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2d3318u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d331c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2D331Cu;
    {
        const bool branch_taken_0x2d331c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d331c) {
            ctx->pc = 0x2D3334u;
            goto label_2d3334;
        }
    }
    ctx->pc = 0x2D3324u;
    // 0x2d3324: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2d3324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2d3328: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d3328u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d332c: 0x0  nop
    ctx->pc = 0x2d332cu;
    // NOP
    // 0x2d3330: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2d3330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_2d3334:
    // 0x2d3334: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x2d3334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3338: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x2d3338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2d333c: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x2d333cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3340: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x2d3340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3344: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2d3344u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d3348: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x2d3348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x2d334c: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x2d334cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3350: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x2d3350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3354: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2d3354u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d3358: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x2d3358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d335c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d335cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d3360: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x2d3360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2d3364: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2d3364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2d3368: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x2d3368u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2d336c: 0xc7a40090  lwc1        $f4, 0x90($sp)
    ctx->pc = 0x2d336cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d3370: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2d3370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2d3374: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2d3374u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2d3378: 0xc7a200a0  lwc1        $f2, 0xA0($sp)
    ctx->pc = 0x2d3378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d337c: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x2d337cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3380: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2d3380u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x2d3384: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d3384u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d3388: 0x0  nop
    ctx->pc = 0x2d3388u;
    // NOP
    // 0x2d338c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2d338cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2d3390: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x2d3390u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2d3394: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d3394u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d3398: 0x0  nop
    ctx->pc = 0x2d3398u;
    // NOP
    // 0x2d339c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2d339cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2d33a0: 0x4604285d  msub.s      $f1, $f5, $f4
    ctx->pc = 0x2d33a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x2d33a4: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2d33a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d33a8: 0x460101c0  add.s       $f7, $f0, $f1
    ctx->pc = 0x2d33a8u;
    ctx->f[7] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d33ac: 0xc7a600d0  lwc1        $f6, 0xD0($sp)
    ctx->pc = 0x2d33acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2d33b0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x2d33b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x2d33b4: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x2d33b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2d33b8: 0xc7a40090  lwc1        $f4, 0x90($sp)
    ctx->pc = 0x2d33b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d33bc: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2d33bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2d33c0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2d33c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2d33c4: 0xc7a200a0  lwc1        $f2, 0xA0($sp)
    ctx->pc = 0x2d33c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d33c8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2d33c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2d33cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d33ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d33d0: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x2d33d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d33d4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2d33d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d33d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d33d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d33dc: 0x0  nop
    ctx->pc = 0x2d33dcu;
    // NOP
    // 0x2d33e0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2d33e0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2d33e4: 0x4602185d  msub.s      $f1, $f3, $f2
    ctx->pc = 0x2d33e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2d33e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d33e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d33ec: 0x0  nop
    ctx->pc = 0x2d33ecu;
    // NOP
    // 0x2d33f0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2d33f0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2d33f4: 0x4604285c  madd.s      $f1, $f5, $f4
    ctx->pc = 0x2d33f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x2d33f8: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2d33f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d33fc: 0x46000941  sub.s       $f5, $f1, $f0
    ctx->pc = 0x2d33fcu;
    ctx->f[5] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d3400: 0xc7a400d4  lwc1        $f4, 0xD4($sp)
    ctx->pc = 0x2d3400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d3404: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2d3404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2d3408: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2d3408u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2d340c: 0xc7a200a0  lwc1        $f2, 0xA0($sp)
    ctx->pc = 0x2d340cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d3410: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x2d3410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3414: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2d3414u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x2d3418: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x2d3418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d341c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2d341cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d3420: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x2d3420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3424: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2d3424u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d3428: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d3428u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d342c: 0x0  nop
    ctx->pc = 0x2d342cu;
    // NOP
    // 0x2d3430: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2d3430u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2d3434: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x2d3434u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2d3438: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d3438u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d343c: 0x0  nop
    ctx->pc = 0x2d343cu;
    // NOP
    // 0x2d3440: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2d3440u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2d3444: 0x4605205c  madd.s      $f1, $f4, $f5
    ctx->pc = 0x2d3444u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[5]));
    // 0x2d3448: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d3448u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d344c: 0x0  nop
    ctx->pc = 0x2d344cu;
    // NOP
    // 0x2d3450: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2d3450u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2d3454: 0x4607305c  madd.s      $f1, $f6, $f7
    ctx->pc = 0x2d3454u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[6], ctx->f[7]));
    // 0x2d3458: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2d3458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2d345c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d345cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d3460: 0x0  nop
    ctx->pc = 0x2d3460u;
    // NOP
    // 0x2d3464: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d3464u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d3468: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2d3468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2d346c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2d346cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2d3470: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2d3470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2d3474: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x2d3474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2d3478: 0xc7a40098  lwc1        $f4, 0x98($sp)
    ctx->pc = 0x2d3478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d347c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2d347cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2d3480: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2d3480u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2d3484: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x2d3484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d3488: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x2d3488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d348c: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2d348cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x2d3490: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d3490u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d3494: 0x0  nop
    ctx->pc = 0x2d3494u;
    // NOP
    // 0x2d3498: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2d3498u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2d349c: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x2d349cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2d34a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d34a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d34a4: 0x0  nop
    ctx->pc = 0x2d34a4u;
    // NOP
    // 0x2d34a8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2d34a8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2d34ac: 0x4604285d  msub.s      $f1, $f5, $f4
    ctx->pc = 0x2d34acu;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x2d34b0: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x2d34b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d34b4: 0x460101c0  add.s       $f7, $f0, $f1
    ctx->pc = 0x2d34b4u;
    ctx->f[7] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d34b8: 0xc7a600d0  lwc1        $f6, 0xD0($sp)
    ctx->pc = 0x2d34b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2d34bc: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x2d34bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x2d34c0: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x2d34c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2d34c4: 0xc7a40098  lwc1        $f4, 0x98($sp)
    ctx->pc = 0x2d34c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d34c8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2d34c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2d34cc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2d34ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2d34d0: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x2d34d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d34d4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2d34d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2d34d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d34d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d34dc: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x2d34dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d34e0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2d34e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d34e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d34e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d34e8: 0x0  nop
    ctx->pc = 0x2d34e8u;
    // NOP
    // 0x2d34ec: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2d34ecu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2d34f0: 0x4602185d  msub.s      $f1, $f3, $f2
    ctx->pc = 0x2d34f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2d34f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d34f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d34f8: 0x0  nop
    ctx->pc = 0x2d34f8u;
    // NOP
    // 0x2d34fc: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2d34fcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2d3500: 0x4604285c  madd.s      $f1, $f5, $f4
    ctx->pc = 0x2d3500u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x2d3504: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x2d3504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3508: 0x46000941  sub.s       $f5, $f1, $f0
    ctx->pc = 0x2d3508u;
    ctx->f[5] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d350c: 0xc7a400d4  lwc1        $f4, 0xD4($sp)
    ctx->pc = 0x2d350cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d3510: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2d3510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2d3514: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2d3514u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2d3518: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x2d3518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d351c: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x2d351cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3520: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2d3520u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x2d3524: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2d3524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3528: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2d3528u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d352c: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x2d352cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3530: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2d3530u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d3534: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d3534u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d3538: 0x0  nop
    ctx->pc = 0x2d3538u;
    // NOP
    // 0x2d353c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2d353cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2d3540: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x2d3540u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2d3544: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d3544u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d3548: 0x0  nop
    ctx->pc = 0x2d3548u;
    // NOP
    // 0x2d354c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2d354cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2d3550: 0x4605205c  madd.s      $f1, $f4, $f5
    ctx->pc = 0x2d3550u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[5]));
    // 0x2d3554: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d3554u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d3558: 0x0  nop
    ctx->pc = 0x2d3558u;
    // NOP
    // 0x2d355c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2d355cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2d3560: 0x4607305c  madd.s      $f1, $f6, $f7
    ctx->pc = 0x2d3560u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[6], ctx->f[7]));
    // 0x2d3564: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2d3564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2d3568: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d3568u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d356c: 0x0  nop
    ctx->pc = 0x2d356cu;
    // NOP
    // 0x2d3570: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d3570u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d3574: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2d3574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2d3578: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x2d3578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2d357c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d357cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d3580: 0x0  nop
    ctx->pc = 0x2d3580u;
    // NOP
    // 0x2d3584: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2d3584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2d3588: 0xc090864  jal         func_242190
    ctx->pc = 0x2D3588u;
    SET_GPR_U32(ctx, 31, 0x2D3590u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x2D3588u, 0x2D3590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3590u;
label_2d3590:
    // 0x2d3590: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d3590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3594: 0x27a50068  addiu       $a1, $sp, 0x68
    ctx->pc = 0x2d3594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x2d3598: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d3598u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d359c: 0xc09088c  jal         func_242230
    ctx->pc = 0x2D359Cu;
    SET_GPR_U32(ctx, 31, 0x2D35A4u);
    ctx->pc = 0x242230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242230u, 0x2D359Cu, 0x2D35A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D35A4u;
label_2d35a4:
    // 0x2d35a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d35a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d35a8: 0x10110005  beq         $zero, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D35A8u;
    {
        const bool branch_taken_0x2d35a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 17));
        if (branch_taken_0x2d35a8) {
            ctx->pc = 0x2D35C0u;
            goto label_2d35c0;
        }
    }
    ctx->pc = 0x2D35B0u;
    // 0x2d35b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d35b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d35b4: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2d35b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2d35b8: 0xc09381c  jal         func_24E070
    ctx->pc = 0x2D35B8u;
    SET_GPR_U32(ctx, 31, 0x2D35C0u);
    ctx->pc = 0x24E070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E070u, 0x2D35B8u, 0x2D35C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D35C0u;
label_2d35c0:
    // 0x2d35c0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2d35c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2d35c4: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x2d35c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2d35c8: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2d35c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d35cc: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x2d35ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d35d0: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2d35d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d35d4: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x2d35d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2d35d8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2d35d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2d35dc: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2d35dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2d35e0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2d35e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d35e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d35e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d35e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d35e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d35ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d35ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d35f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d35f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d35f4: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x2d35f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2d35f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D35F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D35F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3600u;
}
