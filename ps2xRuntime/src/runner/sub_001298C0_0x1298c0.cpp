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

// Function: sub_001298C0
// Address: 0x1298c0 - 0x129ba0
void sub_001298C0_0x1298c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001298C0_0x1298c0");
#endif

    switch (ctx->pc) {
        case 0x1298c0u: goto label_1298c0;
        case 0x1298c4u: goto label_1298c4;
        case 0x1298c8u: goto label_1298c8;
        case 0x1298ccu: goto label_1298cc;
        case 0x1298d0u: goto label_1298d0;
        case 0x1298d4u: goto label_1298d4;
        case 0x1298d8u: goto label_1298d8;
        case 0x1298dcu: goto label_1298dc;
        case 0x1298e0u: goto label_1298e0;
        case 0x1298e4u: goto label_1298e4;
        case 0x1298e8u: goto label_1298e8;
        case 0x1298ecu: goto label_1298ec;
        case 0x1298f0u: goto label_1298f0;
        case 0x1298f4u: goto label_1298f4;
        case 0x1298f8u: goto label_1298f8;
        case 0x1298fcu: goto label_1298fc;
        case 0x129900u: goto label_129900;
        case 0x129904u: goto label_129904;
        case 0x129908u: goto label_129908;
        case 0x12990cu: goto label_12990c;
        case 0x129910u: goto label_129910;
        case 0x129914u: goto label_129914;
        case 0x129918u: goto label_129918;
        case 0x12991cu: goto label_12991c;
        case 0x129920u: goto label_129920;
        case 0x129924u: goto label_129924;
        case 0x129928u: goto label_129928;
        case 0x12992cu: goto label_12992c;
        case 0x129930u: goto label_129930;
        case 0x129934u: goto label_129934;
        case 0x129938u: goto label_129938;
        case 0x12993cu: goto label_12993c;
        case 0x129940u: goto label_129940;
        case 0x129944u: goto label_129944;
        case 0x129948u: goto label_129948;
        case 0x12994cu: goto label_12994c;
        case 0x129950u: goto label_129950;
        case 0x129954u: goto label_129954;
        case 0x129958u: goto label_129958;
        case 0x12995cu: goto label_12995c;
        case 0x129960u: goto label_129960;
        case 0x129964u: goto label_129964;
        case 0x129968u: goto label_129968;
        case 0x12996cu: goto label_12996c;
        case 0x129970u: goto label_129970;
        case 0x129974u: goto label_129974;
        case 0x129978u: goto label_129978;
        case 0x12997cu: goto label_12997c;
        case 0x129980u: goto label_129980;
        case 0x129984u: goto label_129984;
        case 0x129988u: goto label_129988;
        case 0x12998cu: goto label_12998c;
        case 0x129990u: goto label_129990;
        case 0x129994u: goto label_129994;
        case 0x129998u: goto label_129998;
        case 0x12999cu: goto label_12999c;
        case 0x1299a0u: goto label_1299a0;
        case 0x1299a4u: goto label_1299a4;
        case 0x1299a8u: goto label_1299a8;
        case 0x1299acu: goto label_1299ac;
        case 0x1299b0u: goto label_1299b0;
        case 0x1299b4u: goto label_1299b4;
        case 0x1299b8u: goto label_1299b8;
        case 0x1299bcu: goto label_1299bc;
        case 0x1299c0u: goto label_1299c0;
        case 0x1299c4u: goto label_1299c4;
        case 0x1299c8u: goto label_1299c8;
        case 0x1299ccu: goto label_1299cc;
        case 0x1299d0u: goto label_1299d0;
        case 0x1299d4u: goto label_1299d4;
        case 0x1299d8u: goto label_1299d8;
        case 0x1299dcu: goto label_1299dc;
        case 0x1299e0u: goto label_1299e0;
        case 0x1299e4u: goto label_1299e4;
        case 0x1299e8u: goto label_1299e8;
        case 0x1299ecu: goto label_1299ec;
        case 0x1299f0u: goto label_1299f0;
        case 0x1299f4u: goto label_1299f4;
        case 0x1299f8u: goto label_1299f8;
        case 0x1299fcu: goto label_1299fc;
        case 0x129a00u: goto label_129a00;
        case 0x129a04u: goto label_129a04;
        case 0x129a08u: goto label_129a08;
        case 0x129a0cu: goto label_129a0c;
        case 0x129a10u: goto label_129a10;
        case 0x129a14u: goto label_129a14;
        case 0x129a18u: goto label_129a18;
        case 0x129a1cu: goto label_129a1c;
        case 0x129a20u: goto label_129a20;
        case 0x129a24u: goto label_129a24;
        case 0x129a28u: goto label_129a28;
        case 0x129a2cu: goto label_129a2c;
        case 0x129a30u: goto label_129a30;
        case 0x129a34u: goto label_129a34;
        case 0x129a38u: goto label_129a38;
        case 0x129a3cu: goto label_129a3c;
        case 0x129a40u: goto label_129a40;
        case 0x129a44u: goto label_129a44;
        case 0x129a48u: goto label_129a48;
        case 0x129a4cu: goto label_129a4c;
        case 0x129a50u: goto label_129a50;
        case 0x129a54u: goto label_129a54;
        case 0x129a58u: goto label_129a58;
        case 0x129a5cu: goto label_129a5c;
        case 0x129a60u: goto label_129a60;
        case 0x129a64u: goto label_129a64;
        case 0x129a68u: goto label_129a68;
        case 0x129a6cu: goto label_129a6c;
        case 0x129a70u: goto label_129a70;
        case 0x129a74u: goto label_129a74;
        case 0x129a78u: goto label_129a78;
        case 0x129a7cu: goto label_129a7c;
        case 0x129a80u: goto label_129a80;
        case 0x129a84u: goto label_129a84;
        case 0x129a88u: goto label_129a88;
        case 0x129a8cu: goto label_129a8c;
        case 0x129a90u: goto label_129a90;
        case 0x129a94u: goto label_129a94;
        case 0x129a98u: goto label_129a98;
        case 0x129a9cu: goto label_129a9c;
        case 0x129aa0u: goto label_129aa0;
        case 0x129aa4u: goto label_129aa4;
        case 0x129aa8u: goto label_129aa8;
        case 0x129aacu: goto label_129aac;
        case 0x129ab0u: goto label_129ab0;
        case 0x129ab4u: goto label_129ab4;
        case 0x129ab8u: goto label_129ab8;
        case 0x129abcu: goto label_129abc;
        case 0x129ac0u: goto label_129ac0;
        case 0x129ac4u: goto label_129ac4;
        case 0x129ac8u: goto label_129ac8;
        case 0x129accu: goto label_129acc;
        case 0x129ad0u: goto label_129ad0;
        case 0x129ad4u: goto label_129ad4;
        case 0x129ad8u: goto label_129ad8;
        case 0x129adcu: goto label_129adc;
        case 0x129ae0u: goto label_129ae0;
        case 0x129ae4u: goto label_129ae4;
        case 0x129ae8u: goto label_129ae8;
        case 0x129aecu: goto label_129aec;
        case 0x129af0u: goto label_129af0;
        case 0x129af4u: goto label_129af4;
        case 0x129af8u: goto label_129af8;
        case 0x129afcu: goto label_129afc;
        case 0x129b00u: goto label_129b00;
        case 0x129b04u: goto label_129b04;
        case 0x129b08u: goto label_129b08;
        case 0x129b0cu: goto label_129b0c;
        case 0x129b10u: goto label_129b10;
        case 0x129b14u: goto label_129b14;
        case 0x129b18u: goto label_129b18;
        case 0x129b1cu: goto label_129b1c;
        case 0x129b20u: goto label_129b20;
        case 0x129b24u: goto label_129b24;
        case 0x129b28u: goto label_129b28;
        case 0x129b2cu: goto label_129b2c;
        case 0x129b30u: goto label_129b30;
        case 0x129b34u: goto label_129b34;
        case 0x129b38u: goto label_129b38;
        case 0x129b3cu: goto label_129b3c;
        case 0x129b40u: goto label_129b40;
        case 0x129b44u: goto label_129b44;
        case 0x129b48u: goto label_129b48;
        case 0x129b4cu: goto label_129b4c;
        case 0x129b50u: goto label_129b50;
        case 0x129b54u: goto label_129b54;
        case 0x129b58u: goto label_129b58;
        case 0x129b5cu: goto label_129b5c;
        case 0x129b60u: goto label_129b60;
        case 0x129b64u: goto label_129b64;
        case 0x129b68u: goto label_129b68;
        case 0x129b6cu: goto label_129b6c;
        case 0x129b70u: goto label_129b70;
        case 0x129b74u: goto label_129b74;
        case 0x129b78u: goto label_129b78;
        case 0x129b7cu: goto label_129b7c;
        case 0x129b80u: goto label_129b80;
        case 0x129b84u: goto label_129b84;
        case 0x129b88u: goto label_129b88;
        case 0x129b8cu: goto label_129b8c;
        case 0x129b90u: goto label_129b90;
        case 0x129b94u: goto label_129b94;
        case 0x129b98u: goto label_129b98;
        case 0x129b9cu: goto label_129b9c;
        default: break;
    }

    ctx->pc = 0x1298c0u;

label_1298c0:
    // 0x1298c0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1298c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_1298c4:
    // 0x1298c4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1298c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1298c8:
    // 0x1298c8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1298c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1298cc:
    // 0x1298cc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1298ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1298d0:
    // 0x1298d0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1298d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1298d4:
    // 0x1298d4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1298d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1298d8:
    // 0x1298d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1298d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1298dc:
    // 0x1298dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1298dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1298e0:
    // 0x1298e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1298e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1298e4:
    // 0x1298e4: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x1298e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
label_1298e8:
    // 0x1298e8: 0xafa500b0  sw          $a1, 0xB0($sp)
    ctx->pc = 0x1298e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
label_1298ec:
    // 0x1298ec: 0xa3a600c0  sb          $a2, 0xC0($sp)
    ctx->pc = 0x1298ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 192), (uint8_t)GPR_U32(ctx, 6));
label_1298f0:
    // 0x1298f0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1298f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1298f4:
    // 0x1298f4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1298f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1298f8:
    // 0x1298f8: 0xc04a814  jal         func_12A050
label_1298fc:
    if (ctx->pc == 0x1298FCu) {
        ctx->pc = 0x129900u;
        goto label_129900;
    }
    ctx->pc = 0x1298F8u;
    SET_GPR_U32(ctx, 31, 0x129900u);
    ctx->pc = 0x12A050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A050u, 0x1298F8u, 0x129900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129900u;
label_129900:
    // 0x129900: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x129900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_129904:
    // 0x129904: 0xc042330  jal         func_108CC0
label_129908:
    if (ctx->pc == 0x129908u) {
        ctx->pc = 0x12990Cu;
        goto label_12990c;
    }
    ctx->pc = 0x129904u;
    SET_GPR_U32(ctx, 31, 0x12990Cu);
    ctx->pc = 0x108CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108CC0u, 0x129904u, 0x12990Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12990Cu;
label_12990c:
    // 0x12990c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x12990cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_129910:
    // 0x129910: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x129910u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_129914:
    // 0x129914: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x129914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_129918:
    // 0x129918: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x129918u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12991c:
    // 0x12991c: 0x93a200c0  lbu         $v0, 0xC0($sp)
    ctx->pc = 0x12991cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
label_129920:
    // 0x129920: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_129924:
    if (ctx->pc == 0x129924u) {
        ctx->pc = 0x129928u;
        goto label_129928;
    }
    ctx->pc = 0x129920u;
    {
        const bool branch_taken_0x129920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x129920) {
            ctx->pc = 0x1299C0u;
            goto label_1299c0;
        }
    }
    ctx->pc = 0x129928u;
label_129928:
    // 0x129928: 0x8f91b9f4  lw          $s1, -0x460C($gp)
    ctx->pc = 0x129928u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949364)));
label_12992c:
    // 0x12992c: 0xc048f34  jal         func_123CD0
label_129930:
    if (ctx->pc == 0x129930u) {
        ctx->pc = 0x129934u;
        goto label_129934;
    }
    ctx->pc = 0x12992Cu;
    SET_GPR_U32(ctx, 31, 0x129934u);
    ctx->pc = 0x123CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123CD0u, 0x12992Cu, 0x129934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129934u;
label_129934:
    // 0x129934: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x129934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_129938:
    // 0x129938: 0xc0497a4  jal         func_125E90
label_12993c:
    if (ctx->pc == 0x12993Cu) {
        ctx->pc = 0x129940u;
        goto label_129940;
    }
    ctx->pc = 0x129938u;
    SET_GPR_U32(ctx, 31, 0x129940u);
    ctx->pc = 0x125E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125E90u, 0x129938u, 0x129940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129940u;
label_129940:
    // 0x129940: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x129940u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_129944:
    // 0x129944: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x129944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_129948:
    // 0x129948: 0xc049394  jal         func_124E50
label_12994c:
    if (ctx->pc == 0x12994Cu) {
        ctx->pc = 0x129950u;
        goto label_129950;
    }
    ctx->pc = 0x129948u;
    SET_GPR_U32(ctx, 31, 0x129950u);
    ctx->pc = 0x124E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E50u, 0x129948u, 0x129950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129950u;
label_129950:
    // 0x129950: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x129950u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_129954:
    // 0x129954: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x129954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_129958:
    // 0x129958: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x129958u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_12995c:
    // 0x12995c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x12995cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_129960:
    // 0x129960: 0x320f809  jalr        $t9
label_129964:
    if (ctx->pc == 0x129964u) {
        ctx->pc = 0x129968u;
        goto label_129968;
    }
    ctx->pc = 0x129960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x129968u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129960u, 0x129968u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x129968u;
label_129968:
    // 0x129968: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x129968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_12996c:
    // 0x12996c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12996cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_129970:
    // 0x129970: 0xc119694  jal         func_465A50
label_129974:
    if (ctx->pc == 0x129974u) {
        ctx->pc = 0x129978u;
        goto label_129978;
    }
    ctx->pc = 0x129970u;
    SET_GPR_U32(ctx, 31, 0x129978u);
    ctx->pc = 0x465A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465A50u, 0x129970u, 0x129978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129978u;
label_129978:
    // 0x129978: 0xaf82ba50  sw          $v0, -0x45B0($gp)
    ctx->pc = 0x129978u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949456), GPR_U32(ctx, 2));
label_12997c:
    // 0x12997c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12997cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_129980:
    // 0x129980: 0xc049394  jal         func_124E50
label_129984:
    if (ctx->pc == 0x129984u) {
        ctx->pc = 0x129988u;
        goto label_129988;
    }
    ctx->pc = 0x129980u;
    SET_GPR_U32(ctx, 31, 0x129988u);
    ctx->pc = 0x124E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E50u, 0x129980u, 0x129988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129988u;
label_129988:
    // 0x129988: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x129988u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12998c:
    // 0x12998c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12998cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_129990:
    // 0x129990: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x129990u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_129994:
    // 0x129994: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x129994u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_129998:
    // 0x129998: 0x320f809  jalr        $t9
label_12999c:
    if (ctx->pc == 0x12999Cu) {
        ctx->pc = 0x1299A0u;
        goto label_1299a0;
    }
    ctx->pc = 0x129998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1299A0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129998u, 0x1299A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1299A0u;
label_1299a0:
    // 0x1299a0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1299a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1299a4:
    // 0x1299a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1299a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1299a8:
    // 0x1299a8: 0xc119694  jal         func_465A50
label_1299ac:
    if (ctx->pc == 0x1299ACu) {
        ctx->pc = 0x1299B0u;
        goto label_1299b0;
    }
    ctx->pc = 0x1299A8u;
    SET_GPR_U32(ctx, 31, 0x1299B0u);
    ctx->pc = 0x465A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465A50u, 0x1299A8u, 0x1299B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1299B0u;
label_1299b0:
    // 0x1299b0: 0xaf82ba54  sw          $v0, -0x45AC($gp)
    ctx->pc = 0x1299b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949460), GPR_U32(ctx, 2));
label_1299b4:
    // 0x1299b4: 0x2792ba50  addiu       $s2, $gp, -0x45B0
    ctx->pc = 0x1299b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 28), 4294949456));
label_1299b8:
    // 0x1299b8: 0x10000007  b           . + 4 + (0x7 << 2)
label_1299bc:
    if (ctx->pc == 0x1299BCu) {
        ctx->pc = 0x1299C0u;
        goto label_1299c0;
    }
    ctx->pc = 0x1299B8u;
    {
        const bool branch_taken_0x1299b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1299b8) {
            ctx->pc = 0x1299D8u;
            goto label_1299d8;
        }
    }
    ctx->pc = 0x1299C0u;
label_1299c0:
    // 0x1299c0: 0x8f91ba38  lw          $s1, -0x45C8($gp)
    ctx->pc = 0x1299c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949432)));
label_1299c4:
    // 0x1299c4: 0x8f84ba40  lw          $a0, -0x45C0($gp)
    ctx->pc = 0x1299c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949440)));
label_1299c8:
    // 0x1299c8: 0xc0497a4  jal         func_125E90
label_1299cc:
    if (ctx->pc == 0x1299CCu) {
        ctx->pc = 0x1299D0u;
        goto label_1299d0;
    }
    ctx->pc = 0x1299C8u;
    SET_GPR_U32(ctx, 31, 0x1299D0u);
    ctx->pc = 0x125E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125E90u, 0x1299C8u, 0x1299D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1299D0u;
label_1299d0:
    // 0x1299d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1299d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1299d4:
    // 0x1299d4: 0x2792ba58  addiu       $s2, $gp, -0x45A8
    ctx->pc = 0x1299d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 28), 4294949464));
label_1299d8:
    // 0x1299d8: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x1299d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1299dc:
    // 0x1299dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1299dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1299e0:
    // 0x1299e0: 0xc049394  jal         func_124E50
label_1299e4:
    if (ctx->pc == 0x1299E4u) {
        ctx->pc = 0x1299E8u;
        goto label_1299e8;
    }
    ctx->pc = 0x1299E0u;
    SET_GPR_U32(ctx, 31, 0x1299E8u);
    ctx->pc = 0x124E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E50u, 0x1299E0u, 0x1299E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1299E8u;
label_1299e8:
    // 0x1299e8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1299e8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1299ec:
    // 0x1299ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1299ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1299f0:
    // 0x1299f0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1299f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1299f4:
    // 0x1299f4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1299f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1299f8:
    // 0x1299f8: 0x320f809  jalr        $t9
label_1299fc:
    if (ctx->pc == 0x1299FCu) {
        ctx->pc = 0x129A00u;
        goto label_129a00;
    }
    ctx->pc = 0x1299F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x129A00u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1299F8u, 0x129A00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x129A00u;
label_129a00:
    // 0x129a00: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x129a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_129a04:
    // 0x129a04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x129a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_129a08:
    // 0x129a08: 0xc119694  jal         func_465A50
label_129a0c:
    if (ctx->pc == 0x129A0Cu) {
        ctx->pc = 0x129A10u;
        goto label_129a10;
    }
    ctx->pc = 0x129A08u;
    SET_GPR_U32(ctx, 31, 0x129A10u);
    ctx->pc = 0x465A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465A50u, 0x129A08u, 0x129A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129A10u;
label_129a10:
    // 0x129a10: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x129a10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_129a14:
    // 0x129a14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x129a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_129a18:
    // 0x129a18: 0xc049394  jal         func_124E50
label_129a1c:
    if (ctx->pc == 0x129A1Cu) {
        ctx->pc = 0x129A20u;
        goto label_129a20;
    }
    ctx->pc = 0x129A18u;
    SET_GPR_U32(ctx, 31, 0x129A20u);
    ctx->pc = 0x124E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E50u, 0x129A18u, 0x129A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129A20u;
label_129a20:
    // 0x129a20: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x129a20u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_129a24:
    // 0x129a24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x129a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_129a28:
    // 0x129a28: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x129a28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_129a2c:
    // 0x129a2c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x129a2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_129a30:
    // 0x129a30: 0x320f809  jalr        $t9
label_129a34:
    if (ctx->pc == 0x129A34u) {
        ctx->pc = 0x129A38u;
        goto label_129a38;
    }
    ctx->pc = 0x129A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x129A38u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129A30u, 0x129A38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x129A38u;
label_129a38:
    // 0x129a38: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x129a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_129a3c:
    // 0x129a3c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x129a3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_129a40:
    // 0x129a40: 0xc119694  jal         func_465A50
label_129a44:
    if (ctx->pc == 0x129A44u) {
        ctx->pc = 0x129A48u;
        goto label_129a48;
    }
    ctx->pc = 0x129A40u;
    SET_GPR_U32(ctx, 31, 0x129A48u);
    ctx->pc = 0x465A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465A50u, 0x129A40u, 0x129A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129A48u;
label_129a48:
    // 0x129a48: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x129a48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_129a4c:
    // 0x129a4c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x129a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_129a50:
    // 0x129a50: 0xc04a804  jal         func_12A010
label_129a54:
    if (ctx->pc == 0x129A54u) {
        ctx->pc = 0x129A58u;
        goto label_129a58;
    }
    ctx->pc = 0x129A50u;
    SET_GPR_U32(ctx, 31, 0x129A58u);
    ctx->pc = 0x12A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A010u, 0x129A50u, 0x129A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129A58u;
label_129a58:
    // 0x129a58: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x129a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_129a5c:
    // 0x129a5c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x129a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_129a60:
    // 0x129a60: 0x24a524a8  addiu       $a1, $a1, 0x24A8
    ctx->pc = 0x129a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9384));
label_129a64:
    // 0x129a64: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x129a64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_129a68:
    // 0x129a68: 0x27878b50  addiu       $a3, $gp, -0x74B0
    ctx->pc = 0x129a68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937424));
label_129a6c:
    // 0x129a6c: 0xc0424a8  jal         func_1092A0
label_129a70:
    if (ctx->pc == 0x129A70u) {
        ctx->pc = 0x129A74u;
        goto label_129a74;
    }
    ctx->pc = 0x129A6Cu;
    SET_GPR_U32(ctx, 31, 0x129A74u);
    ctx->pc = 0x1092A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1092A0u, 0x129A6Cu, 0x129A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129A74u;
label_129a74:
    // 0x129a74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x129a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_129a78:
    // 0x129a78: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x129a78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_129a7c:
    // 0x129a7c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x129a7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_129a80:
    // 0x129a80: 0x320f809  jalr        $t9
label_129a84:
    if (ctx->pc == 0x129A84u) {
        ctx->pc = 0x129A88u;
        goto label_129a88;
    }
    ctx->pc = 0x129A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x129A88u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129A80u, 0x129A88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x129A88u;
label_129a88:
    // 0x129a88: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x129a88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
label_129a8c:
    // 0x129a8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x129a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_129a90:
    // 0x129a90: 0xc049394  jal         func_124E50
label_129a94:
    if (ctx->pc == 0x129A94u) {
        ctx->pc = 0x129A98u;
        goto label_129a98;
    }
    ctx->pc = 0x129A90u;
    SET_GPR_U32(ctx, 31, 0x129A98u);
    ctx->pc = 0x124E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E50u, 0x129A90u, 0x129A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129A98u;
label_129a98:
    // 0x129a98: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x129a98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
label_129a9c:
    // 0x129a9c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x129a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_129aa0:
    // 0x129aa0: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x129aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
label_129aa4:
    // 0x129aa4: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x129aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_129aa8:
    // 0x129aa8: 0xc04a6e8  jal         func_129BA0
label_129aac:
    if (ctx->pc == 0x129AACu) {
        ctx->pc = 0x129AB0u;
        goto label_129ab0;
    }
    ctx->pc = 0x129AA8u;
    SET_GPR_U32(ctx, 31, 0x129AB0u);
    ctx->pc = 0x129BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129BA0u, 0x129AA8u, 0x129AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129AB0u;
label_129ab0:
    // 0x129ab0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x129ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_129ab4:
    // 0x129ab4: 0xc04a804  jal         func_12A010
label_129ab8:
    if (ctx->pc == 0x129AB8u) {
        ctx->pc = 0x129ABCu;
        goto label_129abc;
    }
    ctx->pc = 0x129AB4u;
    SET_GPR_U32(ctx, 31, 0x129ABCu);
    ctx->pc = 0x12A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A010u, 0x129AB4u, 0x129ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129ABCu;
label_129abc:
    // 0x129abc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x129abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_129ac0:
    // 0x129ac0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x129ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_129ac4:
    // 0x129ac4: 0x24a52498  addiu       $a1, $a1, 0x2498
    ctx->pc = 0x129ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9368));
label_129ac8:
    // 0x129ac8: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x129ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_129acc:
    // 0x129acc: 0x27878b50  addiu       $a3, $gp, -0x74B0
    ctx->pc = 0x129accu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937424));
label_129ad0:
    // 0x129ad0: 0xc0424a8  jal         func_1092A0
label_129ad4:
    if (ctx->pc == 0x129AD4u) {
        ctx->pc = 0x129AD8u;
        goto label_129ad8;
    }
    ctx->pc = 0x129AD0u;
    SET_GPR_U32(ctx, 31, 0x129AD8u);
    ctx->pc = 0x1092A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1092A0u, 0x129AD0u, 0x129AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129AD8u;
label_129ad8:
    // 0x129ad8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x129ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_129adc:
    // 0x129adc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x129adcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_129ae0:
    // 0x129ae0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x129ae0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_129ae4:
    // 0x129ae4: 0x320f809  jalr        $t9
label_129ae8:
    if (ctx->pc == 0x129AE8u) {
        ctx->pc = 0x129AECu;
        goto label_129aec;
    }
    ctx->pc = 0x129AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x129AECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129AE4u, 0x129AECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x129AECu;
label_129aec:
    // 0x129aec: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x129aecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
label_129af0:
    // 0x129af0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x129af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_129af4:
    // 0x129af4: 0xc049394  jal         func_124E50
label_129af8:
    if (ctx->pc == 0x129AF8u) {
        ctx->pc = 0x129AFCu;
        goto label_129afc;
    }
    ctx->pc = 0x129AF4u;
    SET_GPR_U32(ctx, 31, 0x129AFCu);
    ctx->pc = 0x124E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E50u, 0x129AF4u, 0x129AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129AFCu;
label_129afc:
    // 0x129afc: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x129afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
label_129b00:
    // 0x129b00: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x129b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_129b04:
    // 0x129b04: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x129b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
label_129b08:
    // 0x129b08: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x129b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_129b0c:
    // 0x129b0c: 0xc04a6e8  jal         func_129BA0
label_129b10:
    if (ctx->pc == 0x129B10u) {
        ctx->pc = 0x129B14u;
        goto label_129b14;
    }
    ctx->pc = 0x129B0Cu;
    SET_GPR_U32(ctx, 31, 0x129B14u);
    ctx->pc = 0x129BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129BA0u, 0x129B0Cu, 0x129B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129B14u;
label_129b14:
    // 0x129b14: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x129b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_129b18:
    // 0x129b18: 0xc04a804  jal         func_12A010
label_129b1c:
    if (ctx->pc == 0x129B1Cu) {
        ctx->pc = 0x129B20u;
        goto label_129b20;
    }
    ctx->pc = 0x129B18u;
    SET_GPR_U32(ctx, 31, 0x129B20u);
    ctx->pc = 0x12A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A010u, 0x129B18u, 0x129B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129B20u;
label_129b20:
    // 0x129b20: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x129b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_129b24:
    // 0x129b24: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x129b24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_129b28:
    // 0x129b28: 0x24a52290  addiu       $a1, $a1, 0x2290
    ctx->pc = 0x129b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8848));
label_129b2c:
    // 0x129b2c: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x129b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_129b30:
    // 0x129b30: 0x27878b50  addiu       $a3, $gp, -0x74B0
    ctx->pc = 0x129b30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937424));
label_129b34:
    // 0x129b34: 0xc0424a8  jal         func_1092A0
label_129b38:
    if (ctx->pc == 0x129B38u) {
        ctx->pc = 0x129B3Cu;
        goto label_129b3c;
    }
    ctx->pc = 0x129B34u;
    SET_GPR_U32(ctx, 31, 0x129B3Cu);
    ctx->pc = 0x1092A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1092A0u, 0x129B34u, 0x129B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129B3Cu;
label_129b3c:
    // 0x129b3c: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x129b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_129b40:
    // 0x129b40: 0x8c422224  lw          $v0, 0x2224($v0)
    ctx->pc = 0x129b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8740)));
label_129b44:
    // 0x129b44: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x129b44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
label_129b48:
    // 0x129b48: 0xafb20090  sw          $s2, 0x90($sp)
    ctx->pc = 0x129b48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 18));
label_129b4c:
    // 0x129b4c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x129b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_129b50:
    // 0x129b50: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x129b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
label_129b54:
    // 0x129b54: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x129b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_129b58:
    // 0x129b58: 0xc04a6e8  jal         func_129BA0
label_129b5c:
    if (ctx->pc == 0x129B5Cu) {
        ctx->pc = 0x129B60u;
        goto label_129b60;
    }
    ctx->pc = 0x129B58u;
    SET_GPR_U32(ctx, 31, 0x129B60u);
    ctx->pc = 0x129BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129BA0u, 0x129B58u, 0x129B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129B60u;
label_129b60:
    // 0x129b60: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x129b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_129b64:
    // 0x129b64: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x129b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_129b68:
    // 0x129b68: 0xc048d3c  jal         func_1234F0
label_129b6c:
    if (ctx->pc == 0x129B6Cu) {
        ctx->pc = 0x129B70u;
        goto label_129b70;
    }
    ctx->pc = 0x129B68u;
    SET_GPR_U32(ctx, 31, 0x129B70u);
    ctx->pc = 0x1234F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1234F0u, 0x129B68u, 0x129B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129B70u;
label_129b70:
    // 0x129b70: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x129b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_129b74:
    // 0x129b74: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x129b74u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_129b78:
    // 0x129b78: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x129b78u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_129b7c:
    // 0x129b7c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x129b7cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_129b80:
    // 0x129b80: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x129b80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_129b84:
    // 0x129b84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x129b84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_129b88:
    // 0x129b88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x129b88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_129b8c:
    // 0x129b8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x129b8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_129b90:
    // 0x129b90: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x129b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_129b94:
    // 0x129b94: 0x3e00008  jr          $ra
label_129b98:
    if (ctx->pc == 0x129B98u) {
        ctx->pc = 0x129B9Cu;
        goto label_129b9c;
    }
    ctx->pc = 0x129B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129B94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x129B9Cu;
label_129b9c:
    // 0x129b9c: 0x0  nop
    ctx->pc = 0x129b9cu;
    // NOP
    ctx->pc = 0x129ba0u;
}
