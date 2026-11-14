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

// Function: sub_002310D0
// Address: 0x2310d0 - 0x231270
void sub_002310D0_0x2310d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002310D0_0x2310d0");
#endif

    switch (ctx->pc) {
        case 0x2310f4u: goto label_2310f4;
        case 0x231148u: goto label_231148;
        case 0x231170u: goto label_231170;
        case 0x23118cu: goto label_23118c;
        case 0x2311acu: goto label_2311ac;
        case 0x2311bcu: goto label_2311bc;
        case 0x2311dcu: goto label_2311dc;
        case 0x231204u: goto label_231204;
        case 0x231220u: goto label_231220;
        case 0x231240u: goto label_231240;
        case 0x231250u: goto label_231250;
        default: break;
    }

    ctx->pc = 0x2310d0u;

    // 0x2310d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2310d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2310d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2310d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2310d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2310d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2310dc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2310dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2310e0: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x2310e0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2310e4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2310e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2310e8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2310e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2310ec: 0xc08c200  jal         func_230800
    ctx->pc = 0x2310ECu;
    SET_GPR_U32(ctx, 31, 0x2310F4u);
    ctx->pc = 0x230800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230800u, 0x2310ECu, 0x2310F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2310F4u;
label_2310f4:
    // 0x2310f4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2310F4u;
    {
        const bool branch_taken_0x2310f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2310f4) {
            ctx->pc = 0x231108u;
            goto label_231108;
        }
    }
    ctx->pc = 0x2310FCu;
    // 0x2310fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2310fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x231100: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x231100u;
    {
        const bool branch_taken_0x231100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231100) {
            ctx->pc = 0x23125Cu;
            goto label_23125c;
        }
    }
    ctx->pc = 0x231108u;
label_231108:
    // 0x231108: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x231108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23110c: 0x3043f000  andi        $v1, $v0, 0xF000
    ctx->pc = 0x23110cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x231110: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x231110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x231114: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x231114u;
    {
        const bool branch_taken_0x231114 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x231114) {
            ctx->pc = 0x2311C4u;
            goto label_2311c4;
        }
    }
    ctx->pc = 0x23111Cu;
    // 0x23111c: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x23111cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x231120: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x231120u;
    {
        const bool branch_taken_0x231120 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x231120) {
            ctx->pc = 0x231130u;
            goto label_231130;
        }
    }
    ctx->pc = 0x231128u;
    // 0x231128: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x231128u;
    {
        const bool branch_taken_0x231128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231128) {
            ctx->pc = 0x231258u;
            goto label_231258;
        }
    }
    ctx->pc = 0x231130u;
label_231130:
    // 0x231130: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x231130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231134: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x231134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231138: 0x2445f000  addiu       $a1, $v0, -0x1000
    ctx->pc = 0x231138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
    // 0x23113c: 0x24640028  addiu       $a0, $v1, 0x28
    ctx->pc = 0x23113cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x231140: 0xc08c248  jal         func_230920
    ctx->pc = 0x231140u;
    SET_GPR_U32(ctx, 31, 0x231148u);
    ctx->pc = 0x230920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230920u, 0x231140u, 0x231148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231148u;
label_231148:
    // 0x231148: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x231148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x23114c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23114cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x231150: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x231150u;
    {
        const bool branch_taken_0x231150 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x231150) {
            ctx->pc = 0x231194u;
            goto label_231194;
        }
    }
    ctx->pc = 0x231158u;
    // 0x231158: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x231158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23115c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x23115cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231160: 0x2445f000  addiu       $a1, $v0, -0x1000
    ctx->pc = 0x231160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
    // 0x231164: 0x24640028  addiu       $a0, $v1, 0x28
    ctx->pc = 0x231164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x231168: 0xc08c248  jal         func_230920
    ctx->pc = 0x231168u;
    SET_GPR_U32(ctx, 31, 0x231170u);
    ctx->pc = 0x230920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230920u, 0x231168u, 0x231170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231170u;
label_231170:
    // 0x231170: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x231170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x231174: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x231174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x231178: 0xc7ad0030  lwc1        $f13, 0x30($sp)
    ctx->pc = 0x231178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x23117c: 0xc7ae0030  lwc1        $f14, 0x30($sp)
    ctx->pc = 0x23117cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x231180: 0xc7af0030  lwc1        $f15, 0x30($sp)
    ctx->pc = 0x231180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x231184: 0xc11cc74  jal         func_4731D0
    ctx->pc = 0x231184u;
    SET_GPR_U32(ctx, 31, 0x23118Cu);
    ctx->pc = 0x4731D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4731D0u, 0x231184u, 0x23118Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23118Cu;
label_23118c:
    // 0x23118c: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x23118Cu;
    {
        const bool branch_taken_0x23118c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23118c) {
            ctx->pc = 0x23125Cu;
            goto label_23125c;
        }
    }
    ctx->pc = 0x231194u;
label_231194:
    // 0x231194: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x231194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231198: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x231198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23119c: 0x2445f000  addiu       $a1, $v0, -0x1000
    ctx->pc = 0x23119cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
    // 0x2311a0: 0x24640028  addiu       $a0, $v1, 0x28
    ctx->pc = 0x2311a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x2311a4: 0xc08c248  jal         func_230920
    ctx->pc = 0x2311A4u;
    SET_GPR_U32(ctx, 31, 0x2311ACu);
    ctx->pc = 0x230920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230920u, 0x2311A4u, 0x2311ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2311ACu;
label_2311ac:
    // 0x2311ac: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2311acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2311b0: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x2311b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2311b4: 0xc11cbf8  jal         func_472FE0
    ctx->pc = 0x2311B4u;
    SET_GPR_U32(ctx, 31, 0x2311BCu);
    ctx->pc = 0x472FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x472FE0u, 0x2311B4u, 0x2311BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2311BCu;
label_2311bc:
    // 0x2311bc: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2311BCu;
    {
        const bool branch_taken_0x2311bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2311bc) {
            ctx->pc = 0x23125Cu;
            goto label_23125c;
        }
    }
    ctx->pc = 0x2311C4u;
label_2311c4:
    // 0x2311c4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2311c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2311c8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2311c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2311cc: 0x2445e000  addiu       $a1, $v0, -0x2000
    ctx->pc = 0x2311ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959104));
    // 0x2311d0: 0x24640034  addiu       $a0, $v1, 0x34
    ctx->pc = 0x2311d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
    // 0x2311d4: 0xc08c1f0  jal         func_2307C0
    ctx->pc = 0x2311D4u;
    SET_GPR_U32(ctx, 31, 0x2311DCu);
    ctx->pc = 0x2307C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2307C0u, 0x2311D4u, 0x2311DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2311DCu;
label_2311dc:
    // 0x2311dc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2311dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2311e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2311e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2311e4: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2311E4u;
    {
        const bool branch_taken_0x2311e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2311e4) {
            ctx->pc = 0x231228u;
            goto label_231228;
        }
    }
    ctx->pc = 0x2311ECu;
    // 0x2311ec: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2311ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2311f0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2311f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2311f4: 0x2445e000  addiu       $a1, $v0, -0x2000
    ctx->pc = 0x2311f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959104));
    // 0x2311f8: 0x24640034  addiu       $a0, $v1, 0x34
    ctx->pc = 0x2311f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
    // 0x2311fc: 0xc08c1f0  jal         func_2307C0
    ctx->pc = 0x2311FCu;
    SET_GPR_U32(ctx, 31, 0x231204u);
    ctx->pc = 0x2307C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2307C0u, 0x2311FCu, 0x231204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231204u;
label_231204:
    // 0x231204: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x231204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x231208: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x231208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23120c: 0xc7ad0030  lwc1        $f13, 0x30($sp)
    ctx->pc = 0x23120cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x231210: 0xc7ae0030  lwc1        $f14, 0x30($sp)
    ctx->pc = 0x231210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x231214: 0xc7af0030  lwc1        $f15, 0x30($sp)
    ctx->pc = 0x231214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x231218: 0xc11cc74  jal         func_4731D0
    ctx->pc = 0x231218u;
    SET_GPR_U32(ctx, 31, 0x231220u);
    ctx->pc = 0x4731D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4731D0u, 0x231218u, 0x231220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231220u;
label_231220:
    // 0x231220: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x231220u;
    {
        const bool branch_taken_0x231220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231220) {
            ctx->pc = 0x23125Cu;
            goto label_23125c;
        }
    }
    ctx->pc = 0x231228u;
label_231228:
    // 0x231228: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x231228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23122c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x23122cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231230: 0x2445e000  addiu       $a1, $v0, -0x2000
    ctx->pc = 0x231230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959104));
    // 0x231234: 0x24640034  addiu       $a0, $v1, 0x34
    ctx->pc = 0x231234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
    // 0x231238: 0xc08c1f0  jal         func_2307C0
    ctx->pc = 0x231238u;
    SET_GPR_U32(ctx, 31, 0x231240u);
    ctx->pc = 0x2307C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2307C0u, 0x231238u, 0x231240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231240u;
label_231240:
    // 0x231240: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x231240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x231244: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x231244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x231248: 0xc11cbf8  jal         func_472FE0
    ctx->pc = 0x231248u;
    SET_GPR_U32(ctx, 31, 0x231250u);
    ctx->pc = 0x472FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x472FE0u, 0x231248u, 0x231250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231250u;
label_231250:
    // 0x231250: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x231250u;
    {
        const bool branch_taken_0x231250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231250) {
            ctx->pc = 0x23125Cu;
            goto label_23125c;
        }
    }
    ctx->pc = 0x231258u;
label_231258:
    // 0x231258: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x231258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_23125c:
    // 0x23125c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23125cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231260: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x231260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x231264: 0x3e00008  jr          $ra
    ctx->pc = 0x231264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23126Cu;
    // 0x23126c: 0x0  nop
    ctx->pc = 0x23126cu;
    // NOP
    ctx->pc = 0x231270u;
}
