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

// Function: sub_00372220
// Address: 0x372220 - 0x3724c8
void sub_00372220_0x372220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00372220_0x372220");
#endif

    switch (ctx->pc) {
        case 0x372220u: goto label_372220;
        case 0x372224u: goto label_372224;
        case 0x372228u: goto label_372228;
        case 0x37222cu: goto label_37222c;
        case 0x372230u: goto label_372230;
        case 0x372234u: goto label_372234;
        case 0x372238u: goto label_372238;
        case 0x37223cu: goto label_37223c;
        case 0x372240u: goto label_372240;
        case 0x372244u: goto label_372244;
        case 0x372248u: goto label_372248;
        case 0x37224cu: goto label_37224c;
        case 0x372250u: goto label_372250;
        case 0x372254u: goto label_372254;
        case 0x372258u: goto label_372258;
        case 0x37225cu: goto label_37225c;
        case 0x372260u: goto label_372260;
        case 0x372264u: goto label_372264;
        case 0x372268u: goto label_372268;
        case 0x37226cu: goto label_37226c;
        case 0x372270u: goto label_372270;
        case 0x372274u: goto label_372274;
        case 0x372278u: goto label_372278;
        case 0x37227cu: goto label_37227c;
        case 0x372280u: goto label_372280;
        case 0x372284u: goto label_372284;
        case 0x372288u: goto label_372288;
        case 0x37228cu: goto label_37228c;
        case 0x372290u: goto label_372290;
        case 0x372294u: goto label_372294;
        case 0x372298u: goto label_372298;
        case 0x37229cu: goto label_37229c;
        case 0x3722a0u: goto label_3722a0;
        case 0x3722a4u: goto label_3722a4;
        case 0x3722a8u: goto label_3722a8;
        case 0x3722acu: goto label_3722ac;
        case 0x3722b0u: goto label_3722b0;
        case 0x3722b4u: goto label_3722b4;
        case 0x3722b8u: goto label_3722b8;
        case 0x3722bcu: goto label_3722bc;
        case 0x3722c0u: goto label_3722c0;
        case 0x3722c4u: goto label_3722c4;
        case 0x3722c8u: goto label_3722c8;
        case 0x3722ccu: goto label_3722cc;
        case 0x3722d0u: goto label_3722d0;
        case 0x3722d4u: goto label_3722d4;
        case 0x3722d8u: goto label_3722d8;
        case 0x3722dcu: goto label_3722dc;
        case 0x3722e0u: goto label_3722e0;
        case 0x3722e4u: goto label_3722e4;
        case 0x3722e8u: goto label_3722e8;
        case 0x3722ecu: goto label_3722ec;
        case 0x3722f0u: goto label_3722f0;
        case 0x3722f4u: goto label_3722f4;
        case 0x3722f8u: goto label_3722f8;
        case 0x3722fcu: goto label_3722fc;
        case 0x372300u: goto label_372300;
        case 0x372304u: goto label_372304;
        case 0x372308u: goto label_372308;
        case 0x37230cu: goto label_37230c;
        case 0x372310u: goto label_372310;
        case 0x372314u: goto label_372314;
        case 0x372318u: goto label_372318;
        case 0x37231cu: goto label_37231c;
        case 0x372320u: goto label_372320;
        case 0x372324u: goto label_372324;
        case 0x372328u: goto label_372328;
        case 0x37232cu: goto label_37232c;
        case 0x372330u: goto label_372330;
        case 0x372334u: goto label_372334;
        case 0x372338u: goto label_372338;
        case 0x37233cu: goto label_37233c;
        case 0x372340u: goto label_372340;
        case 0x372344u: goto label_372344;
        case 0x372348u: goto label_372348;
        case 0x37234cu: goto label_37234c;
        case 0x372350u: goto label_372350;
        case 0x372354u: goto label_372354;
        case 0x372358u: goto label_372358;
        case 0x37235cu: goto label_37235c;
        case 0x372360u: goto label_372360;
        case 0x372364u: goto label_372364;
        case 0x372368u: goto label_372368;
        case 0x37236cu: goto label_37236c;
        case 0x372370u: goto label_372370;
        case 0x372374u: goto label_372374;
        case 0x372378u: goto label_372378;
        case 0x37237cu: goto label_37237c;
        case 0x372380u: goto label_372380;
        case 0x372384u: goto label_372384;
        case 0x372388u: goto label_372388;
        case 0x37238cu: goto label_37238c;
        case 0x372390u: goto label_372390;
        case 0x372394u: goto label_372394;
        case 0x372398u: goto label_372398;
        case 0x37239cu: goto label_37239c;
        case 0x3723a0u: goto label_3723a0;
        case 0x3723a4u: goto label_3723a4;
        case 0x3723a8u: goto label_3723a8;
        case 0x3723acu: goto label_3723ac;
        case 0x3723b0u: goto label_3723b0;
        case 0x3723b4u: goto label_3723b4;
        case 0x3723b8u: goto label_3723b8;
        case 0x3723bcu: goto label_3723bc;
        case 0x3723c0u: goto label_3723c0;
        case 0x3723c4u: goto label_3723c4;
        case 0x3723c8u: goto label_3723c8;
        case 0x3723ccu: goto label_3723cc;
        case 0x3723d0u: goto label_3723d0;
        case 0x3723d4u: goto label_3723d4;
        case 0x3723d8u: goto label_3723d8;
        case 0x3723dcu: goto label_3723dc;
        case 0x3723e0u: goto label_3723e0;
        case 0x3723e4u: goto label_3723e4;
        case 0x3723e8u: goto label_3723e8;
        case 0x3723ecu: goto label_3723ec;
        case 0x3723f0u: goto label_3723f0;
        case 0x3723f4u: goto label_3723f4;
        case 0x3723f8u: goto label_3723f8;
        case 0x3723fcu: goto label_3723fc;
        case 0x372400u: goto label_372400;
        case 0x372404u: goto label_372404;
        case 0x372408u: goto label_372408;
        case 0x37240cu: goto label_37240c;
        case 0x372410u: goto label_372410;
        case 0x372414u: goto label_372414;
        case 0x372418u: goto label_372418;
        case 0x37241cu: goto label_37241c;
        case 0x372420u: goto label_372420;
        case 0x372424u: goto label_372424;
        case 0x372428u: goto label_372428;
        case 0x37242cu: goto label_37242c;
        case 0x372430u: goto label_372430;
        case 0x372434u: goto label_372434;
        case 0x372438u: goto label_372438;
        case 0x37243cu: goto label_37243c;
        case 0x372440u: goto label_372440;
        case 0x372444u: goto label_372444;
        case 0x372448u: goto label_372448;
        case 0x37244cu: goto label_37244c;
        case 0x372450u: goto label_372450;
        case 0x372454u: goto label_372454;
        case 0x372458u: goto label_372458;
        case 0x37245cu: goto label_37245c;
        case 0x372460u: goto label_372460;
        case 0x372464u: goto label_372464;
        case 0x372468u: goto label_372468;
        case 0x37246cu: goto label_37246c;
        case 0x372470u: goto label_372470;
        case 0x372474u: goto label_372474;
        case 0x372478u: goto label_372478;
        case 0x37247cu: goto label_37247c;
        case 0x372480u: goto label_372480;
        case 0x372484u: goto label_372484;
        case 0x372488u: goto label_372488;
        case 0x37248cu: goto label_37248c;
        case 0x372490u: goto label_372490;
        case 0x372494u: goto label_372494;
        case 0x372498u: goto label_372498;
        case 0x37249cu: goto label_37249c;
        case 0x3724a0u: goto label_3724a0;
        case 0x3724a4u: goto label_3724a4;
        case 0x3724a8u: goto label_3724a8;
        case 0x3724acu: goto label_3724ac;
        case 0x3724b0u: goto label_3724b0;
        case 0x3724b4u: goto label_3724b4;
        case 0x3724b8u: goto label_3724b8;
        case 0x3724bcu: goto label_3724bc;
        case 0x3724c0u: goto label_3724c0;
        case 0x3724c4u: goto label_3724c4;
        default: break;
    }

    ctx->pc = 0x372220u;

label_372220:
    // 0x372220: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x372220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_372224:
    // 0x372224: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x372224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_372228:
    // 0x372228: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x372228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_37222c:
    // 0x37222c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x37222cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_372230:
    // 0x372230: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x372230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_372234:
    // 0x372234: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x372234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_372238:
    // 0x372238: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x372238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_37223c:
    // 0x37223c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x37223cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_372240:
    // 0x372240: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x372240u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_372244:
    // 0x372244: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x372244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_372248:
    // 0x372248: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x372248u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_37224c:
    // 0x37224c: 0x1220003e  beqz        $s1, . + 4 + (0x3E << 2)
label_372250:
    if (ctx->pc == 0x372250u) {
        ctx->pc = 0x372250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37224Cu;
        // 0x372250: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x372254u;
        goto label_372254;
    }
    ctx->pc = 0x37224Cu;
    {
        const bool branch_taken_0x37224c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x372250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37224Cu;
        // 0x372250: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37224c) {
            ctx->pc = 0x372348u;
            goto label_372348;
        }
    }
    ctx->pc = 0x372254u;
label_372254:
    // 0x372254: 0x2454e880  addiu       $s4, $v0, -0x1780
    ctx->pc = 0x372254u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_372258:
    // 0x372258: 0x8e30000c  lw          $s0, 0xC($s1)
    ctx->pc = 0x372258u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_37225c:
    // 0x37225c: 0x0  nop
    ctx->pc = 0x37225cu;
    // NOP
label_372260:
    // 0x372260: 0x16000002  bnez        $s0, . + 4 + (0x2 << 2)
label_372264:
    if (ctx->pc == 0x372264u) {
        ctx->pc = 0x372264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372260u;
        // 0x372264: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x372268u;
        goto label_372268;
    }
    ctx->pc = 0x372260u;
    {
        const bool branch_taken_0x372260 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x372264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372260u;
        // 0x372264: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372260) {
            ctx->pc = 0x37226Cu;
            goto label_37226c;
        }
    }
    ctx->pc = 0x372268u;
label_372268:
    // 0x372268: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x372268u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_37226c:
    // 0x37226c: 0x8e12000c  lw          $s2, 0xC($s0)
    ctx->pc = 0x37226cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_372270:
    // 0x372270: 0x16400002  bnez        $s2, . + 4 + (0x2 << 2)
label_372274:
    if (ctx->pc == 0x372274u) {
        ctx->pc = 0x372274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372270u;
        // 0x372274: 0x240182d  daddu       $v1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x372278u;
        goto label_372278;
    }
    ctx->pc = 0x372270u;
    {
        const bool branch_taken_0x372270 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x372274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372270u;
        // 0x372274: 0x240182d  daddu       $v1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372270) {
            ctx->pc = 0x37227Cu;
            goto label_37227c;
        }
    }
    ctx->pc = 0x372278u;
label_372278:
    // 0x372278: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x372278u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_37227c:
    // 0x37227c: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x37227cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_372280:
    // 0x372280: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x372280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_372284:
    // 0x372284: 0xc7838110  lwc1        $f3, -0x7EF0($gp)
    ctx->pc = 0x372284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_372288:
    // 0x372288: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x372288u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_37228c:
    // 0x37228c: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x37228cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_372290:
    // 0x372290: 0x0  nop
    ctx->pc = 0x372290u;
    // NOP
label_372294:
    // 0x372294: 0x45020029  bc1fl       . + 4 + (0x29 << 2)
label_372298:
    if (ctx->pc == 0x372298u) {
        ctx->pc = 0x372298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372294u;
        // 0x372298: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37229Cu;
        goto label_37229c;
    }
    ctx->pc = 0x372294u;
    {
        const bool branch_taken_0x372294 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x372294) {
            ctx->pc = 0x372298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x372294u;
            // 0x372298: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37233Cu;
            goto label_37233c;
        }
    }
    ctx->pc = 0x37229Cu;
label_37229c:
    // 0x37229c: 0xc7828114  lwc1        $f2, -0x7EEC($gp)
    ctx->pc = 0x37229cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3722a0:
    // 0x3722a0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x3722a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3722a4:
    // 0x3722a4: 0x0  nop
    ctx->pc = 0x3722a4u;
    // NOP
label_3722a8:
    // 0x3722a8: 0x45020024  bc1fl       . + 4 + (0x24 << 2)
label_3722ac:
    if (ctx->pc == 0x3722ACu) {
        ctx->pc = 0x3722ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3722A8u;
        // 0x3722ac: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3722B0u;
        goto label_3722b0;
    }
    ctx->pc = 0x3722A8u;
    {
        const bool branch_taken_0x3722a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3722a8) {
            ctx->pc = 0x3722ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3722A8u;
            // 0x3722ac: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37233Cu;
            goto label_37233c;
        }
    }
    ctx->pc = 0x3722B0u;
label_3722b0:
    // 0x3722b0: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x3722b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3722b4:
    // 0x3722b4: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x3722b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3722b8:
    // 0x3722b8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3722b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3722bc:
    // 0x3722bc: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x3722bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3722c0:
    // 0x3722c0: 0x0  nop
    ctx->pc = 0x3722c0u;
    // NOP
label_3722c4:
    // 0x3722c4: 0x4502001d  bc1fl       . + 4 + (0x1D << 2)
label_3722c8:
    if (ctx->pc == 0x3722C8u) {
        ctx->pc = 0x3722C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3722C4u;
        // 0x3722c8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3722CCu;
        goto label_3722cc;
    }
    ctx->pc = 0x3722C4u;
    {
        const bool branch_taken_0x3722c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3722c4) {
            ctx->pc = 0x3722C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3722C4u;
            // 0x3722c8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37233Cu;
            goto label_37233c;
        }
    }
    ctx->pc = 0x3722CCu;
label_3722cc:
    // 0x3722cc: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x3722ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3722d0:
    // 0x3722d0: 0x0  nop
    ctx->pc = 0x3722d0u;
    // NOP
label_3722d4:
    // 0x3722d4: 0x45020019  bc1fl       . + 4 + (0x19 << 2)
label_3722d8:
    if (ctx->pc == 0x3722D8u) {
        ctx->pc = 0x3722D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3722D4u;
        // 0x3722d8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3722DCu;
        goto label_3722dc;
    }
    ctx->pc = 0x3722D4u;
    {
        const bool branch_taken_0x3722d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3722d4) {
            ctx->pc = 0x3722D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3722D4u;
            // 0x3722d8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37233Cu;
            goto label_37233c;
        }
    }
    ctx->pc = 0x3722DCu;
label_3722dc:
    // 0x3722dc: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x3722dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3722e0:
    // 0x3722e0: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x3722e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3722e4:
    // 0x3722e4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3722e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3722e8:
    // 0x3722e8: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x3722e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3722ec:
    // 0x3722ec: 0x0  nop
    ctx->pc = 0x3722ecu;
    // NOP
label_3722f0:
    // 0x3722f0: 0x45020012  bc1fl       . + 4 + (0x12 << 2)
label_3722f4:
    if (ctx->pc == 0x3722F4u) {
        ctx->pc = 0x3722F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3722F0u;
        // 0x3722f4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3722F8u;
        goto label_3722f8;
    }
    ctx->pc = 0x3722F0u;
    {
        const bool branch_taken_0x3722f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3722f0) {
            ctx->pc = 0x3722F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3722F0u;
            // 0x3722f4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37233Cu;
            goto label_37233c;
        }
    }
    ctx->pc = 0x3722F8u;
label_3722f8:
    // 0x3722f8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x3722f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3722fc:
    // 0x3722fc: 0x0  nop
    ctx->pc = 0x3722fcu;
    // NOP
label_372300:
    // 0x372300: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
label_372304:
    if (ctx->pc == 0x372304u) {
        ctx->pc = 0x372304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372300u;
        // 0x372304: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x372308u;
        goto label_372308;
    }
    ctx->pc = 0x372300u;
    {
        const bool branch_taken_0x372300 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x372300) {
            ctx->pc = 0x372304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x372300u;
            // 0x372304: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37233Cu;
            goto label_37233c;
        }
    }
    ctx->pc = 0x372308u;
label_372308:
    // 0x372308: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_37230c:
    if (ctx->pc == 0x37230Cu) {
        ctx->pc = 0x37230Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372308u;
        // 0x37230c: 0xae720000  sw          $s2, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x372310u;
        goto label_372310;
    }
    ctx->pc = 0x372308u;
    {
        const bool branch_taken_0x372308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x372308) {
            ctx->pc = 0x37230Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x372308u;
            // 0x37230c: 0xae720000  sw          $s2, 0x0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x372318u;
            goto label_372318;
        }
    }
    ctx->pc = 0x372310u;
label_372310:
    // 0x372310: 0x10000002  b           . + 4 + (0x2 << 2)
label_372314:
    if (ctx->pc == 0x372314u) {
        ctx->pc = 0x372314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372310u;
        // 0x372314: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x372318u;
        goto label_372318;
    }
    ctx->pc = 0x372310u;
    {
        const bool branch_taken_0x372310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x372314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372310u;
        // 0x372314: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372310) {
            ctx->pc = 0x37231Cu;
            goto label_37231c;
        }
    }
    ctx->pc = 0x372318u;
label_372318:
    // 0x372318: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x372318u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37231c:
    // 0x37231c: 0x8e82010c  lw          $v0, 0x10C($s4)
    ctx->pc = 0x37231cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 268)));
label_372320:
    // 0x372320: 0x40f809  jalr        $v0
label_372324:
    if (ctx->pc == 0x372324u) {
        ctx->pc = 0x372324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372320u;
        // 0x372324: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x372328u;
        goto label_372328;
    }
    ctx->pc = 0x372320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x372328u);
        ctx->pc = 0x372324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372320u;
        // 0x372324: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372320u, 0x372328u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x372328u;
label_372328:
    // 0x372328: 0xc0ddfd0  jal         func_377F40
label_37232c:
    if (ctx->pc == 0x37232Cu) {
        ctx->pc = 0x37232Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372328u;
        // 0x37232c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x372330u;
        goto label_372330;
    }
    ctx->pc = 0x372328u;
    SET_GPR_U32(ctx, 31, 0x372330u);
    ctx->pc = 0x37232Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372328u;
    // 0x37232c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377F40u, 0x372328u, 0x372330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372330u;
label_372330:
    // 0x372330: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x372330u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_372334:
    // 0x372334: 0x1440004d  bnez        $v0, . + 4 + (0x4D << 2)
label_372338:
    if (ctx->pc == 0x372338u) {
        ctx->pc = 0x37233Cu;
        goto label_37233c;
    }
    ctx->pc = 0x372334u;
    {
        const bool branch_taken_0x372334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x372334) {
            ctx->pc = 0x37246Cu;
            goto label_37246c;
        }
    }
    ctx->pc = 0x37233Cu;
label_37233c:
    // 0x37233c: 0x5620ffc8  bnel        $s1, $zero, . + 4 + (-0x38 << 2)
label_372340:
    if (ctx->pc == 0x372340u) {
        ctx->pc = 0x372340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37233Cu;
        // 0x372340: 0x8e30000c  lw          $s0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x372344u;
        goto label_372344;
    }
    ctx->pc = 0x37233Cu;
    {
        const bool branch_taken_0x37233c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x37233c) {
            ctx->pc = 0x372340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37233Cu;
            // 0x372340: 0x8e30000c  lw          $s0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x372260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_372260;
        }
    }
    ctx->pc = 0x372344u;
label_372344:
    // 0x372344: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x372344u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_372348:
    // 0x372348: 0x12200043  beqz        $s1, . + 4 + (0x43 << 2)
label_37234c:
    if (ctx->pc == 0x37234Cu) {
        ctx->pc = 0x37234Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372348u;
        // 0x37234c: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x372350u;
        goto label_372350;
    }
    ctx->pc = 0x372348u;
    {
        const bool branch_taken_0x372348 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x37234Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372348u;
        // 0x37234c: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372348) {
            ctx->pc = 0x372458u;
            goto label_372458;
        }
    }
    ctx->pc = 0x372350u;
label_372350:
    // 0x372350: 0xc794811c  lwc1        $f20, -0x7EE4($gp)
    ctx->pc = 0x372350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_372354:
    // 0x372354: 0x2455e880  addiu       $s5, $v0, -0x1780
    ctx->pc = 0x372354u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_372358:
    // 0x372358: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x372358u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_37235c:
    // 0x37235c: 0x8e30000c  lw          $s0, 0xC($s1)
    ctx->pc = 0x37235cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_372360:
    // 0x372360: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
label_372364:
    if (ctx->pc == 0x372364u) {
        ctx->pc = 0x372364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372360u;
        // 0x372364: 0x8e700000  lw          $s0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x372368u;
        goto label_372368;
    }
    ctx->pc = 0x372360u;
    {
        const bool branch_taken_0x372360 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x372360) {
            ctx->pc = 0x372364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x372360u;
            // 0x372364: 0x8e700000  lw          $s0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x372368u;
            goto label_372368;
        }
    }
    ctx->pc = 0x372368u;
label_372368:
    // 0x372368: 0x8e12000c  lw          $s2, 0xC($s0)
    ctx->pc = 0x372368u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_37236c:
    // 0x37236c: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
label_372370:
    if (ctx->pc == 0x372370u) {
        ctx->pc = 0x372370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37236Cu;
        // 0x372370: 0x8e720000  lw          $s2, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x372374u;
        goto label_372374;
    }
    ctx->pc = 0x37236Cu;
    {
        const bool branch_taken_0x37236c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x37236c) {
            ctx->pc = 0x372370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37236Cu;
            // 0x372370: 0x8e720000  lw          $s2, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x372374u;
            goto label_372374;
        }
    }
    ctx->pc = 0x372374u;
label_372374:
    // 0x372374: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x372374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_372378:
    // 0x372378: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x372378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37237c:
    // 0x37237c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x37237cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_372380:
    // 0x372380: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x372380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_372384:
    // 0x372384: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x372384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_372388:
    // 0x372388: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x372388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37238c:
    // 0x37238c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x37238cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_372390:
    // 0x372390: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x372390u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_372394:
    // 0x372394: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x372394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_372398:
    // 0x372398: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x372398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37239c:
    // 0x37239c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x37239cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_3723a0:
    // 0x3723a0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x3723a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3723a4:
    // 0x3723a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3723a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3723a8:
    // 0x3723a8: 0xc104cf2  jal         func_4133C8
label_3723ac:
    if (ctx->pc == 0x3723ACu) {
        ctx->pc = 0x3723ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3723A8u;
        // 0x3723ac: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3723B0u;
        goto label_3723b0;
    }
    ctx->pc = 0x3723A8u;
    SET_GPR_U32(ctx, 31, 0x3723B0u);
    ctx->pc = 0x3723ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3723A8u;
    // 0x3723ac: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4133C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4133C8u, 0x3723A8u, 0x3723B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3723B0u;
label_3723b0:
    // 0x3723b0: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x3723b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3723b4:
    // 0x3723b4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x3723b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3723b8:
    // 0x3723b8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3723b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3723bc:
    // 0x3723bc: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x3723bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_3723c0:
    // 0x3723c0: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x3723c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3723c4:
    // 0x3723c4: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x3723c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3723c8:
    // 0x3723c8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3723c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_3723cc:
    // 0x3723cc: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x3723ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_3723d0:
    // 0x3723d0: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x3723d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3723d4:
    // 0x3723d4: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x3723d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3723d8:
    // 0x3723d8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3723d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3723dc:
    // 0x3723dc: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x3723dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_3723e0:
    // 0x3723e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3723e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3723e4:
    // 0x3723e4: 0xc104cf2  jal         func_4133C8
label_3723e8:
    if (ctx->pc == 0x3723E8u) {
        ctx->pc = 0x3723E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3723E4u;
        // 0x3723e8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3723ECu;
        goto label_3723ec;
    }
    ctx->pc = 0x3723E4u;
    SET_GPR_U32(ctx, 31, 0x3723ECu);
    ctx->pc = 0x3723E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3723E4u;
    // 0x3723e8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4133C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4133C8u, 0x3723E4u, 0x3723ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3723ECu;
label_3723ec:
    // 0x3723ec: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x3723ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3723f0:
    // 0x3723f0: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x3723f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3723f4:
    // 0x3723f4: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x3723f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3723f8:
    // 0x3723f8: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x3723f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3723fc:
    // 0x3723fc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3723fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_372400:
    // 0x372400: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x372400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_372404:
    // 0x372404: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x372404u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_372408:
    // 0x372408: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x372408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37240c:
    // 0x37240c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x37240cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_372410:
    // 0x372410: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x372410u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_372414:
    // 0x372414: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x372414u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_372418:
    // 0x372418: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x372418u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_37241c:
    // 0x37241c: 0x0  nop
    ctx->pc = 0x37241cu;
    // NOP
label_372420:
    // 0x372420: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
label_372424:
    if (ctx->pc == 0x372424u) {
        ctx->pc = 0x372424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372420u;
        // 0x372424: 0x8e31000c  lw          $s1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x372428u;
        goto label_372428;
    }
    ctx->pc = 0x372420u;
    {
        const bool branch_taken_0x372420 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x372420) {
            ctx->pc = 0x372424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x372420u;
            // 0x372424: 0x8e31000c  lw          $s1, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x372450u;
            goto label_372450;
        }
    }
    ctx->pc = 0x372428u;
label_372428:
    // 0x372428: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x372428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_37242c:
    // 0x37242c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_372430:
    if (ctx->pc == 0x372430u) {
        ctx->pc = 0x372430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37242Cu;
        // 0x372430: 0xae720000  sw          $s2, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x372434u;
        goto label_372434;
    }
    ctx->pc = 0x37242Cu;
    {
        const bool branch_taken_0x37242c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37242c) {
            ctx->pc = 0x372430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37242Cu;
            // 0x372430: 0xae720000  sw          $s2, 0x0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x372440u;
            goto label_372440;
        }
    }
    ctx->pc = 0x372434u;
label_372434:
    // 0x372434: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x372434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_372438:
    // 0x372438: 0x10000002  b           . + 4 + (0x2 << 2)
label_37243c:
    if (ctx->pc == 0x37243Cu) {
        ctx->pc = 0x37243Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372438u;
        // 0x37243c: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x372440u;
        goto label_372440;
    }
    ctx->pc = 0x372438u;
    {
        const bool branch_taken_0x372438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37243Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372438u;
        // 0x37243c: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372438) {
            ctx->pc = 0x372444u;
            goto label_372444;
        }
    }
    ctx->pc = 0x372440u;
label_372440:
    // 0x372440: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x372440u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_372444:
    // 0x372444: 0x8ea2010c  lw          $v0, 0x10C($s5)
    ctx->pc = 0x372444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 268)));
label_372448:
    // 0x372448: 0x40f809  jalr        $v0
label_37244c:
    if (ctx->pc == 0x37244Cu) {
        ctx->pc = 0x37244Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372448u;
        // 0x37244c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x372450u;
        goto label_372450;
    }
    ctx->pc = 0x372448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x372450u);
        ctx->pc = 0x37244Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372448u;
        // 0x37244c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372448u, 0x372450u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x372450u;
label_372450:
    // 0x372450: 0x5620ffc3  bnel        $s1, $zero, . + 4 + (-0x3D << 2)
label_372454:
    if (ctx->pc == 0x372454u) {
        ctx->pc = 0x372454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372450u;
        // 0x372454: 0x8e30000c  lw          $s0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x372458u;
        goto label_372458;
    }
    ctx->pc = 0x372450u;
    {
        const bool branch_taken_0x372450 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x372450) {
            ctx->pc = 0x372454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x372450u;
            // 0x372454: 0x8e30000c  lw          $s0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x372360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_372360;
        }
    }
    ctx->pc = 0x372458u;
label_372458:
    // 0x372458: 0xc0ddfd0  jal         func_377F40
label_37245c:
    if (ctx->pc == 0x37245Cu) {
        ctx->pc = 0x37245Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372458u;
        // 0x37245c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x372460u;
        goto label_372460;
    }
    ctx->pc = 0x372458u;
    SET_GPR_U32(ctx, 31, 0x372460u);
    ctx->pc = 0x37245Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372458u;
    // 0x37245c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377F40u, 0x372458u, 0x372460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372460u;
label_372460:
    // 0x372460: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x372460u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_372464:
    // 0x372464: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_372468:
    if (ctx->pc == 0x372468u) {
        ctx->pc = 0x37246Cu;
        goto label_37246c;
    }
    ctx->pc = 0x372464u;
    {
        const bool branch_taken_0x372464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x372464) {
            ctx->pc = 0x37247Cu;
            goto label_37247c;
        }
    }
    ctx->pc = 0x37246Cu;
label_37246c:
    // 0x37246c: 0xc0ddfae  jal         func_377EB8
label_372470:
    if (ctx->pc == 0x372470u) {
        ctx->pc = 0x372470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37246Cu;
        // 0x372470: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x372474u;
        goto label_372474;
    }
    ctx->pc = 0x37246Cu;
    SET_GPR_U32(ctx, 31, 0x372474u);
    ctx->pc = 0x372470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37246Cu;
    // 0x372470: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377EB8u, 0x37246Cu, 0x372474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372474u;
label_372474:
    // 0x372474: 0x1000000b  b           . + 4 + (0xB << 2)
label_372478:
    if (ctx->pc == 0x372478u) {
        ctx->pc = 0x372478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372474u;
        // 0x372478: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37247Cu;
        goto label_37247c;
    }
    ctx->pc = 0x372474u;
    {
        const bool branch_taken_0x372474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x372478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372474u;
        // 0x372478: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372474) {
            ctx->pc = 0x3724A4u;
            goto label_3724a4;
        }
    }
    ctx->pc = 0x37247Cu;
label_37247c:
    // 0x37247c: 0xc0dc1aa  jal         func_3706A8
label_372480:
    if (ctx->pc == 0x372480u) {
        ctx->pc = 0x372480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37247Cu;
        // 0x372480: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x372484u;
        goto label_372484;
    }
    ctx->pc = 0x37247Cu;
    SET_GPR_U32(ctx, 31, 0x372484u);
    ctx->pc = 0x372480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37247Cu;
    // 0x372480: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3706A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3706A8u, 0x37247Cu, 0x372484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372484u;
label_372484:
    // 0x372484: 0xc7818110  lwc1        $f1, -0x7EF0($gp)
    ctx->pc = 0x372484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_372488:
    // 0x372488: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x372488u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_37248c:
    // 0x37248c: 0x0  nop
    ctx->pc = 0x37248cu;
    // NOP
label_372490:
    // 0x372490: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_372494:
    if (ctx->pc == 0x372494u) {
        ctx->pc = 0x372494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372490u;
        // 0x372494: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x372498u;
        goto label_372498;
    }
    ctx->pc = 0x372490u;
    {
        const bool branch_taken_0x372490 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x372494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372490u;
        // 0x372494: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372490) {
            ctx->pc = 0x3724A4u;
            goto label_3724a4;
        }
    }
    ctx->pc = 0x372498u;
label_372498:
    // 0x372498: 0xc0ddfae  jal         func_377EB8
label_37249c:
    if (ctx->pc == 0x37249Cu) {
        ctx->pc = 0x37249Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372498u;
        // 0x37249c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3724A0u;
        goto label_3724a0;
    }
    ctx->pc = 0x372498u;
    SET_GPR_U32(ctx, 31, 0x3724A0u);
    ctx->pc = 0x37249Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372498u;
    // 0x37249c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377EB8u, 0x372498u, 0x3724A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3724A0u;
label_3724a0:
    // 0x3724a0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3724a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3724a4:
    // 0x3724a4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3724a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3724a8:
    // 0x3724a8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3724a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3724ac:
    // 0x3724ac: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3724acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3724b0:
    // 0x3724b0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3724b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3724b4:
    // 0x3724b4: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x3724b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3724b8:
    // 0x3724b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3724b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3724bc:
    // 0x3724bc: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x3724bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3724c0:
    // 0x3724c0: 0x3e00008  jr          $ra
label_3724c4:
    if (ctx->pc == 0x3724C4u) {
        ctx->pc = 0x3724C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3724C0u;
        // 0x3724c4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3724C8u;
        goto label_fallthrough_0x3724c0;
    }
    ctx->pc = 0x3724C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3724C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3724C0u;
        // 0x3724c4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3724C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3724c0:
    ctx->pc = 0x3724C8u;
}
