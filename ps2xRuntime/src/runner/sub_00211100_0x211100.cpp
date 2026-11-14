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

// Function: sub_00211100
// Address: 0x211100 - 0x211340
void sub_00211100_0x211100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211100_0x211100");
#endif

    switch (ctx->pc) {
        case 0x211138u: goto label_211138;
        case 0x2111a0u: goto label_2111a0;
        case 0x2111b4u: goto label_2111b4;
        case 0x2111c0u: goto label_2111c0;
        case 0x2111dcu: goto label_2111dc;
        case 0x2111f0u: goto label_2111f0;
        case 0x211208u: goto label_211208;
        case 0x211214u: goto label_211214;
        case 0x211228u: goto label_211228;
        case 0x211234u: goto label_211234;
        case 0x211250u: goto label_211250;
        case 0x211264u: goto label_211264;
        case 0x2112bcu: goto label_2112bc;
        case 0x2112d0u: goto label_2112d0;
        case 0x2112dcu: goto label_2112dc;
        case 0x2112f8u: goto label_2112f8;
        case 0x211310u: goto label_211310;
        default: break;
    }

    ctx->pc = 0x211100u;

    // 0x211100: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x211100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x211104: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x211104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x211108: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x211108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21110c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21110cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x211110: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x211110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x211114: 0xe7ac0050  swc1        $f12, 0x50($sp)
    ctx->pc = 0x211114u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x211118: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x211118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21111c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x21111cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x211120: 0x1060007f  beqz        $v1, . + 4 + (0x7F << 2)
    ctx->pc = 0x211120u;
    {
        const bool branch_taken_0x211120 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x211120) {
            ctx->pc = 0x211320u;
            goto label_211320;
        }
    }
    ctx->pc = 0x211128u;
    // 0x211128: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x211128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21112c: 0x24440084  addiu       $a0, $v0, 0x84
    ctx->pc = 0x21112cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x211130: 0xc060260  jal         func_180980
    ctx->pc = 0x211130u;
    SET_GPR_U32(ctx, 31, 0x211138u);
    ctx->pc = 0x180980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180980u, 0x211130u, 0x211138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211138u;
label_211138:
    // 0x211138: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x211138u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21113c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x21113cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x211140: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x211140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211144: 0xc4600070  lwc1        $f0, 0x70($v1)
    ctx->pc = 0x211144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211148: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x211148u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21114c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x21114cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x211150: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x211150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x211154: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x211154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211158: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x211158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21115c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x21115cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x211160: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x211160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x211164: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x211164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x211168: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x211168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21116c: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x21116cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211170: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x211170u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x211174: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x211174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x211178: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x211178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21117c: 0xc461006c  lwc1        $f1, 0x6C($v1)
    ctx->pc = 0x21117cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211180: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x211180u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211184: 0x0  nop
    ctx->pc = 0x211184u;
    // NOP
    // 0x211188: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x211188u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21118c: 0x45000041  bc1f        . + 4 + (0x41 << 2)
    ctx->pc = 0x21118Cu;
    {
        const bool branch_taken_0x21118c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21118c) {
            ctx->pc = 0x211294u;
            goto label_211294;
        }
    }
    ctx->pc = 0x211194u;
    // 0x211194: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x211194u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211198: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x211198u;
    {
        const bool branch_taken_0x211198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x211198) {
            ctx->pc = 0x2111F4u;
            goto label_2111f4;
        }
    }
    ctx->pc = 0x2111A0u;
label_2111a0:
    // 0x2111a0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2111a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2111a4: 0x24440084  addiu       $a0, $v0, 0x84
    ctx->pc = 0x2111a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x2111a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2111a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2111ac: 0xc084300  jal         func_210C00
    ctx->pc = 0x2111ACu;
    SET_GPR_U32(ctx, 31, 0x2111B4u);
    ctx->pc = 0x210C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210C00u, 0x2111ACu, 0x2111B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2111B4u;
label_2111b4:
    // 0x2111b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2111b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2111b8: 0xc084734  jal         func_211CD0
    ctx->pc = 0x2111B8u;
    SET_GPR_U32(ctx, 31, 0x2111C0u);
    ctx->pc = 0x211CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211CD0u, 0x2111B8u, 0x2111C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2111C0u;
label_2111c0:
    // 0x2111c0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2111C0u;
    {
        const bool branch_taken_0x2111c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2111c0) {
            ctx->pc = 0x2111F0u;
            goto label_2111f0;
        }
    }
    ctx->pc = 0x2111C8u;
    // 0x2111c8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2111c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2111cc: 0x24440084  addiu       $a0, $v0, 0x84
    ctx->pc = 0x2111ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x2111d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2111d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2111d4: 0xc084300  jal         func_210C00
    ctx->pc = 0x2111D4u;
    SET_GPR_U32(ctx, 31, 0x2111DCu);
    ctx->pc = 0x210C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210C00u, 0x2111D4u, 0x2111DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2111DCu;
label_2111dc:
    // 0x2111dc: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2111dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2111e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2111e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2111e4: 0x2465000c  addiu       $a1, $v1, 0xC
    ctx->pc = 0x2111e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x2111e8: 0xc0845b4  jal         func_2116D0
    ctx->pc = 0x2111E8u;
    SET_GPR_U32(ctx, 31, 0x2111F0u);
    ctx->pc = 0x2116D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2116D0u, 0x2111E8u, 0x2111F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2111F0u;
label_2111f0:
    // 0x2111f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2111f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2111f4:
    // 0x2111f4: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x2111f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2111f8: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2111F8u;
    {
        const bool branch_taken_0x2111f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2111f8) {
            ctx->pc = 0x2111A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2111a0;
        }
    }
    ctx->pc = 0x211200u;
    // 0x211200: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x211200u;
    {
        const bool branch_taken_0x211200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x211200) {
            ctx->pc = 0x2112B0u;
            goto label_2112b0;
        }
    }
    ctx->pc = 0x211208u;
label_211208:
    // 0x211208: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x211208u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21120c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x21120Cu;
    {
        const bool branch_taken_0x21120c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21120c) {
            ctx->pc = 0x211270u;
            goto label_211270;
        }
    }
    ctx->pc = 0x211214u;
label_211214:
    // 0x211214: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x211214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x211218: 0x24440084  addiu       $a0, $v0, 0x84
    ctx->pc = 0x211218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x21121c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21121cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211220: 0xc084300  jal         func_210C00
    ctx->pc = 0x211220u;
    SET_GPR_U32(ctx, 31, 0x211228u);
    ctx->pc = 0x210C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210C00u, 0x211220u, 0x211228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211228u;
label_211228:
    // 0x211228: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21122c: 0xc084734  jal         func_211CD0
    ctx->pc = 0x21122Cu;
    SET_GPR_U32(ctx, 31, 0x211234u);
    ctx->pc = 0x211CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211CD0u, 0x21122Cu, 0x211234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211234u;
label_211234:
    // 0x211234: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x211234u;
    {
        const bool branch_taken_0x211234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x211234) {
            ctx->pc = 0x21126Cu;
            goto label_21126c;
        }
    }
    ctx->pc = 0x21123Cu;
    // 0x21123c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x21123cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x211240: 0x24440084  addiu       $a0, $v0, 0x84
    ctx->pc = 0x211240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x211244: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x211244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211248: 0xc084300  jal         func_210C00
    ctx->pc = 0x211248u;
    SET_GPR_U32(ctx, 31, 0x211250u);
    ctx->pc = 0x210C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210C00u, 0x211248u, 0x211250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211250u;
label_211250:
    // 0x211250: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x211250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x211254: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211258: 0x2465000c  addiu       $a1, $v1, 0xC
    ctx->pc = 0x211258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x21125c: 0xc0845b4  jal         func_2116D0
    ctx->pc = 0x21125Cu;
    SET_GPR_U32(ctx, 31, 0x211264u);
    ctx->pc = 0x2116D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2116D0u, 0x21125Cu, 0x211264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211264u;
label_211264:
    // 0x211264: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x211264u;
    {
        const bool branch_taken_0x211264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x211264) {
            ctx->pc = 0x21127Cu;
            goto label_21127c;
        }
    }
    ctx->pc = 0x21126Cu;
label_21126c:
    // 0x21126c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21126cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_211270:
    // 0x211270: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x211270u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x211274: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x211274u;
    {
        const bool branch_taken_0x211274 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x211274) {
            ctx->pc = 0x211214u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_211214;
        }
    }
    ctx->pc = 0x21127Cu;
label_21127c:
    // 0x21127c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x21127cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x211280: 0xc461006c  lwc1        $f1, 0x6C($v1)
    ctx->pc = 0x211280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211284: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x211284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x211288: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x211288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21128c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x21128cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x211290: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x211290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_211294:
    // 0x211294: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x211294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x211298: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x211298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21129c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x21129cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2112a0: 0xc460006c  lwc1        $f0, 0x6C($v1)
    ctx->pc = 0x2112a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2112a4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2112a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2112a8: 0x4500ffd7  bc1f        . + 4 + (-0x29 << 2)
    ctx->pc = 0x2112A8u;
    {
        const bool branch_taken_0x2112a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2112a8) {
            ctx->pc = 0x211208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_211208;
        }
    }
    ctx->pc = 0x2112B0u;
label_2112b0:
    // 0x2112b0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2112b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2112b4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2112B4u;
    {
        const bool branch_taken_0x2112b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2112b4) {
            ctx->pc = 0x211314u;
            goto label_211314;
        }
    }
    ctx->pc = 0x2112BCu;
label_2112bc:
    // 0x2112bc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2112bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2112c0: 0x24440084  addiu       $a0, $v0, 0x84
    ctx->pc = 0x2112c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x2112c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2112c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2112c8: 0xc084300  jal         func_210C00
    ctx->pc = 0x2112C8u;
    SET_GPR_U32(ctx, 31, 0x2112D0u);
    ctx->pc = 0x210C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210C00u, 0x2112C8u, 0x2112D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2112D0u;
label_2112d0:
    // 0x2112d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2112d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2112d4: 0xc084734  jal         func_211CD0
    ctx->pc = 0x2112D4u;
    SET_GPR_U32(ctx, 31, 0x2112DCu);
    ctx->pc = 0x211CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211CD0u, 0x2112D4u, 0x2112DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2112DCu;
label_2112dc:
    // 0x2112dc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2112DCu;
    {
        const bool branch_taken_0x2112dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2112dc) {
            ctx->pc = 0x211310u;
            goto label_211310;
        }
    }
    ctx->pc = 0x2112E4u;
    // 0x2112e4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2112e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2112e8: 0x24440084  addiu       $a0, $v0, 0x84
    ctx->pc = 0x2112e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x2112ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2112ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2112f0: 0xc084300  jal         func_210C00
    ctx->pc = 0x2112F0u;
    SET_GPR_U32(ctx, 31, 0x2112F8u);
    ctx->pc = 0x210C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210C00u, 0x2112F0u, 0x2112F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2112F8u;
label_2112f8:
    // 0x2112f8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2112f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2112fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2112fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211300: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x211300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x211304: 0x2465000c  addiu       $a1, $v1, 0xC
    ctx->pc = 0x211304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x211308: 0xc08473c  jal         func_211CF0
    ctx->pc = 0x211308u;
    SET_GPR_U32(ctx, 31, 0x211310u);
    ctx->pc = 0x211CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211CF0u, 0x211308u, 0x211310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211310u;
label_211310:
    // 0x211310: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x211310u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_211314:
    // 0x211314: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x211314u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x211318: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x211318u;
    {
        const bool branch_taken_0x211318 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x211318) {
            ctx->pc = 0x2112BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2112bc;
        }
    }
    ctx->pc = 0x211320u;
label_211320:
    // 0x211320: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x211320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x211324: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x211324u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211328: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x211328u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21132c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x21132cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x211330: 0x3e00008  jr          $ra
    ctx->pc = 0x211330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211338u;
    // 0x211338: 0x0  nop
    ctx->pc = 0x211338u;
    // NOP
    // 0x21133c: 0x0  nop
    ctx->pc = 0x21133cu;
    // NOP
    ctx->pc = 0x211340u;
}
