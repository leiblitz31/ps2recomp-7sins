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

// Function: sub_00255D10
// Address: 0x255d10 - 0x256890
void sub_00255D10_0x255d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255D10_0x255d10");
#endif

    switch (ctx->pc) {
        case 0x255d60u: goto label_255d60;
        case 0x255d7cu: goto label_255d7c;
        case 0x255d8cu: goto label_255d8c;
        case 0x255da0u: goto label_255da0;
        case 0x255dbcu: goto label_255dbc;
        case 0x255dccu: goto label_255dcc;
        case 0x255de8u: goto label_255de8;
        case 0x255df8u: goto label_255df8;
        case 0x255e14u: goto label_255e14;
        case 0x255e28u: goto label_255e28;
        case 0x255e44u: goto label_255e44;
        case 0x255e54u: goto label_255e54;
        case 0x255e70u: goto label_255e70;
        case 0x255e80u: goto label_255e80;
        case 0x255e98u: goto label_255e98;
        case 0x255ec8u: goto label_255ec8;
        case 0x255ed8u: goto label_255ed8;
        case 0x255ef4u: goto label_255ef4;
        case 0x255f00u: goto label_255f00;
        case 0x255f18u: goto label_255f18;
        case 0x255f64u: goto label_255f64;
        case 0x255f74u: goto label_255f74;
        case 0x255f94u: goto label_255f94;
        case 0x255fa4u: goto label_255fa4;
        case 0x255fc0u: goto label_255fc0;
        case 0x255fd0u: goto label_255fd0;
        case 0x255fecu: goto label_255fec;
        case 0x255ffcu: goto label_255ffc;
        case 0x256018u: goto label_256018;
        case 0x256028u: goto label_256028;
        case 0x256044u: goto label_256044;
        case 0x256054u: goto label_256054;
        case 0x256070u: goto label_256070;
        case 0x256080u: goto label_256080;
        case 0x25609cu: goto label_25609c;
        case 0x2560acu: goto label_2560ac;
        case 0x2560c8u: goto label_2560c8;
        case 0x2560d8u: goto label_2560d8;
        case 0x2560f4u: goto label_2560f4;
        case 0x256104u: goto label_256104;
        case 0x256120u: goto label_256120;
        case 0x256130u: goto label_256130;
        case 0x25614cu: goto label_25614c;
        case 0x25615cu: goto label_25615c;
        case 0x256178u: goto label_256178;
        case 0x256188u: goto label_256188;
        case 0x2561a4u: goto label_2561a4;
        case 0x2561b4u: goto label_2561b4;
        case 0x2561d0u: goto label_2561d0;
        case 0x2561e0u: goto label_2561e0;
        case 0x2561fcu: goto label_2561fc;
        case 0x25620cu: goto label_25620c;
        case 0x256228u: goto label_256228;
        case 0x256238u: goto label_256238;
        case 0x256254u: goto label_256254;
        case 0x256264u: goto label_256264;
        case 0x256280u: goto label_256280;
        case 0x256290u: goto label_256290;
        case 0x2562acu: goto label_2562ac;
        case 0x2562bcu: goto label_2562bc;
        case 0x2562d8u: goto label_2562d8;
        case 0x2562e8u: goto label_2562e8;
        case 0x256304u: goto label_256304;
        case 0x256314u: goto label_256314;
        case 0x256330u: goto label_256330;
        case 0x256340u: goto label_256340;
        case 0x25635cu: goto label_25635c;
        case 0x25636cu: goto label_25636c;
        case 0x256388u: goto label_256388;
        case 0x256398u: goto label_256398;
        case 0x2563b4u: goto label_2563b4;
        case 0x2563c4u: goto label_2563c4;
        case 0x2563e0u: goto label_2563e0;
        case 0x2563f0u: goto label_2563f0;
        case 0x25640cu: goto label_25640c;
        case 0x25641cu: goto label_25641c;
        case 0x256434u: goto label_256434;
        case 0x256444u: goto label_256444;
        case 0x25645cu: goto label_25645c;
        case 0x25646cu: goto label_25646c;
        case 0x256484u: goto label_256484;
        case 0x256494u: goto label_256494;
        case 0x2564acu: goto label_2564ac;
        case 0x2564bcu: goto label_2564bc;
        case 0x2564d4u: goto label_2564d4;
        case 0x2564e4u: goto label_2564e4;
        case 0x2564fcu: goto label_2564fc;
        case 0x25650cu: goto label_25650c;
        case 0x256524u: goto label_256524;
        case 0x256534u: goto label_256534;
        case 0x25654cu: goto label_25654c;
        case 0x25655cu: goto label_25655c;
        case 0x256574u: goto label_256574;
        case 0x256584u: goto label_256584;
        case 0x25659cu: goto label_25659c;
        case 0x2565acu: goto label_2565ac;
        case 0x2565c8u: goto label_2565c8;
        case 0x2565e4u: goto label_2565e4;
        case 0x256600u: goto label_256600;
        case 0x25660cu: goto label_25660c;
        case 0x256630u: goto label_256630;
        case 0x256654u: goto label_256654;
        case 0x25666cu: goto label_25666c;
        case 0x25667cu: goto label_25667c;
        case 0x25668cu: goto label_25668c;
        case 0x256698u: goto label_256698;
        case 0x2566b4u: goto label_2566b4;
        case 0x2566c8u: goto label_2566c8;
        case 0x2566e0u: goto label_2566e0;
        case 0x2566f4u: goto label_2566f4;
        case 0x25670cu: goto label_25670c;
        case 0x256720u: goto label_256720;
        case 0x256730u: goto label_256730;
        case 0x256788u: goto label_256788;
        case 0x2567a4u: goto label_2567a4;
        case 0x2567b0u: goto label_2567b0;
        case 0x2567c8u: goto label_2567c8;
        case 0x2567d4u: goto label_2567d4;
        case 0x2567ecu: goto label_2567ec;
        case 0x2567fcu: goto label_2567fc;
        case 0x256814u: goto label_256814;
        case 0x256838u: goto label_256838;
        case 0x256850u: goto label_256850;
        default: break;
    }

    ctx->pc = 0x255d10u;

    // 0x255d10: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x255d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x255d14: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x255d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x255d18: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x255d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x255d1c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x255d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x255d20: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x255d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x255d24: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x255d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x255d28: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x255d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x255d2c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x255d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x255d30: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x255d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x255d34: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x255d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x255d38: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x255d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x255d3c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x255d3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x255d40: 0xafa400f0  sw          $a0, 0xF0($sp)
    ctx->pc = 0x255d40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 4));
    // 0x255d44: 0xafa50100  sw          $a1, 0x100($sp)
    ctx->pc = 0x255d44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 5));
    // 0x255d48: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x255d48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x255d4c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x255d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255d50: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x255d50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x255d54: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x255d54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255d58: 0xc085538  jal         func_2154E0
    ctx->pc = 0x255D58u;
    SET_GPR_U32(ctx, 31, 0x255D60u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x255D58u, 0x255D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255D60u;
label_255d60:
    // 0x255d60: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x255d60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255d64: 0x101202bb  beq         $zero, $s2, . + 4 + (0x2BB << 2)
    ctx->pc = 0x255D64u;
    {
        const bool branch_taken_0x255d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 18));
        if (branch_taken_0x255d64) {
            ctx->pc = 0x256854u;
            goto label_256854;
        }
    }
    ctx->pc = 0x255D6Cu;
    // 0x255d6c: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x255d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x255d70: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x255d70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x255d74: 0xc095a34  jal         func_2568D0
    ctx->pc = 0x255D74u;
    SET_GPR_U32(ctx, 31, 0x255D7Cu);
    ctx->pc = 0x2568D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2568D0u, 0x255D74u, 0x255D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255D7Cu;
label_255d7c:
    // 0x255d7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x255d7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255d80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x255d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255d84: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x255D84u;
    SET_GPR_U32(ctx, 31, 0x255D8Cu);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x255D84u, 0x255D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255D8Cu;
label_255d8c:
    // 0x255d8c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x255d8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255d90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x255d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255d94: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x255d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x255d98: 0xc040a90  jal         func_102A40
    ctx->pc = 0x255D98u;
    SET_GPR_U32(ctx, 31, 0x255DA0u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x255D98u, 0x255DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255DA0u;
label_255da0:
    // 0x255da0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x255da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x255da4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x255da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255da8: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x255da8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x255dac: 0x24a5c0a8  addiu       $a1, $a1, -0x3F58
    ctx->pc = 0x255dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951080));
    // 0x255db0: 0xc44c0008  lwc1        $f12, 0x8($v0)
    ctx->pc = 0x255db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x255db4: 0xc051414  jal         func_145050
    ctx->pc = 0x255DB4u;
    SET_GPR_U32(ctx, 31, 0x255DBCu);
    ctx->pc = 0x145050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145050u, 0x255DB4u, 0x255DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255DBCu;
label_255dbc:
    // 0x255dbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x255dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255dc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x255dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255dc4: 0xc040a90  jal         func_102A40
    ctx->pc = 0x255DC4u;
    SET_GPR_U32(ctx, 31, 0x255DCCu);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x255DC4u, 0x255DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255DCCu;
label_255dcc:
    // 0x255dcc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x255dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x255dd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x255dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255dd4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x255dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x255dd8: 0x24a5c0b8  addiu       $a1, $a1, -0x3F48
    ctx->pc = 0x255dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951096));
    // 0x255ddc: 0xc44c0008  lwc1        $f12, 0x8($v0)
    ctx->pc = 0x255ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x255de0: 0xc051414  jal         func_145050
    ctx->pc = 0x255DE0u;
    SET_GPR_U32(ctx, 31, 0x255DE8u);
    ctx->pc = 0x145050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145050u, 0x255DE0u, 0x255DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255DE8u;
label_255de8:
    // 0x255de8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x255de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255dec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x255decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x255df0: 0xc040a90  jal         func_102A40
    ctx->pc = 0x255DF0u;
    SET_GPR_U32(ctx, 31, 0x255DF8u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x255DF0u, 0x255DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255DF8u;
label_255df8:
    // 0x255df8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x255df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x255dfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x255dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255e00: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x255e00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x255e04: 0x24a5c0c8  addiu       $a1, $a1, -0x3F38
    ctx->pc = 0x255e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951112));
    // 0x255e08: 0xc44c0008  lwc1        $f12, 0x8($v0)
    ctx->pc = 0x255e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x255e0c: 0xc051414  jal         func_145050
    ctx->pc = 0x255E0Cu;
    SET_GPR_U32(ctx, 31, 0x255E14u);
    ctx->pc = 0x145050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145050u, 0x255E0Cu, 0x255E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255E14u;
label_255e14:
    // 0x255e14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x255e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255e18: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x255e18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x255e1c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x255e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255e20: 0xc040a90  jal         func_102A40
    ctx->pc = 0x255E20u;
    SET_GPR_U32(ctx, 31, 0x255E28u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x255E20u, 0x255E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255E28u;
label_255e28:
    // 0x255e28: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x255e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x255e2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x255e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255e30: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x255e30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x255e34: 0x24a5c0e0  addiu       $a1, $a1, -0x3F20
    ctx->pc = 0x255e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951136));
    // 0x255e38: 0xc44c0008  lwc1        $f12, 0x8($v0)
    ctx->pc = 0x255e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x255e3c: 0xc051414  jal         func_145050
    ctx->pc = 0x255E3Cu;
    SET_GPR_U32(ctx, 31, 0x255E44u);
    ctx->pc = 0x145050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145050u, 0x255E3Cu, 0x255E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255E44u;
label_255e44:
    // 0x255e44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x255e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255e48: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x255e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x255e4c: 0xc040a90  jal         func_102A40
    ctx->pc = 0x255E4Cu;
    SET_GPR_U32(ctx, 31, 0x255E54u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x255E4Cu, 0x255E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255E54u;
label_255e54:
    // 0x255e54: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x255e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x255e58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x255e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255e5c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x255e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x255e60: 0x24a5c0f8  addiu       $a1, $a1, -0x3F08
    ctx->pc = 0x255e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951160));
    // 0x255e64: 0xc44c0008  lwc1        $f12, 0x8($v0)
    ctx->pc = 0x255e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x255e68: 0xc051414  jal         func_145050
    ctx->pc = 0x255E68u;
    SET_GPR_U32(ctx, 31, 0x255E70u);
    ctx->pc = 0x145050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145050u, 0x255E68u, 0x255E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255E70u;
label_255e70:
    // 0x255e70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x255e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255e74: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x255e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x255e78: 0xc040a90  jal         func_102A40
    ctx->pc = 0x255E78u;
    SET_GPR_U32(ctx, 31, 0x255E80u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x255E78u, 0x255E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255E80u;
label_255e80:
    // 0x255e80: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x255e80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x255e84: 0xc4b40000  lwc1        $f20, 0x0($a1)
    ctx->pc = 0x255e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x255e88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x255e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255e8c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x255e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x255e90: 0xc040a90  jal         func_102A40
    ctx->pc = 0x255E90u;
    SET_GPR_U32(ctx, 31, 0x255E98u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x255E90u, 0x255E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255E98u;
label_255e98:
    // 0x255e98: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x255e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x255e9c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x255e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x255ea0: 0x4600a040  add.s       $f1, $f20, $f0
    ctx->pc = 0x255ea0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x255ea4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x255ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x255ea8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x255ea8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x255eac: 0x0  nop
    ctx->pc = 0x255eacu;
    // NOP
    // 0x255eb0: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x255eb0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x255eb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x255eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255eb8: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x255eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x255ebc: 0x24a5c108  addiu       $a1, $a1, -0x3EF8
    ctx->pc = 0x255ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951176));
    // 0x255ec0: 0xc051414  jal         func_145050
    ctx->pc = 0x255EC0u;
    SET_GPR_U32(ctx, 31, 0x255EC8u);
    ctx->pc = 0x145050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145050u, 0x255EC0u, 0x255EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255EC8u;
label_255ec8:
    // 0x255ec8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x255ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255ecc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x255eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x255ed0: 0xc040a90  jal         func_102A40
    ctx->pc = 0x255ED0u;
    SET_GPR_U32(ctx, 31, 0x255ED8u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x255ED0u, 0x255ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255ED8u;
label_255ed8:
    // 0x255ed8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x255ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x255edc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x255edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255ee0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x255ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x255ee4: 0x24a5c118  addiu       $a1, $a1, -0x3EE8
    ctx->pc = 0x255ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951192));
    // 0x255ee8: 0xc44c0008  lwc1        $f12, 0x8($v0)
    ctx->pc = 0x255ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x255eec: 0xc051414  jal         func_145050
    ctx->pc = 0x255EECu;
    SET_GPR_U32(ctx, 31, 0x255EF4u);
    ctx->pc = 0x145050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145050u, 0x255EECu, 0x255EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255EF4u;
label_255ef4:
    // 0x255ef4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x255ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255ef8: 0xc0984a4  jal         func_261290
    ctx->pc = 0x255EF8u;
    SET_GPR_U32(ctx, 31, 0x255F00u);
    ctx->pc = 0x261290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261290u, 0x255EF8u, 0x255F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255F00u;
label_255f00:
    // 0x255f00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x255f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255f04: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x255f04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x255f08: 0x24a5c130  addiu       $a1, $a1, -0x3ED0
    ctx->pc = 0x255f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951216));
    // 0x255f0c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x255f0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255f10: 0xc041b24  jal         func_106C90
    ctx->pc = 0x255F10u;
    SET_GPR_U32(ctx, 31, 0x255F18u);
    ctx->pc = 0x106C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C90u, 0x255F10u, 0x255F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255F18u;
label_255f18:
    // 0x255f18: 0x8e440034  lw          $a0, 0x34($s2)
    ctx->pc = 0x255f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x255f1c: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x255F1Cu;
    {
        const bool branch_taken_0x255f1c = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x255f1c) {
            ctx->pc = 0x255F38u;
            goto label_255f38;
        }
    }
    ctx->pc = 0x255F24u;
    // 0x255f24: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x255f24u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x255f28: 0x0  nop
    ctx->pc = 0x255f28u;
    // NOP
    // 0x255f2c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x255f2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x255f30: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x255F30u;
    {
        const bool branch_taken_0x255f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x255f30) {
            ctx->pc = 0x255F54u;
            goto label_255f54;
        }
    }
    ctx->pc = 0x255F38u;
label_255f38:
    // 0x255f38: 0x41042  srl         $v0, $a0, 1
    ctx->pc = 0x255f38u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x255f3c: 0x30850001  andi        $a1, $a0, 0x1
    ctx->pc = 0x255f3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x255f40: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x255f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x255f44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x255f44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x255f48: 0x0  nop
    ctx->pc = 0x255f48u;
    // NOP
    // 0x255f4c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x255f4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x255f50: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x255f50u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_255f54:
    // 0x255f54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x255f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255f58: 0x27859ed0  addiu       $a1, $gp, -0x6130
    ctx->pc = 0x255f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942416));
    // 0x255f5c: 0xc051414  jal         func_145050
    ctx->pc = 0x255F5Cu;
    SET_GPR_U32(ctx, 31, 0x255F64u);
    ctx->pc = 0x145050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145050u, 0x255F5Cu, 0x255F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255F64u;
label_255f64:
    // 0x255f64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x255f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255f68: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x255f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x255f6c: 0xc040a90  jal         func_102A40
    ctx->pc = 0x255F6Cu;
    SET_GPR_U32(ctx, 31, 0x255F74u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x255F6Cu, 0x255F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255F74u;
label_255f74:
    // 0x255f74: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x255f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x255f78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x255f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255f7c: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x255f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
    // 0x255f80: 0x24c6c150  addiu       $a2, $a2, -0x3EB0
    ctx->pc = 0x255f80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951248));
    // 0x255f84: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x255f84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255f88: 0xc44c000c  lwc1        $f12, 0xC($v0)
    ctx->pc = 0x255f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x255f8c: 0xc051414  jal         func_145050
    ctx->pc = 0x255F8Cu;
    SET_GPR_U32(ctx, 31, 0x255F94u);
    ctx->pc = 0x145050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145050u, 0x255F8Cu, 0x255F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255F94u;
label_255f94:
    // 0x255f94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x255f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255f98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x255f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255f9c: 0xc040a90  jal         func_102A40
    ctx->pc = 0x255F9Cu;
    SET_GPR_U32(ctx, 31, 0x255FA4u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x255F9Cu, 0x255FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255FA4u;
label_255fa4:
    // 0x255fa4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x255fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x255fa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x255fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255fac: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x255facu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x255fb0: 0x24a5c170  addiu       $a1, $a1, -0x3E90
    ctx->pc = 0x255fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951280));
    // 0x255fb4: 0xc44c000c  lwc1        $f12, 0xC($v0)
    ctx->pc = 0x255fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x255fb8: 0xc051414  jal         func_145050
    ctx->pc = 0x255FB8u;
    SET_GPR_U32(ctx, 31, 0x255FC0u);
    ctx->pc = 0x145050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145050u, 0x255FB8u, 0x255FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255FC0u;
label_255fc0:
    // 0x255fc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x255fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255fc4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x255fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x255fc8: 0xc040a90  jal         func_102A40
    ctx->pc = 0x255FC8u;
    SET_GPR_U32(ctx, 31, 0x255FD0u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x255FC8u, 0x255FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255FD0u;
label_255fd0:
    // 0x255fd0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x255fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x255fd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x255fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255fd8: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x255fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x255fdc: 0x24a5c190  addiu       $a1, $a1, -0x3E70
    ctx->pc = 0x255fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951312));
    // 0x255fe0: 0xc44c000c  lwc1        $f12, 0xC($v0)
    ctx->pc = 0x255fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x255fe4: 0xc051414  jal         func_145050
    ctx->pc = 0x255FE4u;
    SET_GPR_U32(ctx, 31, 0x255FECu);
    ctx->pc = 0x145050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145050u, 0x255FE4u, 0x255FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255FECu;
label_255fec:
    // 0x255fec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x255fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255ff0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x255ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x255ff4: 0xc040a90  jal         func_102A40
    ctx->pc = 0x255FF4u;
    SET_GPR_U32(ctx, 31, 0x255FFCu);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x255FF4u, 0x255FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255FFCu;
label_255ffc:
    // 0x255ffc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x255ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x256000: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x256000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256004: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x256004u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x256008: 0x24a5c1b0  addiu       $a1, $a1, -0x3E50
    ctx->pc = 0x256008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951344));
    // 0x25600c: 0xc44c000c  lwc1        $f12, 0xC($v0)
    ctx->pc = 0x25600cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x256010: 0xc051414  jal         func_145050
    ctx->pc = 0x256010u;
    SET_GPR_U32(ctx, 31, 0x256018u);
    ctx->pc = 0x145050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145050u, 0x256010u, 0x256018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256018u;
label_256018:
    // 0x256018: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x256018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25601c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x25601cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x256020: 0xc040a90  jal         func_102A40
    ctx->pc = 0x256020u;
    SET_GPR_U32(ctx, 31, 0x256028u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x256020u, 0x256028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256028u;
label_256028:
    // 0x256028: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x256028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25602c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25602cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256030: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x256030u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x256034: 0x24a5c1d0  addiu       $a1, $a1, -0x3E30
    ctx->pc = 0x256034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951376));
    // 0x256038: 0xc44c000c  lwc1        $f12, 0xC($v0)
    ctx->pc = 0x256038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25603c: 0xc051414  jal         func_145050
    ctx->pc = 0x25603Cu;
    SET_GPR_U32(ctx, 31, 0x256044u);
    ctx->pc = 0x145050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145050u, 0x25603Cu, 0x256044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256044u;
label_256044:
    // 0x256044: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x256044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256048: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x256048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x25604c: 0xc040a90  jal         func_102A40
    ctx->pc = 0x25604Cu;
    SET_GPR_U32(ctx, 31, 0x256054u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x25604Cu, 0x256054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256054u;
label_256054:
    // 0x256054: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x256054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x256058: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x256058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25605c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x25605cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x256060: 0x24a5c1f0  addiu       $a1, $a1, -0x3E10
    ctx->pc = 0x256060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951408));
    // 0x256064: 0xc44c0008  lwc1        $f12, 0x8($v0)
    ctx->pc = 0x256064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x256068: 0xc051414  jal         func_145050
    ctx->pc = 0x256068u;
    SET_GPR_U32(ctx, 31, 0x256070u);
    ctx->pc = 0x145050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145050u, 0x256068u, 0x256070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256070u;
label_256070:
    // 0x256070: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x256070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256074: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x256074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x256078: 0xc040a90  jal         func_102A40
    ctx->pc = 0x256078u;
    SET_GPR_U32(ctx, 31, 0x256080u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x256078u, 0x256080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256080u;
label_256080:
    // 0x256080: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x256080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x256084: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x256084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256088: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x256088u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x25608c: 0x24a5c200  addiu       $a1, $a1, -0x3E00
    ctx->pc = 0x25608cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951424));
    // 0x256090: 0xc44c0008  lwc1        $f12, 0x8($v0)
    ctx->pc = 0x256090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x256094: 0xc051414  jal         func_145050
    ctx->pc = 0x256094u;
    SET_GPR_U32(ctx, 31, 0x25609Cu);
    ctx->pc = 0x145050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145050u, 0x256094u, 0x25609Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25609Cu;
label_25609c:
    // 0x25609c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25609cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2560a0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x2560a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2560a4: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2560A4u;
    SET_GPR_U32(ctx, 31, 0x2560ACu);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2560A4u, 0x2560ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2560ACu;
label_2560ac:
    // 0x2560ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2560acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2560b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2560b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2560b4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2560b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2560b8: 0x24a5c210  addiu       $a1, $a1, -0x3DF0
    ctx->pc = 0x2560b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951440));
    // 0x2560bc: 0xc44c0008  lwc1        $f12, 0x8($v0)
    ctx->pc = 0x2560bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2560c0: 0xc051414  jal         func_145050
    ctx->pc = 0x2560C0u;
    SET_GPR_U32(ctx, 31, 0x2560C8u);
    ctx->pc = 0x145050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145050u, 0x2560C0u, 0x2560C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2560C8u;
label_2560c8:
    // 0x2560c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2560c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2560cc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2560ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2560d0: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2560D0u;
    SET_GPR_U32(ctx, 31, 0x2560D8u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2560D0u, 0x2560D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2560D8u;
label_2560d8:
    // 0x2560d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2560d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2560dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2560dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2560e0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2560e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2560e4: 0x24a5c220  addiu       $a1, $a1, -0x3DE0
    ctx->pc = 0x2560e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951456));
    // 0x2560e8: 0xc44c0008  lwc1        $f12, 0x8($v0)
    ctx->pc = 0x2560e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2560ec: 0xc051414  jal         func_145050
    ctx->pc = 0x2560ECu;
    SET_GPR_U32(ctx, 31, 0x2560F4u);
    ctx->pc = 0x145050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145050u, 0x2560ECu, 0x2560F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2560F4u;
label_2560f4:
    // 0x2560f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2560f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2560f8: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2560f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2560fc: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2560FCu;
    SET_GPR_U32(ctx, 31, 0x256104u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2560FCu, 0x256104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256104u;
label_256104:
    // 0x256104: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x256104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x256108: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x256108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25610c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x25610cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x256110: 0x24a5c230  addiu       $a1, $a1, -0x3DD0
    ctx->pc = 0x256110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951472));
    // 0x256114: 0xc44c0008  lwc1        $f12, 0x8($v0)
    ctx->pc = 0x256114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x256118: 0xc051414  jal         func_145050
    ctx->pc = 0x256118u;
    SET_GPR_U32(ctx, 31, 0x256120u);
    ctx->pc = 0x145050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145050u, 0x256118u, 0x256120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256120u;
label_256120:
    // 0x256120: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x256120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256124: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x256124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x256128: 0xc040a90  jal         func_102A40
    ctx->pc = 0x256128u;
    SET_GPR_U32(ctx, 31, 0x256130u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x256128u, 0x256130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256130u;
label_256130:
    // 0x256130: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x256130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x256134: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x256134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256138: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x256138u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x25613c: 0x24a5c240  addiu       $a1, $a1, -0x3DC0
    ctx->pc = 0x25613cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951488));
    // 0x256140: 0xc44c0008  lwc1        $f12, 0x8($v0)
    ctx->pc = 0x256140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x256144: 0xc051414  jal         func_145050
    ctx->pc = 0x256144u;
    SET_GPR_U32(ctx, 31, 0x25614Cu);
    ctx->pc = 0x145050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145050u, 0x256144u, 0x25614Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25614Cu;
label_25614c:
    // 0x25614c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25614cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256150: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x256150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x256154: 0xc040a90  jal         func_102A40
    ctx->pc = 0x256154u;
    SET_GPR_U32(ctx, 31, 0x25615Cu);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x256154u, 0x25615Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25615Cu;
label_25615c:
    // 0x25615c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x25615cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x256160: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x256160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256164: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x256164u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x256168: 0x24a5c250  addiu       $a1, $a1, -0x3DB0
    ctx->pc = 0x256168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951504));
    // 0x25616c: 0xc44c0008  lwc1        $f12, 0x8($v0)
    ctx->pc = 0x25616cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x256170: 0xc051414  jal         func_145050
    ctx->pc = 0x256170u;
    SET_GPR_U32(ctx, 31, 0x256178u);
    ctx->pc = 0x145050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145050u, 0x256170u, 0x256178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256178u;
label_256178:
    // 0x256178: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x256178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25617c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x25617cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x256180: 0xc040a90  jal         func_102A40
    ctx->pc = 0x256180u;
    SET_GPR_U32(ctx, 31, 0x256188u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x256180u, 0x256188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256188u;
label_256188:
    // 0x256188: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x256188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25618c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25618cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256190: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x256190u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x256194: 0x24a5c260  addiu       $a1, $a1, -0x3DA0
    ctx->pc = 0x256194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951520));
    // 0x256198: 0xc44c0008  lwc1        $f12, 0x8($v0)
    ctx->pc = 0x256198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25619c: 0xc051414  jal         func_145050
    ctx->pc = 0x25619Cu;
    SET_GPR_U32(ctx, 31, 0x2561A4u);
    ctx->pc = 0x145050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145050u, 0x25619Cu, 0x2561A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2561A4u;
label_2561a4:
    // 0x2561a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2561a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2561a8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2561a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2561ac: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2561ACu;
    SET_GPR_U32(ctx, 31, 0x2561B4u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2561ACu, 0x2561B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2561B4u;
label_2561b4:
    // 0x2561b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2561b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2561b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2561b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2561bc: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2561bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2561c0: 0x24a5c270  addiu       $a1, $a1, -0x3D90
    ctx->pc = 0x2561c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951536));
    // 0x2561c4: 0xc44c0008  lwc1        $f12, 0x8($v0)
    ctx->pc = 0x2561c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2561c8: 0xc051414  jal         func_145050
    ctx->pc = 0x2561C8u;
    SET_GPR_U32(ctx, 31, 0x2561D0u);
    ctx->pc = 0x145050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145050u, 0x2561C8u, 0x2561D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2561D0u;
label_2561d0:
    // 0x2561d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2561d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2561d4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2561d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2561d8: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2561D8u;
    SET_GPR_U32(ctx, 31, 0x2561E0u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2561D8u, 0x2561E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2561E0u;
label_2561e0:
    // 0x2561e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2561e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2561e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2561e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2561e8: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2561e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2561ec: 0x24a5c280  addiu       $a1, $a1, -0x3D80
    ctx->pc = 0x2561ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951552));
    // 0x2561f0: 0xc44c0008  lwc1        $f12, 0x8($v0)
    ctx->pc = 0x2561f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2561f4: 0xc051414  jal         func_145050
    ctx->pc = 0x2561F4u;
    SET_GPR_U32(ctx, 31, 0x2561FCu);
    ctx->pc = 0x145050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145050u, 0x2561F4u, 0x2561FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2561FCu;
label_2561fc:
    // 0x2561fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2561fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256200: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x256200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x256204: 0xc040a90  jal         func_102A40
    ctx->pc = 0x256204u;
    SET_GPR_U32(ctx, 31, 0x25620Cu);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x256204u, 0x25620Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25620Cu;
label_25620c:
    // 0x25620c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x25620cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x256210: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x256210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256214: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x256214u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x256218: 0x24a5c290  addiu       $a1, $a1, -0x3D70
    ctx->pc = 0x256218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951568));
    // 0x25621c: 0xc44c0008  lwc1        $f12, 0x8($v0)
    ctx->pc = 0x25621cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x256220: 0xc051414  jal         func_145050
    ctx->pc = 0x256220u;
    SET_GPR_U32(ctx, 31, 0x256228u);
    ctx->pc = 0x145050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145050u, 0x256220u, 0x256228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256228u;
label_256228:
    // 0x256228: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x256228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25622c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x25622cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x256230: 0xc040a90  jal         func_102A40
    ctx->pc = 0x256230u;
    SET_GPR_U32(ctx, 31, 0x256238u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x256230u, 0x256238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256238u;
label_256238:
    // 0x256238: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x256238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25623c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25623cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256240: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x256240u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x256244: 0x24a5c2a0  addiu       $a1, $a1, -0x3D60
    ctx->pc = 0x256244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951584));
    // 0x256248: 0xc44c000c  lwc1        $f12, 0xC($v0)
    ctx->pc = 0x256248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25624c: 0xc051414  jal         func_145050
    ctx->pc = 0x25624Cu;
    SET_GPR_U32(ctx, 31, 0x256254u);
    ctx->pc = 0x145050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145050u, 0x25624Cu, 0x256254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256254u;
label_256254:
    // 0x256254: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x256254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256258: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x256258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x25625c: 0xc040a90  jal         func_102A40
    ctx->pc = 0x25625Cu;
    SET_GPR_U32(ctx, 31, 0x256264u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x25625Cu, 0x256264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256264u;
label_256264:
    // 0x256264: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x256264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x256268: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x256268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25626c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x25626cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x256270: 0x24a5c2c0  addiu       $a1, $a1, -0x3D40
    ctx->pc = 0x256270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951616));
    // 0x256274: 0xc44c000c  lwc1        $f12, 0xC($v0)
    ctx->pc = 0x256274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x256278: 0xc051414  jal         func_145050
    ctx->pc = 0x256278u;
    SET_GPR_U32(ctx, 31, 0x256280u);
    ctx->pc = 0x145050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145050u, 0x256278u, 0x256280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256280u;
label_256280:
    // 0x256280: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x256280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256284: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x256284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x256288: 0xc040a90  jal         func_102A40
    ctx->pc = 0x256288u;
    SET_GPR_U32(ctx, 31, 0x256290u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x256288u, 0x256290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256290u;
label_256290:
    // 0x256290: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x256290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x256294: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x256294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256298: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x256298u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x25629c: 0x24a5c2e0  addiu       $a1, $a1, -0x3D20
    ctx->pc = 0x25629cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951648));
    // 0x2562a0: 0xc44c000c  lwc1        $f12, 0xC($v0)
    ctx->pc = 0x2562a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2562a4: 0xc051414  jal         func_145050
    ctx->pc = 0x2562A4u;
    SET_GPR_U32(ctx, 31, 0x2562ACu);
    ctx->pc = 0x145050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145050u, 0x2562A4u, 0x2562ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2562ACu;
label_2562ac:
    // 0x2562ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2562acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2562b0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2562b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2562b4: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2562B4u;
    SET_GPR_U32(ctx, 31, 0x2562BCu);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2562B4u, 0x2562BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2562BCu;
label_2562bc:
    // 0x2562bc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2562bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2562c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2562c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2562c4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2562c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2562c8: 0x24a5c300  addiu       $a1, $a1, -0x3D00
    ctx->pc = 0x2562c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951680));
    // 0x2562cc: 0xc44c000c  lwc1        $f12, 0xC($v0)
    ctx->pc = 0x2562ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2562d0: 0xc051414  jal         func_145050
    ctx->pc = 0x2562D0u;
    SET_GPR_U32(ctx, 31, 0x2562D8u);
    ctx->pc = 0x145050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145050u, 0x2562D0u, 0x2562D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2562D8u;
label_2562d8:
    // 0x2562d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2562d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2562dc: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2562dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2562e0: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2562E0u;
    SET_GPR_U32(ctx, 31, 0x2562E8u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2562E0u, 0x2562E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2562E8u;
label_2562e8:
    // 0x2562e8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2562e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2562ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2562ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2562f0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2562f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2562f4: 0x24a5c320  addiu       $a1, $a1, -0x3CE0
    ctx->pc = 0x2562f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951712));
    // 0x2562f8: 0xc44c000c  lwc1        $f12, 0xC($v0)
    ctx->pc = 0x2562f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2562fc: 0xc051414  jal         func_145050
    ctx->pc = 0x2562FCu;
    SET_GPR_U32(ctx, 31, 0x256304u);
    ctx->pc = 0x145050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145050u, 0x2562FCu, 0x256304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256304u;
label_256304:
    // 0x256304: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x256304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256308: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x256308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x25630c: 0xc040a90  jal         func_102A40
    ctx->pc = 0x25630Cu;
    SET_GPR_U32(ctx, 31, 0x256314u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x25630Cu, 0x256314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256314u;
label_256314:
    // 0x256314: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x256314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x256318: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x256318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25631c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x25631cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x256320: 0x24a5c340  addiu       $a1, $a1, -0x3CC0
    ctx->pc = 0x256320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951744));
    // 0x256324: 0xc44c000c  lwc1        $f12, 0xC($v0)
    ctx->pc = 0x256324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x256328: 0xc051414  jal         func_145050
    ctx->pc = 0x256328u;
    SET_GPR_U32(ctx, 31, 0x256330u);
    ctx->pc = 0x145050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145050u, 0x256328u, 0x256330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256330u;
label_256330:
    // 0x256330: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x256330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256334: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x256334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x256338: 0xc040a90  jal         func_102A40
    ctx->pc = 0x256338u;
    SET_GPR_U32(ctx, 31, 0x256340u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x256338u, 0x256340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256340u;
label_256340:
    // 0x256340: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x256340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x256344: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x256344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256348: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x256348u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x25634c: 0x24a5c360  addiu       $a1, $a1, -0x3CA0
    ctx->pc = 0x25634cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951776));
    // 0x256350: 0xc44c000c  lwc1        $f12, 0xC($v0)
    ctx->pc = 0x256350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x256354: 0xc051414  jal         func_145050
    ctx->pc = 0x256354u;
    SET_GPR_U32(ctx, 31, 0x25635Cu);
    ctx->pc = 0x145050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145050u, 0x256354u, 0x25635Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25635Cu;
label_25635c:
    // 0x25635c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25635cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256360: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x256360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x256364: 0xc040a90  jal         func_102A40
    ctx->pc = 0x256364u;
    SET_GPR_U32(ctx, 31, 0x25636Cu);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x256364u, 0x25636Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25636Cu;
label_25636c:
    // 0x25636c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x25636cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x256370: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x256370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256374: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x256374u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x256378: 0x24a5c380  addiu       $a1, $a1, -0x3C80
    ctx->pc = 0x256378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951808));
    // 0x25637c: 0xc44c000c  lwc1        $f12, 0xC($v0)
    ctx->pc = 0x25637cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x256380: 0xc051414  jal         func_145050
    ctx->pc = 0x256380u;
    SET_GPR_U32(ctx, 31, 0x256388u);
    ctx->pc = 0x145050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145050u, 0x256380u, 0x256388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256388u;
label_256388:
    // 0x256388: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x256388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25638c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x25638cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x256390: 0xc040a90  jal         func_102A40
    ctx->pc = 0x256390u;
    SET_GPR_U32(ctx, 31, 0x256398u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x256390u, 0x256398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256398u;
label_256398:
    // 0x256398: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x256398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25639c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25639cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2563a0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2563a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2563a4: 0x24a5c3a0  addiu       $a1, $a1, -0x3C60
    ctx->pc = 0x2563a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951840));
    // 0x2563a8: 0xc44c000c  lwc1        $f12, 0xC($v0)
    ctx->pc = 0x2563a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2563ac: 0xc051414  jal         func_145050
    ctx->pc = 0x2563ACu;
    SET_GPR_U32(ctx, 31, 0x2563B4u);
    ctx->pc = 0x145050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145050u, 0x2563ACu, 0x2563B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2563B4u;
label_2563b4:
    // 0x2563b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2563b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2563b8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2563b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2563bc: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2563BCu;
    SET_GPR_U32(ctx, 31, 0x2563C4u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2563BCu, 0x2563C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2563C4u;
label_2563c4:
    // 0x2563c4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2563c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2563c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2563c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2563cc: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2563ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2563d0: 0x24a5c3c0  addiu       $a1, $a1, -0x3C40
    ctx->pc = 0x2563d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951872));
    // 0x2563d4: 0xc44c000c  lwc1        $f12, 0xC($v0)
    ctx->pc = 0x2563d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2563d8: 0xc051414  jal         func_145050
    ctx->pc = 0x2563D8u;
    SET_GPR_U32(ctx, 31, 0x2563E0u);
    ctx->pc = 0x145050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145050u, 0x2563D8u, 0x2563E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2563E0u;
label_2563e0:
    // 0x2563e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2563e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2563e4: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x2563e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2563e8: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2563E8u;
    SET_GPR_U32(ctx, 31, 0x2563F0u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2563E8u, 0x2563F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2563F0u;
label_2563f0:
    // 0x2563f0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2563f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2563f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2563f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2563f8: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2563f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2563fc: 0x24a5c3e0  addiu       $a1, $a1, -0x3C20
    ctx->pc = 0x2563fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951904));
    // 0x256400: 0xc44c000c  lwc1        $f12, 0xC($v0)
    ctx->pc = 0x256400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x256404: 0xc051414  jal         func_145050
    ctx->pc = 0x256404u;
    SET_GPR_U32(ctx, 31, 0x25640Cu);
    ctx->pc = 0x145050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145050u, 0x256404u, 0x25640Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25640Cu;
label_25640c:
    // 0x25640c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25640cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256410: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x256410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x256414: 0xc0980d0  jal         func_260340
    ctx->pc = 0x256414u;
    SET_GPR_U32(ctx, 31, 0x25641Cu);
    ctx->pc = 0x260340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260340u, 0x256414u, 0x25641Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25641Cu;
label_25641c:
    // 0x25641c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25641cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256420: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x256420u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x256424: 0x24a5bee0  addiu       $a1, $a1, -0x4120
    ctx->pc = 0x256424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950624));
    // 0x256428: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x256428u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25642c: 0xc047314  jal         func_11CC50
    ctx->pc = 0x25642Cu;
    SET_GPR_U32(ctx, 31, 0x256434u);
    ctx->pc = 0x11CC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CC50u, 0x25642Cu, 0x256434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256434u;
label_256434:
    // 0x256434: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x256434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256438: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x256438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x25643c: 0xc0980d0  jal         func_260340
    ctx->pc = 0x25643Cu;
    SET_GPR_U32(ctx, 31, 0x256444u);
    ctx->pc = 0x260340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260340u, 0x25643Cu, 0x256444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256444u;
label_256444:
    // 0x256444: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x256444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256448: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x256448u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x25644c: 0x24a5bf00  addiu       $a1, $a1, -0x4100
    ctx->pc = 0x25644cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950656));
    // 0x256450: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x256450u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256454: 0xc047314  jal         func_11CC50
    ctx->pc = 0x256454u;
    SET_GPR_U32(ctx, 31, 0x25645Cu);
    ctx->pc = 0x11CC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CC50u, 0x256454u, 0x25645Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25645Cu;
label_25645c:
    // 0x25645c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25645cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256460: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x256460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x256464: 0xc0980d0  jal         func_260340
    ctx->pc = 0x256464u;
    SET_GPR_U32(ctx, 31, 0x25646Cu);
    ctx->pc = 0x260340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260340u, 0x256464u, 0x25646Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25646Cu;
label_25646c:
    // 0x25646c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25646cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256470: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x256470u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x256474: 0x24a5bf20  addiu       $a1, $a1, -0x40E0
    ctx->pc = 0x256474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950688));
    // 0x256478: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x256478u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25647c: 0xc047314  jal         func_11CC50
    ctx->pc = 0x25647Cu;
    SET_GPR_U32(ctx, 31, 0x256484u);
    ctx->pc = 0x11CC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CC50u, 0x25647Cu, 0x256484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256484u;
label_256484:
    // 0x256484: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x256484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256488: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x256488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x25648c: 0xc0980d0  jal         func_260340
    ctx->pc = 0x25648Cu;
    SET_GPR_U32(ctx, 31, 0x256494u);
    ctx->pc = 0x260340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260340u, 0x25648Cu, 0x256494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256494u;
label_256494:
    // 0x256494: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x256494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256498: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x256498u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x25649c: 0x24a5bf40  addiu       $a1, $a1, -0x40C0
    ctx->pc = 0x25649cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950720));
    // 0x2564a0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2564a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2564a4: 0xc047314  jal         func_11CC50
    ctx->pc = 0x2564A4u;
    SET_GPR_U32(ctx, 31, 0x2564ACu);
    ctx->pc = 0x11CC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CC50u, 0x2564A4u, 0x2564ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2564ACu;
label_2564ac:
    // 0x2564ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2564acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2564b0: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2564b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2564b4: 0xc0980d0  jal         func_260340
    ctx->pc = 0x2564B4u;
    SET_GPR_U32(ctx, 31, 0x2564BCu);
    ctx->pc = 0x260340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260340u, 0x2564B4u, 0x2564BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2564BCu;
label_2564bc:
    // 0x2564bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2564bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2564c0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2564c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2564c4: 0x24a5bf60  addiu       $a1, $a1, -0x40A0
    ctx->pc = 0x2564c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950752));
    // 0x2564c8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2564c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2564cc: 0xc047314  jal         func_11CC50
    ctx->pc = 0x2564CCu;
    SET_GPR_U32(ctx, 31, 0x2564D4u);
    ctx->pc = 0x11CC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CC50u, 0x2564CCu, 0x2564D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2564D4u;
label_2564d4:
    // 0x2564d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2564d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2564d8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2564d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2564dc: 0xc0980d0  jal         func_260340
    ctx->pc = 0x2564DCu;
    SET_GPR_U32(ctx, 31, 0x2564E4u);
    ctx->pc = 0x260340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260340u, 0x2564DCu, 0x2564E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2564E4u;
label_2564e4:
    // 0x2564e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2564e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2564e8: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2564e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2564ec: 0x24a5bf80  addiu       $a1, $a1, -0x4080
    ctx->pc = 0x2564ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950784));
    // 0x2564f0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2564f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2564f4: 0xc047314  jal         func_11CC50
    ctx->pc = 0x2564F4u;
    SET_GPR_U32(ctx, 31, 0x2564FCu);
    ctx->pc = 0x11CC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CC50u, 0x2564F4u, 0x2564FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2564FCu;
label_2564fc:
    // 0x2564fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2564fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256500: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x256500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x256504: 0xc0980d0  jal         func_260340
    ctx->pc = 0x256504u;
    SET_GPR_U32(ctx, 31, 0x25650Cu);
    ctx->pc = 0x260340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260340u, 0x256504u, 0x25650Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25650Cu;
label_25650c:
    // 0x25650c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25650cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256510: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x256510u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x256514: 0x24a5bfa0  addiu       $a1, $a1, -0x4060
    ctx->pc = 0x256514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950816));
    // 0x256518: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x256518u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25651c: 0xc047314  jal         func_11CC50
    ctx->pc = 0x25651Cu;
    SET_GPR_U32(ctx, 31, 0x256524u);
    ctx->pc = 0x11CC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CC50u, 0x25651Cu, 0x256524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256524u;
label_256524:
    // 0x256524: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x256524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256528: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x256528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x25652c: 0xc0980d0  jal         func_260340
    ctx->pc = 0x25652Cu;
    SET_GPR_U32(ctx, 31, 0x256534u);
    ctx->pc = 0x260340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260340u, 0x25652Cu, 0x256534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256534u;
label_256534:
    // 0x256534: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x256534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256538: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x256538u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x25653c: 0x24a5bfc0  addiu       $a1, $a1, -0x4040
    ctx->pc = 0x25653cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950848));
    // 0x256540: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x256540u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256544: 0xc047314  jal         func_11CC50
    ctx->pc = 0x256544u;
    SET_GPR_U32(ctx, 31, 0x25654Cu);
    ctx->pc = 0x11CC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CC50u, 0x256544u, 0x25654Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25654Cu;
label_25654c:
    // 0x25654c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25654cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256550: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x256550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x256554: 0xc0980d0  jal         func_260340
    ctx->pc = 0x256554u;
    SET_GPR_U32(ctx, 31, 0x25655Cu);
    ctx->pc = 0x260340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260340u, 0x256554u, 0x25655Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25655Cu;
label_25655c:
    // 0x25655c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25655cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256560: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x256560u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x256564: 0x24a5bfe0  addiu       $a1, $a1, -0x4020
    ctx->pc = 0x256564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950880));
    // 0x256568: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x256568u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25656c: 0xc047314  jal         func_11CC50
    ctx->pc = 0x25656Cu;
    SET_GPR_U32(ctx, 31, 0x256574u);
    ctx->pc = 0x11CC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CC50u, 0x25656Cu, 0x256574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256574u;
label_256574:
    // 0x256574: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x256574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256578: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x256578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x25657c: 0xc0980d0  jal         func_260340
    ctx->pc = 0x25657Cu;
    SET_GPR_U32(ctx, 31, 0x256584u);
    ctx->pc = 0x260340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260340u, 0x25657Cu, 0x256584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256584u;
label_256584:
    // 0x256584: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x256584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256588: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x256588u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x25658c: 0x24a5c000  addiu       $a1, $a1, -0x4000
    ctx->pc = 0x25658cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950912));
    // 0x256590: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x256590u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256594: 0xc047314  jal         func_11CC50
    ctx->pc = 0x256594u;
    SET_GPR_U32(ctx, 31, 0x25659Cu);
    ctx->pc = 0x11CC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CC50u, 0x256594u, 0x25659Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25659Cu;
label_25659c:
    // 0x25659c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25659cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2565a0: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x2565a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2565a4: 0xc0980d0  jal         func_260340
    ctx->pc = 0x2565A4u;
    SET_GPR_U32(ctx, 31, 0x2565ACu);
    ctx->pc = 0x260340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260340u, 0x2565A4u, 0x2565ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2565ACu;
label_2565ac:
    // 0x2565ac: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2565acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2565b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2565b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2565b4: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2565b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x2565b8: 0x2442c020  addiu       $v0, $v0, -0x3FE0
    ctx->pc = 0x2565b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950944));
    // 0x2565bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2565bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2565c0: 0xc047314  jal         func_11CC50
    ctx->pc = 0x2565C0u;
    SET_GPR_U32(ctx, 31, 0x2565C8u);
    ctx->pc = 0x11CC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CC50u, 0x2565C0u, 0x2565C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2565C8u;
label_2565c8:
    // 0x2565c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2565c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2565cc: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x2565ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2565d0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2565d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2565d4: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x2565d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2565d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2565d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2565dc: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2565DCu;
    SET_GPR_U32(ctx, 31, 0x2565E4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2565DCu, 0x2565E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2565E4u;
label_2565e4:
    // 0x2565e4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2565e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2565e8: 0x1013009a  beq         $zero, $s3, . + 4 + (0x9A << 2)
    ctx->pc = 0x2565E8u;
    {
        const bool branch_taken_0x2565e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 19));
        if (branch_taken_0x2565e8) {
            ctx->pc = 0x256854u;
            goto label_256854;
        }
    }
    ctx->pc = 0x2565F0u;
    // 0x2565f0: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x2565f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2565f4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2565f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2565f8: 0xc041b48  jal         func_106D20
    ctx->pc = 0x2565F8u;
    SET_GPR_U32(ctx, 31, 0x256600u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x2565F8u, 0x256600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256600u;
label_256600:
    // 0x256600: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x256600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256604: 0xc096ad0  jal         func_25AB40
    ctx->pc = 0x256604u;
    SET_GPR_U32(ctx, 31, 0x25660Cu);
    ctx->pc = 0x25AB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AB40u, 0x256604u, 0x25660Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25660Cu;
label_25660c:
    // 0x25660c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x25660cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256610: 0x17c00004  bnez        $fp, . + 4 + (0x4 << 2)
    ctx->pc = 0x256610u;
    {
        const bool branch_taken_0x256610 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x256610) {
            ctx->pc = 0x256624u;
            goto label_256624;
        }
    }
    ctx->pc = 0x256618u;
    // 0x256618: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x256618u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25661c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25661Cu;
    {
        const bool branch_taken_0x25661c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25661c) {
            ctx->pc = 0x256638u;
            goto label_256638;
        }
    }
    ctx->pc = 0x256624u;
label_256624:
    // 0x256624: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x256624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256628: 0xc09138c  jal         func_244E30
    ctx->pc = 0x256628u;
    SET_GPR_U32(ctx, 31, 0x256630u);
    ctx->pc = 0x244E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E30u, 0x256628u, 0x256630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256630u;
label_256630:
    // 0x256630: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x256630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256634: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x256634u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_256638:
    // 0x256638: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x256638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x25663c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x25663cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256640: 0x27829ec8  addiu       $v0, $gp, -0x6138
    ctx->pc = 0x256640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942408));
    // 0x256644: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x256644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256648: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x256648u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25664c: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x25664Cu;
    SET_GPR_U32(ctx, 31, 0x256654u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x25664Cu, 0x256654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256654u;
label_256654:
    // 0x256654: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x256654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x256658: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x256658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25665c: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x25665cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x256660: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x256660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256664: 0xc0424e8  jal         func_1093A0
    ctx->pc = 0x256664u;
    SET_GPR_U32(ctx, 31, 0x25666Cu);
    ctx->pc = 0x1093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1093A0u, 0x256664u, 0x25666Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25666Cu;
label_25666c:
    // 0x25666c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x25666cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256670: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x256670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256674: 0xc096ee4  jal         func_25BB90
    ctx->pc = 0x256674u;
    SET_GPR_U32(ctx, 31, 0x25667Cu);
    ctx->pc = 0x25BB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BB90u, 0x256674u, 0x25667Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25667Cu;
label_25667c:
    // 0x25667c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x25667cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256680: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x256680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256684: 0xc095a2c  jal         func_2568B0
    ctx->pc = 0x256684u;
    SET_GPR_U32(ctx, 31, 0x25668Cu);
    ctx->pc = 0x2568B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2568B0u, 0x256684u, 0x25668Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25668Cu;
label_25668c:
    // 0x25668c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x25668cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256690: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x256690u;
    {
        const bool branch_taken_0x256690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x256690) {
            ctx->pc = 0x2566E8u;
            goto label_2566e8;
        }
    }
    ctx->pc = 0x256698u;
label_256698:
    // 0x256698: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x256698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x25669c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x25669cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2566a0: 0x27829ec8  addiu       $v0, $gp, -0x6138
    ctx->pc = 0x2566a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942408));
    // 0x2566a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2566a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2566a8: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x2566a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2566ac: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x2566ACu;
    SET_GPR_U32(ctx, 31, 0x2566B4u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x2566ACu, 0x2566B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2566B4u;
label_2566b4:
    // 0x2566b4: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x2566b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2566b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2566b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2566bc: 0x27859ed8  addiu       $a1, $gp, -0x6128
    ctx->pc = 0x2566bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942424));
    // 0x2566c0: 0xc0424e8  jal         func_1093A0
    ctx->pc = 0x2566C0u;
    SET_GPR_U32(ctx, 31, 0x2566C8u);
    ctx->pc = 0x1093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1093A0u, 0x2566C0u, 0x2566C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2566C8u;
label_2566c8:
    // 0x2566c8: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x2566c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2566cc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2566ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2566d0: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x2566d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2566d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2566d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2566d8: 0xc0424e8  jal         func_1093A0
    ctx->pc = 0x2566D8u;
    SET_GPR_U32(ctx, 31, 0x2566E0u);
    ctx->pc = 0x1093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1093A0u, 0x2566D8u, 0x2566E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2566E0u;
label_2566e0:
    // 0x2566e0: 0x26850008  addiu       $a1, $s4, 0x8
    ctx->pc = 0x2566e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x2566e4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2566e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2566e8:
    // 0x2566e8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2566e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2566ec: 0xc095a24  jal         func_256890
    ctx->pc = 0x2566ECu;
    SET_GPR_U32(ctx, 31, 0x2566F4u);
    ctx->pc = 0x256890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256890u, 0x2566ECu, 0x2566F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2566F4u;
label_2566f4:
    // 0x2566f4: 0x1682ffe8  bne         $s4, $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2566F4u;
    {
        const bool branch_taken_0x2566f4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x2566f4) {
            ctx->pc = 0x256698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256698;
        }
    }
    ctx->pc = 0x2566FCu;
    // 0x2566fc: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x2566fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x256700: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x256700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256704: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x256704u;
    SET_GPR_U32(ctx, 31, 0x25670Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x256704u, 0x25670Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25670Cu;
label_25670c:
    // 0x25670c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25670cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256710: 0x2405053f  addiu       $a1, $zero, 0x53F
    ctx->pc = 0x256710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1343));
    // 0x256714: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x256714u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256718: 0xc0433dc  jal         func_10CF70
    ctx->pc = 0x256718u;
    SET_GPR_U32(ctx, 31, 0x256720u);
    ctx->pc = 0x10CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CF70u, 0x256718u, 0x256720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256720u;
label_256720:
    // 0x256720: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x256720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256724: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x256724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256728: 0xc096f0c  jal         func_25BC30
    ctx->pc = 0x256728u;
    SET_GPR_U32(ctx, 31, 0x256730u);
    ctx->pc = 0x25BC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BC30u, 0x256728u, 0x256730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256730u;
label_256730:
    // 0x256730: 0x27a300d8  addiu       $v1, $sp, 0xD8
    ctx->pc = 0x256730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x256734: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x256734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x256738: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x256738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25673c: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x25673cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x256740: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x256740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x256744: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x256744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x256748: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x256748u;
    {
        const bool branch_taken_0x256748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x256748) {
            ctx->pc = 0x256764u;
            goto label_256764;
        }
    }
    ctx->pc = 0x256750u;
    // 0x256750: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x256750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x256754: 0x24a20004  addiu       $v0, $a1, 0x4
    ctx->pc = 0x256754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x256758: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x256758u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25675c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25675Cu;
    {
        const bool branch_taken_0x25675c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25675c) {
            ctx->pc = 0x25676Cu;
            goto label_25676c;
        }
    }
    ctx->pc = 0x256764u;
label_256764:
    // 0x256764: 0x27859ec0  addiu       $a1, $gp, -0x6140
    ctx->pc = 0x256764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942400));
    // 0x256768: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x256768u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_25676c:
    // 0x25676c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25676cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256770: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x256770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x256774: 0x2442c040  addiu       $v0, $v0, -0x3FC0
    ctx->pc = 0x256774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950976));
    // 0x256778: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x256778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25677c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x25677cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256780: 0xc041b90  jal         func_106E40
    ctx->pc = 0x256780u;
    SET_GPR_U32(ctx, 31, 0x256788u);
    ctx->pc = 0x106E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E40u, 0x256780u, 0x256788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256788u;
label_256788:
    // 0x256788: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x256788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25678c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x25678cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x256790: 0x24a5c060  addiu       $a1, $a1, -0x3FA0
    ctx->pc = 0x256790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951008));
    // 0x256794: 0x93a200dd  lbu         $v0, 0xDD($sp)
    ctx->pc = 0x256794u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 221)));
    // 0x256798: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x256798u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25679c: 0xc047314  jal         func_11CC50
    ctx->pc = 0x25679Cu;
    SET_GPR_U32(ctx, 31, 0x2567A4u);
    ctx->pc = 0x11CC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CC50u, 0x25679Cu, 0x2567A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2567A4u;
label_2567a4:
    // 0x2567a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2567a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2567a8: 0xc096ffc  jal         func_25BFF0
    ctx->pc = 0x2567A8u;
    SET_GPR_U32(ctx, 31, 0x2567B0u);
    ctx->pc = 0x25BFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BFF0u, 0x2567A8u, 0x2567B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2567B0u;
label_2567b0:
    // 0x2567b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2567b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2567b4: 0x10a00019  beqz        $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2567B4u;
    {
        const bool branch_taken_0x2567b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2567b4) {
            ctx->pc = 0x25681Cu;
            goto label_25681c;
        }
    }
    ctx->pc = 0x2567BCu;
    // 0x2567bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2567bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2567c0: 0xc096ffc  jal         func_25BFF0
    ctx->pc = 0x2567C0u;
    SET_GPR_U32(ctx, 31, 0x2567C8u);
    ctx->pc = 0x25BFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BFF0u, 0x2567C0u, 0x2567C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2567C8u;
label_2567c8:
    // 0x2567c8: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2567c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2567cc: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x2567CCu;
    SET_GPR_U32(ctx, 31, 0x2567D4u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x2567CCu, 0x2567D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2567D4u;
label_2567d4:
    // 0x2567d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2567d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2567d8: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2567d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2567dc: 0x24a5c078  addiu       $a1, $a1, -0x3F88
    ctx->pc = 0x2567dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951032));
    // 0x2567e0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2567e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2567e4: 0xc041b90  jal         func_106E40
    ctx->pc = 0x2567E4u;
    SET_GPR_U32(ctx, 31, 0x2567ECu);
    ctx->pc = 0x106E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E40u, 0x2567E4u, 0x2567ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2567ECu;
label_2567ec:
    // 0x2567ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2567ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2567f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2567f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2567f4: 0xc096ffc  jal         func_25BFF0
    ctx->pc = 0x2567F4u;
    SET_GPR_U32(ctx, 31, 0x2567FCu);
    ctx->pc = 0x25BFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BFF0u, 0x2567F4u, 0x2567FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2567FCu;
label_2567fc:
    // 0x2567fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2567fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256800: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x256800u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x256804: 0x24a5c090  addiu       $a1, $a1, -0x3F70
    ctx->pc = 0x256804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951056));
    // 0x256808: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x256808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25680c: 0xc051414  jal         func_145050
    ctx->pc = 0x25680Cu;
    SET_GPR_U32(ctx, 31, 0x256814u);
    ctx->pc = 0x145050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145050u, 0x25680Cu, 0x256814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256814u;
label_256814:
    // 0x256814: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x256814u;
    {
        const bool branch_taken_0x256814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x256814) {
            ctx->pc = 0x256838u;
            goto label_256838;
        }
    }
    ctx->pc = 0x25681Cu;
label_25681c:
    // 0x25681c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25681cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256820: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x256820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x256824: 0x2442c078  addiu       $v0, $v0, -0x3F88
    ctx->pc = 0x256824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951032));
    // 0x256828: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x256828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25682c: 0x27869ec0  addiu       $a2, $gp, -0x6140
    ctx->pc = 0x25682cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942400));
    // 0x256830: 0xc041b90  jal         func_106E40
    ctx->pc = 0x256830u;
    SET_GPR_U32(ctx, 31, 0x256838u);
    ctx->pc = 0x106E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E40u, 0x256830u, 0x256838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256838u;
label_256838:
    // 0x256838: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x256838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x25683c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x25683cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256840: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x256840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x256844: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x256844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256848: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x256848u;
    SET_GPR_U32(ctx, 31, 0x256850u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x256848u, 0x256850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256850u;
label_256850:
    // 0x256850: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x256850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_256854:
    // 0x256854: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x256854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x256858: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x256858u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25685c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x25685cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x256860: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x256860u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x256864: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x256864u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x256868: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x256868u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25686c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x25686cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x256870: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x256870u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x256874: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x256874u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x256878: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x256878u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25687c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x25687cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x256880: 0x27bd0110  addiu       $sp, $sp, 0x110
    ctx->pc = 0x256880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x256884: 0x3e00008  jr          $ra
    ctx->pc = 0x256884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25688Cu;
    // 0x25688c: 0x0  nop
    ctx->pc = 0x25688cu;
    // NOP
    ctx->pc = 0x256890u;
}
