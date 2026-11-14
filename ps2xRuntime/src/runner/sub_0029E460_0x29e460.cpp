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

// Function: sub_0029E460
// Address: 0x29e460 - 0x29e700
void sub_0029E460_0x29e460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E460_0x29e460");
#endif

    switch (ctx->pc) {
        case 0x29e4b8u: goto label_29e4b8;
        case 0x29e4e4u: goto label_29e4e4;
        case 0x29e514u: goto label_29e514;
        case 0x29e540u: goto label_29e540;
        case 0x29e568u: goto label_29e568;
        case 0x29e594u: goto label_29e594;
        case 0x29e5d4u: goto label_29e5d4;
        case 0x29e614u: goto label_29e614;
        case 0x29e62cu: goto label_29e62c;
        case 0x29e63cu: goto label_29e63c;
        case 0x29e64cu: goto label_29e64c;
        case 0x29e65cu: goto label_29e65c;
        case 0x29e66cu: goto label_29e66c;
        case 0x29e688u: goto label_29e688;
        case 0x29e6a8u: goto label_29e6a8;
        case 0x29e6b8u: goto label_29e6b8;
        default: break;
    }

    ctx->pc = 0x29e460u;

    // 0x29e460: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x29e460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x29e464: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x29e464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x29e468: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x29e468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x29e46c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x29e46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x29e470: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29e470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x29e474: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29e474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29e478: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29e478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29e47c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29e47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29e480: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x29e480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x29e484: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x29e484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x29e488: 0x8fb10090  lw          $s1, 0x90($sp)
    ctx->pc = 0x29e488u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29e48c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x29e48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x29e490: 0xa3a2007f  sb          $v0, 0x7F($sp)
    ctx->pc = 0x29e490u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 127), (uint8_t)GPR_U32(ctx, 2));
    // 0x29e494: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x29e494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x29e498: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29e498u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29e49c: 0x0  nop
    ctx->pc = 0x29e49cu;
    // NOP
    // 0x29e4a0: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x29e4a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x29e4a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29e4a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e4a8: 0x2785a390  addiu       $a1, $gp, -0x5C70
    ctx->pc = 0x29e4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943632));
    // 0x29e4ac: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x29e4acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29e4b0: 0xc0bc66e  jal         func_2F19B8
    ctx->pc = 0x29E4B0u;
    SET_GPR_U32(ctx, 31, 0x29E4B8u);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x29E4B0u, 0x29E4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E4B8u;
label_29e4b8:
    // 0x29e4b8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x29E4B8u;
    {
        const bool branch_taken_0x29e4b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29e4b8) {
            ctx->pc = 0x29E500u;
            goto label_29e500;
        }
    }
    ctx->pc = 0x29E4C0u;
    // 0x29e4c0: 0x240200d1  addiu       $v0, $zero, 0xD1
    ctx->pc = 0x29e4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 209));
    // 0x29e4c4: 0xa3a2007c  sb          $v0, 0x7C($sp)
    ctx->pc = 0x29e4c4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 124), (uint8_t)GPR_U32(ctx, 2));
    // 0x29e4c8: 0x240200bc  addiu       $v0, $zero, 0xBC
    ctx->pc = 0x29e4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
    // 0x29e4cc: 0xa3a2007d  sb          $v0, 0x7D($sp)
    ctx->pc = 0x29e4ccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 125), (uint8_t)GPR_U32(ctx, 2));
    // 0x29e4d0: 0x240200a3  addiu       $v0, $zero, 0xA3
    ctx->pc = 0x29e4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 163));
    // 0x29e4d4: 0xa3a2007e  sb          $v0, 0x7E($sp)
    ctx->pc = 0x29e4d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 126), (uint8_t)GPR_U32(ctx, 2));
    // 0x29e4d8: 0x8f84bb84  lw          $a0, -0x447C($gp)
    ctx->pc = 0x29e4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949764)));
    // 0x29e4dc: 0xc08a768  jal         func_229DA0
    ctx->pc = 0x29E4DCu;
    SET_GPR_U32(ctx, 31, 0x29E4E4u);
    ctx->pc = 0x229DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229DA0u, 0x29E4DCu, 0x29E4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E4E4u;
label_29e4e4:
    // 0x29e4e4: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x29e4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x29e4e8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x29e4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x29e4ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29e4ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29e4f0: 0x0  nop
    ctx->pc = 0x29e4f0u;
    // NOP
    // 0x29e4f4: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x29e4f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x29e4f8: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x29E4F8u;
    {
        const bool branch_taken_0x29e4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e4f8) {
            ctx->pc = 0x29E5E8u;
            goto label_29e5e8;
        }
    }
    ctx->pc = 0x29E500u;
label_29e500:
    // 0x29e500: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29e500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e504: 0x2785a394  addiu       $a1, $gp, -0x5C6C
    ctx->pc = 0x29e504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943636));
    // 0x29e508: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x29e508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29e50c: 0xc0bc66e  jal         func_2F19B8
    ctx->pc = 0x29E50Cu;
    SET_GPR_U32(ctx, 31, 0x29E514u);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x29E50Cu, 0x29E514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E514u;
label_29e514:
    // 0x29e514: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x29E514u;
    {
        const bool branch_taken_0x29e514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29e514) {
            ctx->pc = 0x29E554u;
            goto label_29e554;
        }
    }
    ctx->pc = 0x29E51Cu;
    // 0x29e51c: 0x240200e5  addiu       $v0, $zero, 0xE5
    ctx->pc = 0x29e51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 229));
    // 0x29e520: 0xa3a2007c  sb          $v0, 0x7C($sp)
    ctx->pc = 0x29e520u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 124), (uint8_t)GPR_U32(ctx, 2));
    // 0x29e524: 0x240200df  addiu       $v0, $zero, 0xDF
    ctx->pc = 0x29e524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
    // 0x29e528: 0xa3a2007d  sb          $v0, 0x7D($sp)
    ctx->pc = 0x29e528u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 125), (uint8_t)GPR_U32(ctx, 2));
    // 0x29e52c: 0x240200bc  addiu       $v0, $zero, 0xBC
    ctx->pc = 0x29e52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
    // 0x29e530: 0xa3a2007e  sb          $v0, 0x7E($sp)
    ctx->pc = 0x29e530u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 126), (uint8_t)GPR_U32(ctx, 2));
    // 0x29e534: 0x8f84bb84  lw          $a0, -0x447C($gp)
    ctx->pc = 0x29e534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949764)));
    // 0x29e538: 0xc08a770  jal         func_229DC0
    ctx->pc = 0x29E538u;
    SET_GPR_U32(ctx, 31, 0x29E540u);
    ctx->pc = 0x229DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229DC0u, 0x29E538u, 0x29E540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E540u;
label_29e540:
    // 0x29e540: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x29e540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x29e544: 0xc78081a0  lwc1        $f0, -0x7E60($gp)
    ctx->pc = 0x29e544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29e548: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x29e548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x29e54c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x29E54Cu;
    {
        const bool branch_taken_0x29e54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e54c) {
            ctx->pc = 0x29E5E8u;
            goto label_29e5e8;
        }
    }
    ctx->pc = 0x29E554u;
label_29e554:
    // 0x29e554: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29e554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e558: 0x2785a398  addiu       $a1, $gp, -0x5C68
    ctx->pc = 0x29e558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943640));
    // 0x29e55c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x29e55cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29e560: 0xc0bc66e  jal         func_2F19B8
    ctx->pc = 0x29E560u;
    SET_GPR_U32(ctx, 31, 0x29E568u);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x29E560u, 0x29E568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E568u;
label_29e568:
    // 0x29e568: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x29E568u;
    {
        const bool branch_taken_0x29e568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29e568) {
            ctx->pc = 0x29E5B0u;
            goto label_29e5b0;
        }
    }
    ctx->pc = 0x29E570u;
    // 0x29e570: 0x2402006e  addiu       $v0, $zero, 0x6E
    ctx->pc = 0x29e570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x29e574: 0xa3a2007c  sb          $v0, 0x7C($sp)
    ctx->pc = 0x29e574u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 124), (uint8_t)GPR_U32(ctx, 2));
    // 0x29e578: 0x24020051  addiu       $v0, $zero, 0x51
    ctx->pc = 0x29e578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x29e57c: 0xa3a2007d  sb          $v0, 0x7D($sp)
    ctx->pc = 0x29e57cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 125), (uint8_t)GPR_U32(ctx, 2));
    // 0x29e580: 0x24020049  addiu       $v0, $zero, 0x49
    ctx->pc = 0x29e580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x29e584: 0xa3a2007e  sb          $v0, 0x7E($sp)
    ctx->pc = 0x29e584u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 126), (uint8_t)GPR_U32(ctx, 2));
    // 0x29e588: 0x8f84bb84  lw          $a0, -0x447C($gp)
    ctx->pc = 0x29e588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949764)));
    // 0x29e58c: 0xc08a768  jal         func_229DA0
    ctx->pc = 0x29E58Cu;
    SET_GPR_U32(ctx, 31, 0x29E594u);
    ctx->pc = 0x229DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229DA0u, 0x29E58Cu, 0x29E594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E594u;
label_29e594:
    // 0x29e594: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x29e594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x29e598: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x29e598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x29e59c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29e59cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29e5a0: 0x0  nop
    ctx->pc = 0x29e5a0u;
    // NOP
    // 0x29e5a4: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x29e5a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x29e5a8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x29E5A8u;
    {
        const bool branch_taken_0x29e5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e5a8) {
            ctx->pc = 0x29E5E8u;
            goto label_29e5e8;
        }
    }
    ctx->pc = 0x29E5B0u;
label_29e5b0:
    // 0x29e5b0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x29e5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x29e5b4: 0xa3a2007c  sb          $v0, 0x7C($sp)
    ctx->pc = 0x29e5b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 124), (uint8_t)GPR_U32(ctx, 2));
    // 0x29e5b8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x29e5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x29e5bc: 0xa3a2007d  sb          $v0, 0x7D($sp)
    ctx->pc = 0x29e5bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 125), (uint8_t)GPR_U32(ctx, 2));
    // 0x29e5c0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x29e5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x29e5c4: 0xa3a2007e  sb          $v0, 0x7E($sp)
    ctx->pc = 0x29e5c4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 126), (uint8_t)GPR_U32(ctx, 2));
    // 0x29e5c8: 0x8f84bb84  lw          $a0, -0x447C($gp)
    ctx->pc = 0x29e5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949764)));
    // 0x29e5cc: 0xc08a768  jal         func_229DA0
    ctx->pc = 0x29E5CCu;
    SET_GPR_U32(ctx, 31, 0x29E5D4u);
    ctx->pc = 0x229DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229DA0u, 0x29E5CCu, 0x29E5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E5D4u;
label_29e5d4:
    // 0x29e5d4: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x29e5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x29e5d8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x29e5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x29e5dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29e5dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29e5e0: 0x0  nop
    ctx->pc = 0x29e5e0u;
    // NOP
    // 0x29e5e4: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x29e5e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_29e5e8:
    // 0x29e5e8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x29e5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x29e5ec: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x29e5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x29e5f0: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x29e5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x29e5f4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x29e5f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x29e5f8: 0x34430002  ori         $v1, $v0, 0x2
    ctx->pc = 0x29e5f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x29e5fc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x29e5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x29e600: 0xac430050  sw          $v1, 0x50($v0)
    ctx->pc = 0x29e600u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 3));
    // 0x29e604: 0x27b40078  addiu       $s4, $sp, 0x78
    ctx->pc = 0x29e604u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x29e608: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x29e608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29e60c: 0xc0e0d30  jal         func_3834C0
    ctx->pc = 0x29E60Cu;
    SET_GPR_U32(ctx, 31, 0x29E614u);
    ctx->pc = 0x3834C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3834C0u, 0x29E60Cu, 0x29E614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E614u;
label_29e614:
    // 0x29e614: 0x1840002c  blez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x29E614u;
    {
        const bool branch_taken_0x29e614 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x29e614) {
            ctx->pc = 0x29E6C8u;
            goto label_29e6c8;
        }
    }
    ctx->pc = 0x29E61Cu;
    // 0x29e61c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x29e61cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29e620: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29e620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e624: 0xc0e0d24  jal         func_383490
    ctx->pc = 0x29E624u;
    SET_GPR_U32(ctx, 31, 0x29E62Cu);
    ctx->pc = 0x383490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383490u, 0x29E624u, 0x29E62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E62Cu;
label_29e62c:
    // 0x29e62c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x29e62cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e630: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29e630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e634: 0xc0e0db8  jal         func_3836E0
    ctx->pc = 0x29E634u;
    SET_GPR_U32(ctx, 31, 0x29E63Cu);
    ctx->pc = 0x3836E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3836E0u, 0x29E634u, 0x29E63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E63Cu;
label_29e63c:
    // 0x29e63c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x29e63cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e640: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x29e640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e644: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x29E644u;
    {
        const bool branch_taken_0x29e644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e644) {
            ctx->pc = 0x29E6BCu;
            goto label_29e6bc;
        }
    }
    ctx->pc = 0x29E64Cu;
label_29e64c:
    // 0x29e64c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29e64cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e650: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29e650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e654: 0xc0e0dc6  jal         func_383718
    ctx->pc = 0x29E654u;
    SET_GPR_U32(ctx, 31, 0x29E65Cu);
    ctx->pc = 0x383718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383718u, 0x29E654u, 0x29E65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E65Cu;
label_29e65c:
    // 0x29e65c: 0x2784a3a0  addiu       $a0, $gp, -0x5C60
    ctx->pc = 0x29e65cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943648));
    // 0x29e660: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29e660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e664: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x29E664u;
    SET_GPR_U32(ctx, 31, 0x29E66Cu);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x29E664u, 0x29E66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E66Cu;
label_29e66c:
    // 0x29e66c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x29E66Cu;
    {
        const bool branch_taken_0x29e66c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29e66c) {
            ctx->pc = 0x29E6B8u;
            goto label_29e6b8;
        }
    }
    ctx->pc = 0x29E674u;
    // 0x29e674: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x29e674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29e678: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x29e678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e67c: 0x27a5007c  addiu       $a1, $sp, 0x7C
    ctx->pc = 0x29e67cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x29e680: 0xc052608  jal         func_149820
    ctx->pc = 0x29E680u;
    SET_GPR_U32(ctx, 31, 0x29E688u);
    ctx->pc = 0x149820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149820u, 0x29E680u, 0x29E688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E688u;
label_29e688:
    // 0x29e688: 0x27b30080  addiu       $s3, $sp, 0x80
    ctx->pc = 0x29e688u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x29e68c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x29e68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x29e690: 0x10020009  beq         $zero, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x29E690u;
    {
        const bool branch_taken_0x29e690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x29e690) {
            ctx->pc = 0x29E6B8u;
            goto label_29e6b8;
        }
    }
    ctx->pc = 0x29E698u;
    // 0x29e698: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x29e698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29e69c: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x29e69cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x29e6a0: 0xc0c982c  jal         func_3260B0
    ctx->pc = 0x29E6A0u;
    SET_GPR_U32(ctx, 31, 0x29E6A8u);
    ctx->pc = 0x3260B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3260B0u, 0x29E6A0u, 0x29E6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E6A8u;
label_29e6a8:
    // 0x29e6a8: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x29e6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29e6ac: 0xc7ac0074  lwc1        $f12, 0x74($sp)
    ctx->pc = 0x29e6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29e6b0: 0xc0c9886  jal         func_326218
    ctx->pc = 0x29E6B0u;
    SET_GPR_U32(ctx, 31, 0x29E6B8u);
    ctx->pc = 0x326218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326218u, 0x29E6B0u, 0x29E6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E6B8u;
label_29e6b8:
    // 0x29e6b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x29e6b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_29e6bc:
    // 0x29e6bc: 0x215102b  sltu        $v0, $s0, $s5
    ctx->pc = 0x29e6bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x29e6c0: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x29E6C0u;
    {
        const bool branch_taken_0x29e6c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29e6c0) {
            ctx->pc = 0x29E64Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29e64c;
        }
    }
    ctx->pc = 0x29E6C8u;
label_29e6c8:
    // 0x29e6c8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x29e6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29e6cc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x29e6ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29e6d0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x29e6d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29e6d4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x29e6d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29e6d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29e6d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29e6dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29e6dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29e6e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29e6e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29e6e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29e6e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29e6e8: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x29e6e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x29e6ec: 0x3e00008  jr          $ra
    ctx->pc = 0x29E6ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E6ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E6F4u;
    // 0x29e6f4: 0x0  nop
    ctx->pc = 0x29e6f4u;
    // NOP
    // 0x29e6f8: 0x0  nop
    ctx->pc = 0x29e6f8u;
    // NOP
    // 0x29e6fc: 0x0  nop
    ctx->pc = 0x29e6fcu;
    // NOP
    ctx->pc = 0x29e700u;
}
