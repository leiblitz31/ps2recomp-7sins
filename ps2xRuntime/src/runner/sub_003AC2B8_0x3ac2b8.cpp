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

// Function: sub_003AC2B8
// Address: 0x3ac2b8 - 0x3ac5f0
void sub_003AC2B8_0x3ac2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AC2B8_0x3ac2b8");
#endif

    switch (ctx->pc) {
        case 0x3ac2b8u: goto label_3ac2b8;
        case 0x3ac2bcu: goto label_3ac2bc;
        case 0x3ac2c0u: goto label_3ac2c0;
        case 0x3ac2c4u: goto label_3ac2c4;
        case 0x3ac2c8u: goto label_3ac2c8;
        case 0x3ac2ccu: goto label_3ac2cc;
        case 0x3ac2d0u: goto label_3ac2d0;
        case 0x3ac2d4u: goto label_3ac2d4;
        case 0x3ac2d8u: goto label_3ac2d8;
        case 0x3ac2dcu: goto label_3ac2dc;
        case 0x3ac2e0u: goto label_3ac2e0;
        case 0x3ac2e4u: goto label_3ac2e4;
        case 0x3ac2e8u: goto label_3ac2e8;
        case 0x3ac2ecu: goto label_3ac2ec;
        case 0x3ac2f0u: goto label_3ac2f0;
        case 0x3ac2f4u: goto label_3ac2f4;
        case 0x3ac2f8u: goto label_3ac2f8;
        case 0x3ac2fcu: goto label_3ac2fc;
        case 0x3ac300u: goto label_3ac300;
        case 0x3ac304u: goto label_3ac304;
        case 0x3ac308u: goto label_3ac308;
        case 0x3ac30cu: goto label_3ac30c;
        case 0x3ac310u: goto label_3ac310;
        case 0x3ac314u: goto label_3ac314;
        case 0x3ac318u: goto label_3ac318;
        case 0x3ac31cu: goto label_3ac31c;
        case 0x3ac320u: goto label_3ac320;
        case 0x3ac324u: goto label_3ac324;
        case 0x3ac328u: goto label_3ac328;
        case 0x3ac32cu: goto label_3ac32c;
        case 0x3ac330u: goto label_3ac330;
        case 0x3ac334u: goto label_3ac334;
        case 0x3ac338u: goto label_3ac338;
        case 0x3ac33cu: goto label_3ac33c;
        case 0x3ac340u: goto label_3ac340;
        case 0x3ac344u: goto label_3ac344;
        case 0x3ac348u: goto label_3ac348;
        case 0x3ac34cu: goto label_3ac34c;
        case 0x3ac350u: goto label_3ac350;
        case 0x3ac354u: goto label_3ac354;
        case 0x3ac358u: goto label_3ac358;
        case 0x3ac35cu: goto label_3ac35c;
        case 0x3ac360u: goto label_3ac360;
        case 0x3ac364u: goto label_3ac364;
        case 0x3ac368u: goto label_3ac368;
        case 0x3ac36cu: goto label_3ac36c;
        case 0x3ac370u: goto label_3ac370;
        case 0x3ac374u: goto label_3ac374;
        case 0x3ac378u: goto label_3ac378;
        case 0x3ac37cu: goto label_3ac37c;
        case 0x3ac380u: goto label_3ac380;
        case 0x3ac384u: goto label_3ac384;
        case 0x3ac388u: goto label_3ac388;
        case 0x3ac38cu: goto label_3ac38c;
        case 0x3ac390u: goto label_3ac390;
        case 0x3ac394u: goto label_3ac394;
        case 0x3ac398u: goto label_3ac398;
        case 0x3ac39cu: goto label_3ac39c;
        case 0x3ac3a0u: goto label_3ac3a0;
        case 0x3ac3a4u: goto label_3ac3a4;
        case 0x3ac3a8u: goto label_3ac3a8;
        case 0x3ac3acu: goto label_3ac3ac;
        case 0x3ac3b0u: goto label_3ac3b0;
        case 0x3ac3b4u: goto label_3ac3b4;
        case 0x3ac3b8u: goto label_3ac3b8;
        case 0x3ac3bcu: goto label_3ac3bc;
        case 0x3ac3c0u: goto label_3ac3c0;
        case 0x3ac3c4u: goto label_3ac3c4;
        case 0x3ac3c8u: goto label_3ac3c8;
        case 0x3ac3ccu: goto label_3ac3cc;
        case 0x3ac3d0u: goto label_3ac3d0;
        case 0x3ac3d4u: goto label_3ac3d4;
        case 0x3ac3d8u: goto label_3ac3d8;
        case 0x3ac3dcu: goto label_3ac3dc;
        case 0x3ac3e0u: goto label_3ac3e0;
        case 0x3ac3e4u: goto label_3ac3e4;
        case 0x3ac3e8u: goto label_3ac3e8;
        case 0x3ac3ecu: goto label_3ac3ec;
        case 0x3ac3f0u: goto label_3ac3f0;
        case 0x3ac3f4u: goto label_3ac3f4;
        case 0x3ac3f8u: goto label_3ac3f8;
        case 0x3ac3fcu: goto label_3ac3fc;
        case 0x3ac400u: goto label_3ac400;
        case 0x3ac404u: goto label_3ac404;
        case 0x3ac408u: goto label_3ac408;
        case 0x3ac40cu: goto label_3ac40c;
        case 0x3ac410u: goto label_3ac410;
        case 0x3ac414u: goto label_3ac414;
        case 0x3ac418u: goto label_3ac418;
        case 0x3ac41cu: goto label_3ac41c;
        case 0x3ac420u: goto label_3ac420;
        case 0x3ac424u: goto label_3ac424;
        case 0x3ac428u: goto label_3ac428;
        case 0x3ac42cu: goto label_3ac42c;
        case 0x3ac430u: goto label_3ac430;
        case 0x3ac434u: goto label_3ac434;
        case 0x3ac438u: goto label_3ac438;
        case 0x3ac43cu: goto label_3ac43c;
        case 0x3ac440u: goto label_3ac440;
        case 0x3ac444u: goto label_3ac444;
        case 0x3ac448u: goto label_3ac448;
        case 0x3ac44cu: goto label_3ac44c;
        case 0x3ac450u: goto label_3ac450;
        case 0x3ac454u: goto label_3ac454;
        case 0x3ac458u: goto label_3ac458;
        case 0x3ac45cu: goto label_3ac45c;
        case 0x3ac460u: goto label_3ac460;
        case 0x3ac464u: goto label_3ac464;
        case 0x3ac468u: goto label_3ac468;
        case 0x3ac46cu: goto label_3ac46c;
        case 0x3ac470u: goto label_3ac470;
        case 0x3ac474u: goto label_3ac474;
        case 0x3ac478u: goto label_3ac478;
        case 0x3ac47cu: goto label_3ac47c;
        case 0x3ac480u: goto label_3ac480;
        case 0x3ac484u: goto label_3ac484;
        case 0x3ac488u: goto label_3ac488;
        case 0x3ac48cu: goto label_3ac48c;
        case 0x3ac490u: goto label_3ac490;
        case 0x3ac494u: goto label_3ac494;
        case 0x3ac498u: goto label_3ac498;
        case 0x3ac49cu: goto label_3ac49c;
        case 0x3ac4a0u: goto label_3ac4a0;
        case 0x3ac4a4u: goto label_3ac4a4;
        case 0x3ac4a8u: goto label_3ac4a8;
        case 0x3ac4acu: goto label_3ac4ac;
        case 0x3ac4b0u: goto label_3ac4b0;
        case 0x3ac4b4u: goto label_3ac4b4;
        case 0x3ac4b8u: goto label_3ac4b8;
        case 0x3ac4bcu: goto label_3ac4bc;
        case 0x3ac4c0u: goto label_3ac4c0;
        case 0x3ac4c4u: goto label_3ac4c4;
        case 0x3ac4c8u: goto label_3ac4c8;
        case 0x3ac4ccu: goto label_3ac4cc;
        case 0x3ac4d0u: goto label_3ac4d0;
        case 0x3ac4d4u: goto label_3ac4d4;
        case 0x3ac4d8u: goto label_3ac4d8;
        case 0x3ac4dcu: goto label_3ac4dc;
        case 0x3ac4e0u: goto label_3ac4e0;
        case 0x3ac4e4u: goto label_3ac4e4;
        case 0x3ac4e8u: goto label_3ac4e8;
        case 0x3ac4ecu: goto label_3ac4ec;
        case 0x3ac4f0u: goto label_3ac4f0;
        case 0x3ac4f4u: goto label_3ac4f4;
        case 0x3ac4f8u: goto label_3ac4f8;
        case 0x3ac4fcu: goto label_3ac4fc;
        case 0x3ac500u: goto label_3ac500;
        case 0x3ac504u: goto label_3ac504;
        case 0x3ac508u: goto label_3ac508;
        case 0x3ac50cu: goto label_3ac50c;
        case 0x3ac510u: goto label_3ac510;
        case 0x3ac514u: goto label_3ac514;
        case 0x3ac518u: goto label_3ac518;
        case 0x3ac51cu: goto label_3ac51c;
        case 0x3ac520u: goto label_3ac520;
        case 0x3ac524u: goto label_3ac524;
        case 0x3ac528u: goto label_3ac528;
        case 0x3ac52cu: goto label_3ac52c;
        case 0x3ac530u: goto label_3ac530;
        case 0x3ac534u: goto label_3ac534;
        case 0x3ac538u: goto label_3ac538;
        case 0x3ac53cu: goto label_3ac53c;
        case 0x3ac540u: goto label_3ac540;
        case 0x3ac544u: goto label_3ac544;
        case 0x3ac548u: goto label_3ac548;
        case 0x3ac54cu: goto label_3ac54c;
        case 0x3ac550u: goto label_3ac550;
        case 0x3ac554u: goto label_3ac554;
        case 0x3ac558u: goto label_3ac558;
        case 0x3ac55cu: goto label_3ac55c;
        case 0x3ac560u: goto label_3ac560;
        case 0x3ac564u: goto label_3ac564;
        case 0x3ac568u: goto label_3ac568;
        case 0x3ac56cu: goto label_3ac56c;
        case 0x3ac570u: goto label_3ac570;
        case 0x3ac574u: goto label_3ac574;
        case 0x3ac578u: goto label_3ac578;
        case 0x3ac57cu: goto label_3ac57c;
        case 0x3ac580u: goto label_3ac580;
        case 0x3ac584u: goto label_3ac584;
        case 0x3ac588u: goto label_3ac588;
        case 0x3ac58cu: goto label_3ac58c;
        case 0x3ac590u: goto label_3ac590;
        case 0x3ac594u: goto label_3ac594;
        case 0x3ac598u: goto label_3ac598;
        case 0x3ac59cu: goto label_3ac59c;
        case 0x3ac5a0u: goto label_3ac5a0;
        case 0x3ac5a4u: goto label_3ac5a4;
        case 0x3ac5a8u: goto label_3ac5a8;
        case 0x3ac5acu: goto label_3ac5ac;
        case 0x3ac5b0u: goto label_3ac5b0;
        case 0x3ac5b4u: goto label_3ac5b4;
        case 0x3ac5b8u: goto label_3ac5b8;
        case 0x3ac5bcu: goto label_3ac5bc;
        case 0x3ac5c0u: goto label_3ac5c0;
        case 0x3ac5c4u: goto label_3ac5c4;
        case 0x3ac5c8u: goto label_3ac5c8;
        case 0x3ac5ccu: goto label_3ac5cc;
        case 0x3ac5d0u: goto label_3ac5d0;
        case 0x3ac5d4u: goto label_3ac5d4;
        case 0x3ac5d8u: goto label_3ac5d8;
        case 0x3ac5dcu: goto label_3ac5dc;
        case 0x3ac5e0u: goto label_3ac5e0;
        case 0x3ac5e4u: goto label_3ac5e4;
        case 0x3ac5e8u: goto label_3ac5e8;
        case 0x3ac5ecu: goto label_3ac5ec;
        default: break;
    }

    ctx->pc = 0x3ac2b8u;

label_3ac2b8:
    // 0x3ac2b8: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x3ac2b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_3ac2bc:
    // 0x3ac2bc: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x3ac2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_3ac2c0:
    // 0x3ac2c0: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x3ac2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_3ac2c4:
    // 0x3ac2c4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x3ac2c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3ac2c8:
    // 0x3ac2c8: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x3ac2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_3ac2cc:
    // 0x3ac2cc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3ac2ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ac2d0:
    // 0x3ac2d0: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x3ac2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_3ac2d4:
    // 0x3ac2d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3ac2d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ac2d8:
    // 0x3ac2d8: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x3ac2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
label_3ac2dc:
    // 0x3ac2dc: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3ac2dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3ac2e0:
    // 0x3ac2e0: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x3ac2e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_3ac2e4:
    // 0x3ac2e4: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x3ac2e4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3ac2e8:
    // 0x3ac2e8: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x3ac2e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_3ac2ec:
    // 0x3ac2ec: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x3ac2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_3ac2f0:
    // 0x3ac2f0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x3ac2f0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_3ac2f4:
    // 0x3ac2f4: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x3ac2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_3ac2f8:
    // 0x3ac2f8: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x3ac2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_3ac2fc:
    // 0x3ac2fc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3ac2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_3ac300:
    // 0x3ac300: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3ac300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3ac304:
    // 0x3ac304: 0xe7b70108  swc1        $f23, 0x108($sp)
    ctx->pc = 0x3ac304u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_3ac308:
    // 0x3ac308: 0xe7b60100  swc1        $f22, 0x100($sp)
    ctx->pc = 0x3ac308u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_3ac30c:
    // 0x3ac30c: 0xc1036d2  jal         func_40DB48
label_3ac310:
    if (ctx->pc == 0x3AC310u) {
        ctx->pc = 0x3AC310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC30Cu;
        // 0x3ac310: 0x8e440134  lw          $a0, 0x134($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 308)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC314u;
        goto label_3ac314;
    }
    ctx->pc = 0x3AC30Cu;
    SET_GPR_U32(ctx, 31, 0x3AC314u);
    ctx->pc = 0x3AC310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC30Cu;
    // 0x3ac310: 0x8e440134  lw          $a0, 0x134($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 308)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3AC30Cu, 0x3AC314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC314u;
label_3ac314:
    // 0x3ac314: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x3ac314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_3ac318:
    // 0x3ac318: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ac318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ac31c:
    // 0x3ac31c: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x3ac31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ac320:
    // 0x3ac320: 0x46140543  div.s       $f21, $f0, $f20
    ctx->pc = 0x3ac320u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
label_3ac324:
    // 0x3ac324: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
label_3ac328:
    if (ctx->pc == 0x3AC328u) {
        ctx->pc = 0x3AC32Cu;
        goto label_3ac32c;
    }
    ctx->pc = 0x3AC324u;
    {
        const bool branch_taken_0x3ac324 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ac324) {
            ctx->pc = 0x3AC348u;
            goto label_3ac348;
        }
    }
    ctx->pc = 0x3AC32Cu;
label_3ac32c:
    // 0x3ac32c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_3ac330:
    if (ctx->pc == 0x3AC330u) {
        ctx->pc = 0x3AC330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC32Cu;
        // 0x3ac330: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC334u;
        goto label_3ac334;
    }
    ctx->pc = 0x3AC32Cu;
    {
        const bool branch_taken_0x3ac32c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC32Cu;
        // 0x3ac330: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac32c) {
            ctx->pc = 0x3AC33Cu;
            goto label_3ac33c;
        }
    }
    ctx->pc = 0x3AC334u;
label_3ac334:
    // 0x3ac334: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
label_3ac338:
    if (ctx->pc == 0x3AC338u) {
        ctx->pc = 0x3AC338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC334u;
        // 0x3ac338: 0x4600a5c6  mov.s       $f23, $f20 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC33Cu;
        goto label_3ac33c;
    }
    ctx->pc = 0x3AC334u;
    {
        const bool branch_taken_0x3ac334 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3AC338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC334u;
        // 0x3ac338: 0x4600a5c6  mov.s       $f23, $f20 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac334) {
            ctx->pc = 0x3AC354u;
            goto label_3ac354;
        }
    }
    ctx->pc = 0x3AC33Cu;
label_3ac33c:
    // 0x3ac33c: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x3ac33cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3ac340:
    // 0x3ac340: 0x10000004  b           . + 4 + (0x4 << 2)
label_3ac344:
    if (ctx->pc == 0x3AC344u) {
        ctx->pc = 0x3AC348u;
        goto label_3ac348;
    }
    ctx->pc = 0x3AC340u;
    {
        const bool branch_taken_0x3ac340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ac340) {
            ctx->pc = 0x3AC354u;
            goto label_3ac354;
        }
    }
    ctx->pc = 0x3AC348u;
label_3ac348:
    // 0x3ac348: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3ac348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3ac34c:
    // 0x3ac34c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3ac34cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ac350:
    // 0x3ac350: 0x4600a5c2  mul.s       $f23, $f20, $f0
    ctx->pc = 0x3ac350u;
    ctx->f[23] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_3ac354:
    // 0x3ac354: 0x12400096  beqz        $s2, . + 4 + (0x96 << 2)
label_3ac358:
    if (ctx->pc == 0x3AC358u) {
        ctx->pc = 0x3AC358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC354u;
        // 0x3ac358: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC35Cu;
        goto label_3ac35c;
    }
    ctx->pc = 0x3AC354u;
    {
        const bool branch_taken_0x3ac354 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC354u;
        // 0x3ac358: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac354) {
            ctx->pc = 0x3AC5B0u;
            goto label_3ac5b0;
        }
    }
    ctx->pc = 0x3AC35Cu;
label_3ac35c:
    // 0x3ac35c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x3ac35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3ac360:
    // 0x3ac360: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x3ac360u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3ac364:
    // 0x3ac364: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3ac364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_3ac368:
    // 0x3ac368: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3ac36c:
    if (ctx->pc == 0x3AC36Cu) {
        ctx->pc = 0x3AC36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC368u;
        // 0x3ac36c: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC370u;
        goto label_3ac370;
    }
    ctx->pc = 0x3AC368u;
    {
        const bool branch_taken_0x3ac368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC368u;
        // 0x3ac36c: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac368) {
            ctx->pc = 0x3AC37Cu;
            goto label_3ac37c;
        }
    }
    ctx->pc = 0x3AC370u;
label_3ac370:
    // 0x3ac370: 0x241500ff  addiu       $s5, $zero, 0xFF
    ctx->pc = 0x3ac370u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_3ac374:
    // 0x3ac374: 0x10000004  b           . + 4 + (0x4 << 2)
label_3ac378:
    if (ctx->pc == 0x3AC378u) {
        ctx->pc = 0x3AC378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC374u;
        // 0x3ac378: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC37Cu;
        goto label_3ac37c;
    }
    ctx->pc = 0x3AC374u;
    {
        const bool branch_taken_0x3ac374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC374u;
        // 0x3ac378: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac374) {
            ctx->pc = 0x3AC388u;
            goto label_3ac388;
        }
    }
    ctx->pc = 0x3AC37Cu;
label_3ac37c:
    // 0x3ac37c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x3ac37cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ac380:
    // 0x3ac380: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3ac380u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ac384:
    // 0x3ac384: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3ac384u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ac388:
    // 0x3ac388: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x3ac388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ac38c:
    // 0x3ac38c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3ac38cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ac390:
    // 0x3ac390: 0xc681000c  lwc1        $f1, 0xC($s4)
    ctx->pc = 0x3ac390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3ac394:
    // 0x3ac394: 0xb72021  addu        $a0, $a1, $s7
    ctx->pc = 0x3ac394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
label_3ac398:
    // 0x3ac398: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x3ac398u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ac39c:
    // 0x3ac39c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3ac39cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3ac3a0:
    // 0x3ac3a0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x3ac3a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3ac3a4:
    // 0x3ac3a4: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x3ac3a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_3ac3a8:
    // 0x3ac3a8: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x3ac3a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3ac3ac:
    // 0x3ac3ac: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3ac3acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3ac3b0:
    // 0x3ac3b0: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3ac3b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3ac3b4:
    // 0x3ac3b4: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x3ac3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
label_3ac3b8:
    // 0x3ac3b8: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3ac3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_3ac3bc:
    // 0x3ac3bc: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x3ac3bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3ac3c0:
    // 0x3ac3c0: 0x1880006f  blez        $a0, . + 4 + (0x6F << 2)
label_3ac3c4:
    if (ctx->pc == 0x3AC3C4u) {
        ctx->pc = 0x3AC3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC3C0u;
        // 0x3ac3c4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC3C8u;
        goto label_3ac3c8;
    }
    ctx->pc = 0x3AC3C0u;
    {
        const bool branch_taken_0x3ac3c0 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x3AC3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC3C0u;
        // 0x3ac3c4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac3c0) {
            ctx->pc = 0x3AC580u;
            goto label_3ac580;
        }
    }
    ctx->pc = 0x3AC3C8u;
label_3ac3c8:
    // 0x3ac3c8: 0x26560024  addiu       $s6, $s2, 0x24
    ctx->pc = 0x3ac3c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
label_3ac3cc:
    // 0x3ac3cc: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0x3ac3ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3ac3d0:
    // 0x3ac3d0: 0x2409000a  addiu       $t1, $zero, 0xA
    ctx->pc = 0x3ac3d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3ac3d4:
    // 0x3ac3d4: 0x28820080  slti        $v0, $a0, 0x80
    ctx->pc = 0x3ac3d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)128) ? 1 : 0);
label_3ac3d8:
    // 0x3ac3d8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_3ac3dc:
    if (ctx->pc == 0x3AC3DCu) {
        ctx->pc = 0x3AC3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC3D8u;
        // 0x3ac3dc: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC3E0u;
        goto label_3ac3e0;
    }
    ctx->pc = 0x3AC3D8u;
    {
        const bool branch_taken_0x3ac3d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AC3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC3D8u;
        // 0x3ac3dc: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac3d8) {
            ctx->pc = 0x3AC408u;
            goto label_3ac408;
        }
    }
    ctx->pc = 0x3AC3E0u;
label_3ac3e0:
    // 0x3ac3e0: 0x8e420124  lw          $v0, 0x124($s2)
    ctx->pc = 0x3ac3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 292)));
label_3ac3e4:
    // 0x3ac3e4: 0x823023  subu        $a2, $a0, $v0
    ctx->pc = 0x3ac3e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3ac3e8:
    // 0x3ac3e8: 0x4c20009  bltzl       $a2, . + 4 + (0x9 << 2)
label_3ac3ec:
    if (ctx->pc == 0x3AC3ECu) {
        ctx->pc = 0x3AC3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC3E8u;
        // 0x3ac3ec: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC3F0u;
        goto label_3ac3f0;
    }
    ctx->pc = 0x3AC3E8u;
    {
        const bool branch_taken_0x3ac3e8 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x3ac3e8) {
            ctx->pc = 0x3AC3ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AC3E8u;
            // 0x3ac3ec: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AC410u;
            goto label_3ac410;
        }
    }
    ctx->pc = 0x3AC3F0u;
label_3ac3f0:
    // 0x3ac3f0: 0x8e420128  lw          $v0, 0x128($s2)
    ctx->pc = 0x3ac3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 296)));
label_3ac3f4:
    // 0x3ac3f4: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x3ac3f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3ac3f8:
    // 0x3ac3f8: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_3ac3fc:
    if (ctx->pc == 0x3AC3FCu) {
        ctx->pc = 0x3AC3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC3F8u;
        // 0x3ac3fc: 0x8e43012c  lw          $v1, 0x12C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 300)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC400u;
        goto label_3ac400;
    }
    ctx->pc = 0x3AC3F8u;
    {
        const bool branch_taken_0x3ac3f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ac3f8) {
            ctx->pc = 0x3AC3FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AC3F8u;
            // 0x3ac3fc: 0x8e43012c  lw          $v1, 0x12C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 300)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AC428u;
            goto label_3ac428;
        }
    }
    ctx->pc = 0x3AC400u;
label_3ac400:
    // 0x3ac400: 0x10000003  b           . + 4 + (0x3 << 2)
label_3ac404:
    if (ctx->pc == 0x3AC404u) {
        ctx->pc = 0x3AC404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC400u;
        // 0x3ac404: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC408u;
        goto label_3ac408;
    }
    ctx->pc = 0x3AC400u;
    {
        const bool branch_taken_0x3ac400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC400u;
        // 0x3ac404: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac400) {
            ctx->pc = 0x3AC410u;
            goto label_3ac410;
        }
    }
    ctx->pc = 0x3AC408u;
label_3ac408:
    // 0x3ac408: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x3ac408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_3ac40c:
    // 0x3ac40c: 0x84460000  lh          $a2, 0x0($v0)
    ctx->pc = 0x3ac40cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3ac410:
    // 0x3ac410: 0x11000008  beqz        $t0, . + 4 + (0x8 << 2)
label_3ac414:
    if (ctx->pc == 0x3AC414u) {
        ctx->pc = 0x3AC418u;
        goto label_3ac418;
    }
    ctx->pc = 0x3AC410u;
    {
        const bool branch_taken_0x3ac410 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ac410) {
            ctx->pc = 0x3AC434u;
            goto label_3ac434;
        }
    }
    ctx->pc = 0x3AC418u;
label_3ac418:
    // 0x3ac418: 0x148a0006  bne         $a0, $t2, . + 4 + (0x6 << 2)
label_3ac41c:
    if (ctx->pc == 0x3AC41Cu) {
        ctx->pc = 0x3AC41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC418u;
        // 0x3ac41c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC420u;
        goto label_3ac420;
    }
    ctx->pc = 0x3AC418u;
    {
        const bool branch_taken_0x3ac418 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 10));
        ctx->pc = 0x3AC41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC418u;
        // 0x3ac41c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac418) {
            ctx->pc = 0x3AC434u;
            goto label_3ac434;
        }
    }
    ctx->pc = 0x3AC420u;
label_3ac420:
    // 0x3ac420: 0x10000007  b           . + 4 + (0x7 << 2)
label_3ac424:
    if (ctx->pc == 0x3AC424u) {
        ctx->pc = 0x3AC424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC420u;
        // 0x3ac424: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC428u;
        goto label_3ac428;
    }
    ctx->pc = 0x3AC420u;
    {
        const bool branch_taken_0x3ac420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC420u;
        // 0x3ac424: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac420) {
            ctx->pc = 0x3AC440u;
            goto label_3ac440;
        }
    }
    ctx->pc = 0x3AC428u;
label_3ac428:
    // 0x3ac428: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x3ac428u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_3ac42c:
    // 0x3ac42c: 0x1000fff7  b           . + 4 + (-0x9 << 2)
label_3ac430:
    if (ctx->pc == 0x3AC430u) {
        ctx->pc = 0x3AC430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC42Cu;
        // 0x3ac430: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC434u;
        goto label_3ac434;
    }
    ctx->pc = 0x3AC42Cu;
    {
        const bool branch_taken_0x3ac42c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC42Cu;
        // 0x3ac430: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac42c) {
            ctx->pc = 0x3AC40Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ac40c;
        }
    }
    ctx->pc = 0x3AC434u;
label_3ac434:
    // 0x3ac434: 0x14890003  bne         $a0, $t1, . + 4 + (0x3 << 2)
label_3ac438:
    if (ctx->pc == 0x3AC438u) {
        ctx->pc = 0x3AC438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC434u;
        // 0x3ac438: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC43Cu;
        goto label_3ac43c;
    }
    ctx->pc = 0x3AC434u;
    {
        const bool branch_taken_0x3ac434 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 9));
        ctx->pc = 0x3AC438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC434u;
        // 0x3ac438: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac434) {
            ctx->pc = 0x3AC444u;
            goto label_3ac444;
        }
    }
    ctx->pc = 0x3AC43Cu;
label_3ac43c:
    // 0x3ac43c: 0xf38821  addu        $s1, $a3, $s3
    ctx->pc = 0x3ac43cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
label_3ac440:
    // 0x3ac440: 0x46001586  mov.s       $f22, $f2
    ctx->pc = 0x3ac440u;
    ctx->f[22] = FPU_MOV_S(ctx->f[2]);
label_3ac444:
    // 0x3ac444: 0x4c00007  bltz        $a2, . + 4 + (0x7 << 2)
label_3ac448:
    if (ctx->pc == 0x3AC448u) {
        ctx->pc = 0x3AC448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC444u;
        // 0x3ac448: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC44Cu;
        goto label_3ac44c;
    }
    ctx->pc = 0x3AC444u;
    {
        const bool branch_taken_0x3ac444 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x3AC448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC444u;
        // 0x3ac448: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac444) {
            ctx->pc = 0x3AC464u;
            goto label_3ac464;
        }
    }
    ctx->pc = 0x3AC44Cu;
label_3ac44c:
    // 0x3ac44c: 0x61140  sll         $v0, $a2, 5
    ctx->pc = 0x3ac44cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_3ac450:
    // 0x3ac450: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x3ac450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3ac454:
    // 0x3ac454: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3ac454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3ac458:
    // 0x3ac458: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3ac458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ac45c:
    // 0x3ac45c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3ac45cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3ac460:
    // 0x3ac460: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x3ac460u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_3ac464:
    // 0x3ac464: 0x4602a834  c.lt.s      $f21, $f2
    ctx->pc = 0x3ac464u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3ac468:
    // 0x3ac468: 0x0  nop
    ctx->pc = 0x3ac468u;
    // NOP
label_3ac46c:
    // 0x3ac46c: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
label_3ac470:
    if (ctx->pc == 0x3AC470u) {
        ctx->pc = 0x3AC470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC46Cu;
        // 0x3ac470: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC474u;
        goto label_3ac474;
    }
    ctx->pc = 0x3AC46Cu;
    {
        const bool branch_taken_0x3ac46c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ac46c) {
            ctx->pc = 0x3AC470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AC46Cu;
            // 0x3ac470: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AC480u;
            goto label_3ac480;
        }
    }
    ctx->pc = 0x3AC474u;
label_3ac474:
    // 0x3ac474: 0x1489003a  bne         $a0, $t1, . + 4 + (0x3A << 2)
label_3ac478:
    if (ctx->pc == 0x3AC478u) {
        ctx->pc = 0x3AC478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC474u;
        // 0x3ac478: 0xf33821  addu        $a3, $a3, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC47Cu;
        goto label_3ac47c;
    }
    ctx->pc = 0x3AC474u;
    {
        const bool branch_taken_0x3ac474 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 9));
        ctx->pc = 0x3AC478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC474u;
        // 0x3ac478: 0xf33821  addu        $a3, $a3, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac474) {
            ctx->pc = 0x3AC560u;
            goto label_3ac560;
        }
    }
    ctx->pc = 0x3AC47Cu;
label_3ac47c:
    // 0x3ac47c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x3ac47cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_3ac480:
    // 0x3ac480: 0x2378021  addu        $s0, $s1, $s7
    ctx->pc = 0x3ac480u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
label_3ac484:
    // 0x3ac484: 0x4616a841  sub.s       $f1, $f21, $f22
    ctx->pc = 0x3ac484u;
    ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[22]);
label_3ac488:
    // 0x3ac488: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ac488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ac48c:
    // 0x3ac48c: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x3ac48cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
label_3ac490:
    // 0x3ac490: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3ac490u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3ac494:
    // 0x3ac494: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3ac494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ac498:
    // 0x3ac498: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x3ac498u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3ac49c:
    // 0x3ac49c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x3ac49cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_3ac4a0:
    // 0x3ac4a0: 0x46170842  mul.s       $f1, $f1, $f23
    ctx->pc = 0x3ac4a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
label_3ac4a4:
    // 0x3ac4a4: 0xa3a20011  sb          $v0, 0x11($sp)
    ctx->pc = 0x3ac4a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 2));
label_3ac4a8:
    // 0x3ac4a8: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x3ac4a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_3ac4ac:
    // 0x3ac4ac: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x3ac4acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_3ac4b0:
    // 0x3ac4b0: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x3ac4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ac4b4:
    // 0x3ac4b4: 0x8e420138  lw          $v0, 0x138($s2)
    ctx->pc = 0x3ac4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 312)));
label_3ac4b8:
    // 0x3ac4b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3ac4b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3ac4bc:
    // 0x3ac4bc: 0x7fa90030  sq          $t1, 0x30($sp)
    ctx->pc = 0x3ac4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 9));
label_3ac4c0:
    // 0x3ac4c0: 0x7faa0040  sq          $t2, 0x40($sp)
    ctx->pc = 0x3ac4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 10));
label_3ac4c4:
    // 0x3ac4c4: 0x40f809  jalr        $v0
label_3ac4c8:
    if (ctx->pc == 0x3AC4C8u) {
        ctx->pc = 0x3AC4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC4C4u;
        // 0x3ac4c8: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC4CCu;
        goto label_3ac4cc;
    }
    ctx->pc = 0x3AC4C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AC4CCu);
        ctx->pc = 0x3AC4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC4C4u;
        // 0x3ac4c8: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC4C4u, 0x3AC4CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AC4CCu;
label_3ac4cc:
    // 0x3ac4cc: 0x93a30010  lbu         $v1, 0x10($sp)
    ctx->pc = 0x3ac4ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
label_3ac4d0:
    // 0x3ac4d0: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x3ac4d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
label_3ac4d4:
    // 0x3ac4d4: 0x93a40011  lbu         $a0, 0x11($sp)
    ctx->pc = 0x3ac4d4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 17)));
label_3ac4d8:
    // 0x3ac4d8: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x3ac4d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
label_3ac4dc:
    // 0x3ac4dc: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x3ac4dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3ac4e0:
    // 0x3ac4e0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x3ac4e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_3ac4e4:
    // 0x3ac4e4: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x3ac4e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
label_3ac4e8:
    // 0x3ac4e8: 0x7baa0040  lq          $t2, 0x40($sp)
    ctx->pc = 0x3ac4e8u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ac4ec:
    // 0x3ac4ec: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3ac4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_3ac4f0:
    // 0x3ac4f0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ac4f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3ac4f4:
    // 0x3ac4f4: 0x146a000d  bne         $v1, $t2, . + 4 + (0xD << 2)
label_3ac4f8:
    if (ctx->pc == 0x3AC4F8u) {
        ctx->pc = 0x3AC4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC4F4u;
        // 0x3ac4f8: 0x7ba90030  lq          $t1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC4FCu;
        goto label_3ac4fc;
    }
    ctx->pc = 0x3AC4F4u;
    {
        const bool branch_taken_0x3ac4f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 10));
        ctx->pc = 0x3AC4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC4F4u;
        // 0x3ac4f8: 0x7ba90030  lq          $t1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac4f4) {
            ctx->pc = 0x3AC52Cu;
            goto label_3ac52c;
        }
    }
    ctx->pc = 0x3AC4FCu;
label_3ac4fc:
    // 0x3ac4fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3ac4fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ac500:
    // 0x3ac500: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x3ac500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3ac504:
    // 0x3ac504: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ac504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ac508:
    // 0x3ac508: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x3ac508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_3ac50c:
    // 0x3ac50c: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x3ac50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_3ac510:
    // 0x3ac510: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3ac510u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3ac514:
    // 0x3ac514: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3ac514u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3ac518:
    // 0x3ac518: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x3ac518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
label_3ac51c:
    // 0x3ac51c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3ac51cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_3ac520:
    // 0x3ac520: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ac520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3ac524:
    // 0x3ac524: 0x1066fff8  beq         $v1, $a2, . + 4 + (-0x8 << 2)
label_3ac528:
    if (ctx->pc == 0x3AC528u) {
        ctx->pc = 0x3AC528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC524u;
        // 0x3ac528: 0x2338821  addu        $s1, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC52Cu;
        goto label_3ac52c;
    }
    ctx->pc = 0x3AC524u;
    {
        const bool branch_taken_0x3ac524 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x3AC528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC524u;
        // 0x3ac528: 0x2338821  addu        $s1, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac524) {
            ctx->pc = 0x3AC508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ac508;
        }
    }
    ctx->pc = 0x3AC52Cu;
label_3ac52c:
    // 0x3ac52c: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x3ac52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ac530:
    // 0x3ac530: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3ac530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ac534:
    // 0x3ac534: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x3ac534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3ac538:
    // 0x3ac538: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x3ac538u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ac53c:
    // 0x3ac53c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x3ac53cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_3ac540:
    // 0x3ac540: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3ac540u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ac544:
    // 0x3ac544: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x3ac544u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3ac548:
    // 0x3ac548: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3ac548u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3ac54c:
    // 0x3ac54c: 0x0  nop
    ctx->pc = 0x3ac54cu;
    // NOP
label_3ac550:
    // 0x3ac550: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_3ac554:
    if (ctx->pc == 0x3AC554u) {
        ctx->pc = 0x3AC554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC550u;
        // 0x3ac554: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC558u;
        goto label_3ac558;
    }
    ctx->pc = 0x3AC550u;
    {
        const bool branch_taken_0x3ac550 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3AC554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC550u;
        // 0x3ac554: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac550) {
            ctx->pc = 0x3AC560u;
            goto label_3ac560;
        }
    }
    ctx->pc = 0x3AC558u;
label_3ac558:
    // 0x3ac558: 0x10000015  b           . + 4 + (0x15 << 2)
label_3ac55c:
    if (ctx->pc == 0x3AC55Cu) {
        ctx->pc = 0x3AC55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC558u;
        // 0x3ac55c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC560u;
        goto label_3ac560;
    }
    ctx->pc = 0x3AC558u;
    {
        const bool branch_taken_0x3ac558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC558u;
        // 0x3ac55c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac558) {
            ctx->pc = 0x3AC5B0u;
            goto label_3ac5b0;
        }
    }
    ctx->pc = 0x3AC560u;
label_3ac560:
    // 0x3ac560: 0xf71021  addu        $v0, $a3, $s7
    ctx->pc = 0x3ac560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 23)));
label_3ac564:
    // 0x3ac564: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x3ac564u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_3ac568:
    // 0x3ac568: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3ac568u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3ac56c:
    // 0x3ac56c: 0x751824  and         $v1, $v1, $s5
    ctx->pc = 0x3ac56cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 21));
label_3ac570:
    // 0x3ac570: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x3ac570u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_3ac574:
    // 0x3ac574: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3ac574u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3ac578:
    // 0x3ac578: 0x1c80ff97  bgtz        $a0, . + 4 + (-0x69 << 2)
label_3ac57c:
    if (ctx->pc == 0x3AC57Cu) {
        ctx->pc = 0x3AC57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC578u;
        // 0x3ac57c: 0x28820080  slti        $v0, $a0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC580u;
        goto label_3ac580;
    }
    ctx->pc = 0x3AC578u;
    {
        const bool branch_taken_0x3ac578 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x3AC57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC578u;
        // 0x3ac57c: 0x28820080  slti        $v0, $a0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac578) {
            ctx->pc = 0x3AC3D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ac3d8;
        }
    }
    ctx->pc = 0x3AC580u;
label_3ac580:
    // 0x3ac580: 0x4602a801  sub.s       $f0, $f21, $f2
    ctx->pc = 0x3ac580u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[2]);
label_3ac584:
    // 0x3ac584: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x3ac584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3ac588:
    // 0x3ac588: 0x8e420138  lw          $v0, 0x138($s2)
    ctx->pc = 0x3ac588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 312)));
label_3ac58c:
    // 0x3ac58c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3ac58cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3ac590:
    // 0x3ac590: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x3ac590u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3ac594:
    // 0x3ac594: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ac594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ac598:
    // 0x3ac598: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x3ac598u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_3ac59c:
    // 0x3ac59c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3ac59cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ac5a0:
    // 0x3ac5a0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3ac5a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3ac5a4:
    // 0x3ac5a4: 0x40f809  jalr        $v0
label_3ac5a8:
    if (ctx->pc == 0x3AC5A8u) {
        ctx->pc = 0x3AC5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC5A4u;
        // 0x3ac5a8: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC5ACu;
        goto label_3ac5ac;
    }
    ctx->pc = 0x3AC5A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AC5ACu);
        ctx->pc = 0x3AC5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC5A4u;
        // 0x3ac5a8: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC5A4u, 0x3AC5ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AC5ACu;
label_3ac5ac:
    // 0x3ac5ac: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3ac5acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ac5b0:
    // 0x3ac5b0: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x3ac5b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3ac5b4:
    // 0x3ac5b4: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x3ac5b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3ac5b8:
    // 0x3ac5b8: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x3ac5b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3ac5bc:
    // 0x3ac5bc: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x3ac5bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3ac5c0:
    // 0x3ac5c0: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x3ac5c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3ac5c4:
    // 0x3ac5c4: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x3ac5c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3ac5c8:
    // 0x3ac5c8: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x3ac5c8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3ac5cc:
    // 0x3ac5cc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3ac5ccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3ac5d0:
    // 0x3ac5d0: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x3ac5d0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3ac5d4:
    // 0x3ac5d4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3ac5d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3ac5d8:
    // 0x3ac5d8: 0xc7b70108  lwc1        $f23, 0x108($sp)
    ctx->pc = 0x3ac5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3ac5dc:
    // 0x3ac5dc: 0xc7b60100  lwc1        $f22, 0x100($sp)
    ctx->pc = 0x3ac5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3ac5e0:
    // 0x3ac5e0: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x3ac5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3ac5e4:
    // 0x3ac5e4: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x3ac5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3ac5e8:
    // 0x3ac5e8: 0x3e00008  jr          $ra
label_3ac5ec:
    if (ctx->pc == 0x3AC5ECu) {
        ctx->pc = 0x3AC5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC5E8u;
        // 0x3ac5ec: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC5F0u;
        goto label_fallthrough_0x3ac5e8;
    }
    ctx->pc = 0x3AC5E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AC5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC5E8u;
        // 0x3ac5ec: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC5E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3ac5e8:
    ctx->pc = 0x3AC5F0u;
}
