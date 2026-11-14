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

// Function: sub_0046F940
// Address: 0x46f940 - 0x46feb0
void sub_0046F940_0x46f940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046F940_0x46f940");
#endif

    switch (ctx->pc) {
        case 0x46f940u: goto label_46f940;
        case 0x46f944u: goto label_46f944;
        case 0x46f948u: goto label_46f948;
        case 0x46f94cu: goto label_46f94c;
        case 0x46f950u: goto label_46f950;
        case 0x46f954u: goto label_46f954;
        case 0x46f958u: goto label_46f958;
        case 0x46f95cu: goto label_46f95c;
        case 0x46f960u: goto label_46f960;
        case 0x46f964u: goto label_46f964;
        case 0x46f968u: goto label_46f968;
        case 0x46f96cu: goto label_46f96c;
        case 0x46f970u: goto label_46f970;
        case 0x46f974u: goto label_46f974;
        case 0x46f978u: goto label_46f978;
        case 0x46f97cu: goto label_46f97c;
        case 0x46f980u: goto label_46f980;
        case 0x46f984u: goto label_46f984;
        case 0x46f988u: goto label_46f988;
        case 0x46f98cu: goto label_46f98c;
        case 0x46f990u: goto label_46f990;
        case 0x46f994u: goto label_46f994;
        case 0x46f998u: goto label_46f998;
        case 0x46f99cu: goto label_46f99c;
        case 0x46f9a0u: goto label_46f9a0;
        case 0x46f9a4u: goto label_46f9a4;
        case 0x46f9a8u: goto label_46f9a8;
        case 0x46f9acu: goto label_46f9ac;
        case 0x46f9b0u: goto label_46f9b0;
        case 0x46f9b4u: goto label_46f9b4;
        case 0x46f9b8u: goto label_46f9b8;
        case 0x46f9bcu: goto label_46f9bc;
        case 0x46f9c0u: goto label_46f9c0;
        case 0x46f9c4u: goto label_46f9c4;
        case 0x46f9c8u: goto label_46f9c8;
        case 0x46f9ccu: goto label_46f9cc;
        case 0x46f9d0u: goto label_46f9d0;
        case 0x46f9d4u: goto label_46f9d4;
        case 0x46f9d8u: goto label_46f9d8;
        case 0x46f9dcu: goto label_46f9dc;
        case 0x46f9e0u: goto label_46f9e0;
        case 0x46f9e4u: goto label_46f9e4;
        case 0x46f9e8u: goto label_46f9e8;
        case 0x46f9ecu: goto label_46f9ec;
        case 0x46f9f0u: goto label_46f9f0;
        case 0x46f9f4u: goto label_46f9f4;
        case 0x46f9f8u: goto label_46f9f8;
        case 0x46f9fcu: goto label_46f9fc;
        case 0x46fa00u: goto label_46fa00;
        case 0x46fa04u: goto label_46fa04;
        case 0x46fa08u: goto label_46fa08;
        case 0x46fa0cu: goto label_46fa0c;
        case 0x46fa10u: goto label_46fa10;
        case 0x46fa14u: goto label_46fa14;
        case 0x46fa18u: goto label_46fa18;
        case 0x46fa1cu: goto label_46fa1c;
        case 0x46fa20u: goto label_46fa20;
        case 0x46fa24u: goto label_46fa24;
        case 0x46fa28u: goto label_46fa28;
        case 0x46fa2cu: goto label_46fa2c;
        case 0x46fa30u: goto label_46fa30;
        case 0x46fa34u: goto label_46fa34;
        case 0x46fa38u: goto label_46fa38;
        case 0x46fa3cu: goto label_46fa3c;
        case 0x46fa40u: goto label_46fa40;
        case 0x46fa44u: goto label_46fa44;
        case 0x46fa48u: goto label_46fa48;
        case 0x46fa4cu: goto label_46fa4c;
        case 0x46fa50u: goto label_46fa50;
        case 0x46fa54u: goto label_46fa54;
        case 0x46fa58u: goto label_46fa58;
        case 0x46fa5cu: goto label_46fa5c;
        case 0x46fa60u: goto label_46fa60;
        case 0x46fa64u: goto label_46fa64;
        case 0x46fa68u: goto label_46fa68;
        case 0x46fa6cu: goto label_46fa6c;
        case 0x46fa70u: goto label_46fa70;
        case 0x46fa74u: goto label_46fa74;
        case 0x46fa78u: goto label_46fa78;
        case 0x46fa7cu: goto label_46fa7c;
        case 0x46fa80u: goto label_46fa80;
        case 0x46fa84u: goto label_46fa84;
        case 0x46fa88u: goto label_46fa88;
        case 0x46fa8cu: goto label_46fa8c;
        case 0x46fa90u: goto label_46fa90;
        case 0x46fa94u: goto label_46fa94;
        case 0x46fa98u: goto label_46fa98;
        case 0x46fa9cu: goto label_46fa9c;
        case 0x46faa0u: goto label_46faa0;
        case 0x46faa4u: goto label_46faa4;
        case 0x46faa8u: goto label_46faa8;
        case 0x46faacu: goto label_46faac;
        case 0x46fab0u: goto label_46fab0;
        case 0x46fab4u: goto label_46fab4;
        case 0x46fab8u: goto label_46fab8;
        case 0x46fabcu: goto label_46fabc;
        case 0x46fac0u: goto label_46fac0;
        case 0x46fac4u: goto label_46fac4;
        case 0x46fac8u: goto label_46fac8;
        case 0x46faccu: goto label_46facc;
        case 0x46fad0u: goto label_46fad0;
        case 0x46fad4u: goto label_46fad4;
        case 0x46fad8u: goto label_46fad8;
        case 0x46fadcu: goto label_46fadc;
        case 0x46fae0u: goto label_46fae0;
        case 0x46fae4u: goto label_46fae4;
        case 0x46fae8u: goto label_46fae8;
        case 0x46faecu: goto label_46faec;
        case 0x46faf0u: goto label_46faf0;
        case 0x46faf4u: goto label_46faf4;
        case 0x46faf8u: goto label_46faf8;
        case 0x46fafcu: goto label_46fafc;
        case 0x46fb00u: goto label_46fb00;
        case 0x46fb04u: goto label_46fb04;
        case 0x46fb08u: goto label_46fb08;
        case 0x46fb0cu: goto label_46fb0c;
        case 0x46fb10u: goto label_46fb10;
        case 0x46fb14u: goto label_46fb14;
        case 0x46fb18u: goto label_46fb18;
        case 0x46fb1cu: goto label_46fb1c;
        case 0x46fb20u: goto label_46fb20;
        case 0x46fb24u: goto label_46fb24;
        case 0x46fb28u: goto label_46fb28;
        case 0x46fb2cu: goto label_46fb2c;
        case 0x46fb30u: goto label_46fb30;
        case 0x46fb34u: goto label_46fb34;
        case 0x46fb38u: goto label_46fb38;
        case 0x46fb3cu: goto label_46fb3c;
        case 0x46fb40u: goto label_46fb40;
        case 0x46fb44u: goto label_46fb44;
        case 0x46fb48u: goto label_46fb48;
        case 0x46fb4cu: goto label_46fb4c;
        case 0x46fb50u: goto label_46fb50;
        case 0x46fb54u: goto label_46fb54;
        case 0x46fb58u: goto label_46fb58;
        case 0x46fb5cu: goto label_46fb5c;
        case 0x46fb60u: goto label_46fb60;
        case 0x46fb64u: goto label_46fb64;
        case 0x46fb68u: goto label_46fb68;
        case 0x46fb6cu: goto label_46fb6c;
        case 0x46fb70u: goto label_46fb70;
        case 0x46fb74u: goto label_46fb74;
        case 0x46fb78u: goto label_46fb78;
        case 0x46fb7cu: goto label_46fb7c;
        case 0x46fb80u: goto label_46fb80;
        case 0x46fb84u: goto label_46fb84;
        case 0x46fb88u: goto label_46fb88;
        case 0x46fb8cu: goto label_46fb8c;
        case 0x46fb90u: goto label_46fb90;
        case 0x46fb94u: goto label_46fb94;
        case 0x46fb98u: goto label_46fb98;
        case 0x46fb9cu: goto label_46fb9c;
        case 0x46fba0u: goto label_46fba0;
        case 0x46fba4u: goto label_46fba4;
        case 0x46fba8u: goto label_46fba8;
        case 0x46fbacu: goto label_46fbac;
        case 0x46fbb0u: goto label_46fbb0;
        case 0x46fbb4u: goto label_46fbb4;
        case 0x46fbb8u: goto label_46fbb8;
        case 0x46fbbcu: goto label_46fbbc;
        case 0x46fbc0u: goto label_46fbc0;
        case 0x46fbc4u: goto label_46fbc4;
        case 0x46fbc8u: goto label_46fbc8;
        case 0x46fbccu: goto label_46fbcc;
        case 0x46fbd0u: goto label_46fbd0;
        case 0x46fbd4u: goto label_46fbd4;
        case 0x46fbd8u: goto label_46fbd8;
        case 0x46fbdcu: goto label_46fbdc;
        case 0x46fbe0u: goto label_46fbe0;
        case 0x46fbe4u: goto label_46fbe4;
        case 0x46fbe8u: goto label_46fbe8;
        case 0x46fbecu: goto label_46fbec;
        case 0x46fbf0u: goto label_46fbf0;
        case 0x46fbf4u: goto label_46fbf4;
        case 0x46fbf8u: goto label_46fbf8;
        case 0x46fbfcu: goto label_46fbfc;
        case 0x46fc00u: goto label_46fc00;
        case 0x46fc04u: goto label_46fc04;
        case 0x46fc08u: goto label_46fc08;
        case 0x46fc0cu: goto label_46fc0c;
        case 0x46fc10u: goto label_46fc10;
        case 0x46fc14u: goto label_46fc14;
        case 0x46fc18u: goto label_46fc18;
        case 0x46fc1cu: goto label_46fc1c;
        case 0x46fc20u: goto label_46fc20;
        case 0x46fc24u: goto label_46fc24;
        case 0x46fc28u: goto label_46fc28;
        case 0x46fc2cu: goto label_46fc2c;
        case 0x46fc30u: goto label_46fc30;
        case 0x46fc34u: goto label_46fc34;
        case 0x46fc38u: goto label_46fc38;
        case 0x46fc3cu: goto label_46fc3c;
        case 0x46fc40u: goto label_46fc40;
        case 0x46fc44u: goto label_46fc44;
        case 0x46fc48u: goto label_46fc48;
        case 0x46fc4cu: goto label_46fc4c;
        case 0x46fc50u: goto label_46fc50;
        case 0x46fc54u: goto label_46fc54;
        case 0x46fc58u: goto label_46fc58;
        case 0x46fc5cu: goto label_46fc5c;
        case 0x46fc60u: goto label_46fc60;
        case 0x46fc64u: goto label_46fc64;
        case 0x46fc68u: goto label_46fc68;
        case 0x46fc6cu: goto label_46fc6c;
        case 0x46fc70u: goto label_46fc70;
        case 0x46fc74u: goto label_46fc74;
        case 0x46fc78u: goto label_46fc78;
        case 0x46fc7cu: goto label_46fc7c;
        case 0x46fc80u: goto label_46fc80;
        case 0x46fc84u: goto label_46fc84;
        case 0x46fc88u: goto label_46fc88;
        case 0x46fc8cu: goto label_46fc8c;
        case 0x46fc90u: goto label_46fc90;
        case 0x46fc94u: goto label_46fc94;
        case 0x46fc98u: goto label_46fc98;
        case 0x46fc9cu: goto label_46fc9c;
        case 0x46fca0u: goto label_46fca0;
        case 0x46fca4u: goto label_46fca4;
        case 0x46fca8u: goto label_46fca8;
        case 0x46fcacu: goto label_46fcac;
        case 0x46fcb0u: goto label_46fcb0;
        case 0x46fcb4u: goto label_46fcb4;
        case 0x46fcb8u: goto label_46fcb8;
        case 0x46fcbcu: goto label_46fcbc;
        case 0x46fcc0u: goto label_46fcc0;
        case 0x46fcc4u: goto label_46fcc4;
        case 0x46fcc8u: goto label_46fcc8;
        case 0x46fcccu: goto label_46fccc;
        case 0x46fcd0u: goto label_46fcd0;
        case 0x46fcd4u: goto label_46fcd4;
        case 0x46fcd8u: goto label_46fcd8;
        case 0x46fcdcu: goto label_46fcdc;
        case 0x46fce0u: goto label_46fce0;
        case 0x46fce4u: goto label_46fce4;
        case 0x46fce8u: goto label_46fce8;
        case 0x46fcecu: goto label_46fcec;
        case 0x46fcf0u: goto label_46fcf0;
        case 0x46fcf4u: goto label_46fcf4;
        case 0x46fcf8u: goto label_46fcf8;
        case 0x46fcfcu: goto label_46fcfc;
        case 0x46fd00u: goto label_46fd00;
        case 0x46fd04u: goto label_46fd04;
        case 0x46fd08u: goto label_46fd08;
        case 0x46fd0cu: goto label_46fd0c;
        case 0x46fd10u: goto label_46fd10;
        case 0x46fd14u: goto label_46fd14;
        case 0x46fd18u: goto label_46fd18;
        case 0x46fd1cu: goto label_46fd1c;
        case 0x46fd20u: goto label_46fd20;
        case 0x46fd24u: goto label_46fd24;
        case 0x46fd28u: goto label_46fd28;
        case 0x46fd2cu: goto label_46fd2c;
        case 0x46fd30u: goto label_46fd30;
        case 0x46fd34u: goto label_46fd34;
        case 0x46fd38u: goto label_46fd38;
        case 0x46fd3cu: goto label_46fd3c;
        case 0x46fd40u: goto label_46fd40;
        case 0x46fd44u: goto label_46fd44;
        case 0x46fd48u: goto label_46fd48;
        case 0x46fd4cu: goto label_46fd4c;
        case 0x46fd50u: goto label_46fd50;
        case 0x46fd54u: goto label_46fd54;
        case 0x46fd58u: goto label_46fd58;
        case 0x46fd5cu: goto label_46fd5c;
        case 0x46fd60u: goto label_46fd60;
        case 0x46fd64u: goto label_46fd64;
        case 0x46fd68u: goto label_46fd68;
        case 0x46fd6cu: goto label_46fd6c;
        case 0x46fd70u: goto label_46fd70;
        case 0x46fd74u: goto label_46fd74;
        case 0x46fd78u: goto label_46fd78;
        case 0x46fd7cu: goto label_46fd7c;
        case 0x46fd80u: goto label_46fd80;
        case 0x46fd84u: goto label_46fd84;
        case 0x46fd88u: goto label_46fd88;
        case 0x46fd8cu: goto label_46fd8c;
        case 0x46fd90u: goto label_46fd90;
        case 0x46fd94u: goto label_46fd94;
        case 0x46fd98u: goto label_46fd98;
        case 0x46fd9cu: goto label_46fd9c;
        case 0x46fda0u: goto label_46fda0;
        case 0x46fda4u: goto label_46fda4;
        case 0x46fda8u: goto label_46fda8;
        case 0x46fdacu: goto label_46fdac;
        case 0x46fdb0u: goto label_46fdb0;
        case 0x46fdb4u: goto label_46fdb4;
        case 0x46fdb8u: goto label_46fdb8;
        case 0x46fdbcu: goto label_46fdbc;
        case 0x46fdc0u: goto label_46fdc0;
        case 0x46fdc4u: goto label_46fdc4;
        case 0x46fdc8u: goto label_46fdc8;
        case 0x46fdccu: goto label_46fdcc;
        case 0x46fdd0u: goto label_46fdd0;
        case 0x46fdd4u: goto label_46fdd4;
        case 0x46fdd8u: goto label_46fdd8;
        case 0x46fddcu: goto label_46fddc;
        case 0x46fde0u: goto label_46fde0;
        case 0x46fde4u: goto label_46fde4;
        case 0x46fde8u: goto label_46fde8;
        case 0x46fdecu: goto label_46fdec;
        case 0x46fdf0u: goto label_46fdf0;
        case 0x46fdf4u: goto label_46fdf4;
        case 0x46fdf8u: goto label_46fdf8;
        case 0x46fdfcu: goto label_46fdfc;
        case 0x46fe00u: goto label_46fe00;
        case 0x46fe04u: goto label_46fe04;
        case 0x46fe08u: goto label_46fe08;
        case 0x46fe0cu: goto label_46fe0c;
        case 0x46fe10u: goto label_46fe10;
        case 0x46fe14u: goto label_46fe14;
        case 0x46fe18u: goto label_46fe18;
        case 0x46fe1cu: goto label_46fe1c;
        case 0x46fe20u: goto label_46fe20;
        case 0x46fe24u: goto label_46fe24;
        case 0x46fe28u: goto label_46fe28;
        case 0x46fe2cu: goto label_46fe2c;
        case 0x46fe30u: goto label_46fe30;
        case 0x46fe34u: goto label_46fe34;
        case 0x46fe38u: goto label_46fe38;
        case 0x46fe3cu: goto label_46fe3c;
        case 0x46fe40u: goto label_46fe40;
        case 0x46fe44u: goto label_46fe44;
        case 0x46fe48u: goto label_46fe48;
        case 0x46fe4cu: goto label_46fe4c;
        case 0x46fe50u: goto label_46fe50;
        case 0x46fe54u: goto label_46fe54;
        case 0x46fe58u: goto label_46fe58;
        case 0x46fe5cu: goto label_46fe5c;
        case 0x46fe60u: goto label_46fe60;
        case 0x46fe64u: goto label_46fe64;
        case 0x46fe68u: goto label_46fe68;
        case 0x46fe6cu: goto label_46fe6c;
        case 0x46fe70u: goto label_46fe70;
        case 0x46fe74u: goto label_46fe74;
        case 0x46fe78u: goto label_46fe78;
        case 0x46fe7cu: goto label_46fe7c;
        case 0x46fe80u: goto label_46fe80;
        case 0x46fe84u: goto label_46fe84;
        case 0x46fe88u: goto label_46fe88;
        case 0x46fe8cu: goto label_46fe8c;
        case 0x46fe90u: goto label_46fe90;
        case 0x46fe94u: goto label_46fe94;
        case 0x46fe98u: goto label_46fe98;
        case 0x46fe9cu: goto label_46fe9c;
        case 0x46fea0u: goto label_46fea0;
        case 0x46fea4u: goto label_46fea4;
        case 0x46fea8u: goto label_46fea8;
        case 0x46feacu: goto label_46feac;
        default: break;
    }

    ctx->pc = 0x46f940u;

label_46f940:
    // 0x46f940: 0x27bdfad0  addiu       $sp, $sp, -0x530
    ctx->pc = 0x46f940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965968));
label_46f944:
    // 0x46f944: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x46f944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_46f948:
    // 0x46f948: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46f948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_46f94c:
    // 0x46f94c: 0xafa40520  sw          $a0, 0x520($sp)
    ctx->pc = 0x46f94cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1312), GPR_U32(ctx, 4));
label_46f950:
    // 0x46f950: 0xc0e9e2a  jal         func_3A78A8
label_46f954:
    if (ctx->pc == 0x46F954u) {
        ctx->pc = 0x46F958u;
        goto label_46f958;
    }
    ctx->pc = 0x46F950u;
    SET_GPR_U32(ctx, 31, 0x46F958u);
    ctx->pc = 0x3A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A78A8u, 0x46F950u, 0x46F958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46F958u;
label_46f958:
    // 0x46f958: 0x8fa30520  lw          $v1, 0x520($sp)
    ctx->pc = 0x46f958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1312)));
label_46f95c:
    // 0x46f95c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x46f95cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_46f960:
    // 0x46f960: 0x8fa20520  lw          $v0, 0x520($sp)
    ctx->pc = 0x46f960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1312)));
label_46f964:
    // 0x46f964: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x46f964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46f968:
    // 0x46f968: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x46f968u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_46f96c:
    // 0x46f96c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x46f96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_46f970:
    // 0x46f970: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_46f974:
    if (ctx->pc == 0x46F974u) {
        ctx->pc = 0x46F978u;
        goto label_46f978;
    }
    ctx->pc = 0x46F970u;
    {
        const bool branch_taken_0x46f970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46f970) {
            ctx->pc = 0x46FA20u;
            goto label_46fa20;
        }
    }
    ctx->pc = 0x46F978u;
label_46f978:
    // 0x46f978: 0x8f82b324  lw          $v0, -0x4CDC($gp)
    ctx->pc = 0x46f978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947620)));
label_46f97c:
    // 0x46f97c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_46f980:
    if (ctx->pc == 0x46F980u) {
        ctx->pc = 0x46F984u;
        goto label_46f984;
    }
    ctx->pc = 0x46F97Cu;
    {
        const bool branch_taken_0x46f97c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46f97c) {
            ctx->pc = 0x46FA20u;
            goto label_46fa20;
        }
    }
    ctx->pc = 0x46F984u;
label_46f984:
    // 0x46f984: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x46f984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_46f988:
    // 0x46f988: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x46f988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_46f98c:
    // 0x46f98c: 0x27a60510  addiu       $a2, $sp, 0x510
    ctx->pc = 0x46f98cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1296));
label_46f990:
    // 0x46f990: 0xc115ee8  jal         func_457BA0
label_46f994:
    if (ctx->pc == 0x46F994u) {
        ctx->pc = 0x46F998u;
        goto label_46f998;
    }
    ctx->pc = 0x46F990u;
    SET_GPR_U32(ctx, 31, 0x46F998u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x46F990u, 0x46F998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46F998u;
label_46f998:
    // 0x46f998: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_46f99c:
    if (ctx->pc == 0x46F99Cu) {
        ctx->pc = 0x46F9A0u;
        goto label_46f9a0;
    }
    ctx->pc = 0x46F998u;
    {
        const bool branch_taken_0x46f998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46f998) {
            ctx->pc = 0x46FA20u;
            goto label_46fa20;
        }
    }
    ctx->pc = 0x46F9A0u;
label_46f9a0:
    // 0x46f9a0: 0x8fa20518  lw          $v0, 0x518($sp)
    ctx->pc = 0x46f9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1304)));
label_46f9a4:
    // 0x46f9a4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_46f9a8:
    if (ctx->pc == 0x46F9A8u) {
        ctx->pc = 0x46F9ACu;
        goto label_46f9ac;
    }
    ctx->pc = 0x46F9A4u;
    {
        const bool branch_taken_0x46f9a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46f9a4) {
            ctx->pc = 0x46FA20u;
            goto label_46fa20;
        }
    }
    ctx->pc = 0x46F9ACu;
label_46f9ac:
    // 0x46f9ac: 0x27a403a0  addiu       $a0, $sp, 0x3A0
    ctx->pc = 0x46f9acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_46f9b0:
    // 0x46f9b0: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x46f9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_46f9b4:
    // 0x46f9b4: 0x8fa60514  lw          $a2, 0x514($sp)
    ctx->pc = 0x46f9b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1300)));
label_46f9b8:
    // 0x46f9b8: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x46f9b8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_46f9bc:
    // 0x46f9bc: 0x24e7fbf0  addiu       $a3, $a3, -0x410
    ctx->pc = 0x46f9bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966256));
label_46f9c0:
    // 0x46f9c0: 0x24080075  addiu       $t0, $zero, 0x75
    ctx->pc = 0x46f9c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
label_46f9c4:
    // 0x46f9c4: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x46f9c4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_46f9c8:
    // 0x46f9c8: 0x2529fc80  addiu       $t1, $t1, -0x380
    ctx->pc = 0x46f9c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966400));
label_46f9cc:
    // 0x46f9cc: 0xc113940  jal         func_44E500
label_46f9d0:
    if (ctx->pc == 0x46F9D0u) {
        ctx->pc = 0x46F9D4u;
        goto label_46f9d4;
    }
    ctx->pc = 0x46F9CCu;
    SET_GPR_U32(ctx, 31, 0x46F9D4u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x46F9CCu, 0x46F9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46F9D4u;
label_46f9d4:
    // 0x46f9d4: 0x27a403a0  addiu       $a0, $sp, 0x3A0
    ctx->pc = 0x46f9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_46f9d8:
    // 0x46f9d8: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x46f9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_46f9dc:
    // 0x46f9dc: 0x24a5fca0  addiu       $a1, $a1, -0x360
    ctx->pc = 0x46f9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966432));
label_46f9e0:
    // 0x46f9e0: 0xc115c24  jal         func_457090
label_46f9e4:
    if (ctx->pc == 0x46F9E4u) {
        ctx->pc = 0x46F9E8u;
        goto label_46f9e8;
    }
    ctx->pc = 0x46F9E0u;
    SET_GPR_U32(ctx, 31, 0x46F9E8u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x46F9E0u, 0x46F9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46F9E8u;
label_46f9e8:
    // 0x46f9e8: 0x27a403a0  addiu       $a0, $sp, 0x3A0
    ctx->pc = 0x46f9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_46f9ec:
    // 0x46f9ec: 0x8fa20518  lw          $v0, 0x518($sp)
    ctx->pc = 0x46f9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1304)));
label_46f9f0:
    // 0x46f9f0: 0x40f809  jalr        $v0
label_46f9f4:
    if (ctx->pc == 0x46F9F4u) {
        ctx->pc = 0x46F9F8u;
        goto label_46f9f8;
    }
    ctx->pc = 0x46F9F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46F9F8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46F9F0u, 0x46F9F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46F9F8u;
label_46f9f8:
    // 0x46f9f8: 0xaf82b324  sw          $v0, -0x4CDC($gp)
    ctx->pc = 0x46f9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947620), GPR_U32(ctx, 2));
label_46f9fc:
    // 0x46f9fc: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x46f9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_46fa00:
    // 0x46fa00: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_46fa04:
    if (ctx->pc == 0x46FA04u) {
        ctx->pc = 0x46FA08u;
        goto label_46fa08;
    }
    ctx->pc = 0x46FA00u;
    {
        const bool branch_taken_0x46fa00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46fa00) {
            ctx->pc = 0x46FA10u;
            goto label_46fa10;
        }
    }
    ctx->pc = 0x46FA08u;
label_46fa08:
    // 0x46fa08: 0xd  break       0
    ctx->pc = 0x46fa08u;
    runtime->handleBreak(rdram, ctx);
label_46fa0c:
    // 0x46fa0c: 0x0  nop
    ctx->pc = 0x46fa0cu;
    // NOP
label_46fa10:
    // 0x46fa10: 0x27a403a0  addiu       $a0, $sp, 0x3A0
    ctx->pc = 0x46fa10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_46fa14:
    // 0x46fa14: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46fa14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_46fa18:
    // 0x46fa18: 0xc11392c  jal         func_44E4B0
label_46fa1c:
    if (ctx->pc == 0x46FA1Cu) {
        ctx->pc = 0x46FA20u;
        goto label_46fa20;
    }
    ctx->pc = 0x46FA18u;
    SET_GPR_U32(ctx, 31, 0x46FA20u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x46FA18u, 0x46FA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46FA20u;
label_46fa20:
    // 0x46fa20: 0x8fa20520  lw          $v0, 0x520($sp)
    ctx->pc = 0x46fa20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1312)));
label_46fa24:
    // 0x46fa24: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x46fa24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_46fa28:
    // 0x46fa28: 0x104000cf  beqz        $v0, . + 4 + (0xCF << 2)
label_46fa2c:
    if (ctx->pc == 0x46FA2Cu) {
        ctx->pc = 0x46FA30u;
        goto label_46fa30;
    }
    ctx->pc = 0x46FA28u;
    {
        const bool branch_taken_0x46fa28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46fa28) {
            ctx->pc = 0x46FD68u;
            goto label_46fd68;
        }
    }
    ctx->pc = 0x46FA30u;
label_46fa30:
    // 0x46fa30: 0x8fa30520  lw          $v1, 0x520($sp)
    ctx->pc = 0x46fa30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1312)));
label_46fa34:
    // 0x46fa34: 0x8fa20520  lw          $v0, 0x520($sp)
    ctx->pc = 0x46fa34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1312)));
label_46fa38:
    // 0x46fa38: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x46fa38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_46fa3c:
    // 0x46fa3c: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x46fa3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_46fa40:
    // 0x46fa40: 0xc0e9f00  jal         func_3A7C00
label_46fa44:
    if (ctx->pc == 0x46FA44u) {
        ctx->pc = 0x46FA48u;
        goto label_46fa48;
    }
    ctx->pc = 0x46FA40u;
    SET_GPR_U32(ctx, 31, 0x46FA48u);
    ctx->pc = 0x3A7C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7C00u, 0x46FA40u, 0x46FA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46FA48u;
label_46fa48:
    // 0x46fa48: 0x8fa30520  lw          $v1, 0x520($sp)
    ctx->pc = 0x46fa48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1312)));
label_46fa4c:
    // 0x46fa4c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x46fa4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_46fa50:
    // 0x46fa50: 0x8fa20520  lw          $v0, 0x520($sp)
    ctx->pc = 0x46fa50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1312)));
label_46fa54:
    // 0x46fa54: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x46fa54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46fa58:
    // 0x46fa58: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x46fa58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_46fa5c:
    // 0x46fa5c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x46fa5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_46fa60:
    // 0x46fa60: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_46fa64:
    if (ctx->pc == 0x46FA64u) {
        ctx->pc = 0x46FA68u;
        goto label_46fa68;
    }
    ctx->pc = 0x46FA60u;
    {
        const bool branch_taken_0x46fa60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46fa60) {
            ctx->pc = 0x46FB10u;
            goto label_46fb10;
        }
    }
    ctx->pc = 0x46FA68u;
label_46fa68:
    // 0x46fa68: 0x8f82b328  lw          $v0, -0x4CD8($gp)
    ctx->pc = 0x46fa68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947624)));
label_46fa6c:
    // 0x46fa6c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_46fa70:
    if (ctx->pc == 0x46FA70u) {
        ctx->pc = 0x46FA74u;
        goto label_46fa74;
    }
    ctx->pc = 0x46FA6Cu;
    {
        const bool branch_taken_0x46fa6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46fa6c) {
            ctx->pc = 0x46FB10u;
            goto label_46fb10;
        }
    }
    ctx->pc = 0x46FA74u;
label_46fa74:
    // 0x46fa74: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x46fa74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_46fa78:
    // 0x46fa78: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x46fa78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_46fa7c:
    // 0x46fa7c: 0x27a60500  addiu       $a2, $sp, 0x500
    ctx->pc = 0x46fa7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1280));
label_46fa80:
    // 0x46fa80: 0xc115ee8  jal         func_457BA0
label_46fa84:
    if (ctx->pc == 0x46FA84u) {
        ctx->pc = 0x46FA88u;
        goto label_46fa88;
    }
    ctx->pc = 0x46FA80u;
    SET_GPR_U32(ctx, 31, 0x46FA88u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x46FA80u, 0x46FA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46FA88u;
label_46fa88:
    // 0x46fa88: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_46fa8c:
    if (ctx->pc == 0x46FA8Cu) {
        ctx->pc = 0x46FA90u;
        goto label_46fa90;
    }
    ctx->pc = 0x46FA88u;
    {
        const bool branch_taken_0x46fa88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46fa88) {
            ctx->pc = 0x46FB10u;
            goto label_46fb10;
        }
    }
    ctx->pc = 0x46FA90u;
label_46fa90:
    // 0x46fa90: 0x8fa20508  lw          $v0, 0x508($sp)
    ctx->pc = 0x46fa90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1288)));
label_46fa94:
    // 0x46fa94: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_46fa98:
    if (ctx->pc == 0x46FA98u) {
        ctx->pc = 0x46FA9Cu;
        goto label_46fa9c;
    }
    ctx->pc = 0x46FA94u;
    {
        const bool branch_taken_0x46fa94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46fa94) {
            ctx->pc = 0x46FB10u;
            goto label_46fb10;
        }
    }
    ctx->pc = 0x46FA9Cu;
label_46fa9c:
    // 0x46fa9c: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x46fa9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_46faa0:
    // 0x46faa0: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x46faa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_46faa4:
    // 0x46faa4: 0x8fa60504  lw          $a2, 0x504($sp)
    ctx->pc = 0x46faa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1284)));
label_46faa8:
    // 0x46faa8: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x46faa8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_46faac:
    // 0x46faac: 0x24e7fbf0  addiu       $a3, $a3, -0x410
    ctx->pc = 0x46faacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966256));
label_46fab0:
    // 0x46fab0: 0x2408007a  addiu       $t0, $zero, 0x7A
    ctx->pc = 0x46fab0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
label_46fab4:
    // 0x46fab4: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x46fab4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_46fab8:
    // 0x46fab8: 0x2529fc80  addiu       $t1, $t1, -0x380
    ctx->pc = 0x46fab8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966400));
label_46fabc:
    // 0x46fabc: 0xc113940  jal         func_44E500
label_46fac0:
    if (ctx->pc == 0x46FAC0u) {
        ctx->pc = 0x46FAC4u;
        goto label_46fac4;
    }
    ctx->pc = 0x46FABCu;
    SET_GPR_U32(ctx, 31, 0x46FAC4u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x46FABCu, 0x46FAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46FAC4u;
label_46fac4:
    // 0x46fac4: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x46fac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_46fac8:
    // 0x46fac8: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x46fac8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_46facc:
    // 0x46facc: 0x24a5fcd0  addiu       $a1, $a1, -0x330
    ctx->pc = 0x46faccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966480));
label_46fad0:
    // 0x46fad0: 0xc115c24  jal         func_457090
label_46fad4:
    if (ctx->pc == 0x46FAD4u) {
        ctx->pc = 0x46FAD8u;
        goto label_46fad8;
    }
    ctx->pc = 0x46FAD0u;
    SET_GPR_U32(ctx, 31, 0x46FAD8u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x46FAD0u, 0x46FAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46FAD8u;
label_46fad8:
    // 0x46fad8: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x46fad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_46fadc:
    // 0x46fadc: 0x8fa20508  lw          $v0, 0x508($sp)
    ctx->pc = 0x46fadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1288)));
label_46fae0:
    // 0x46fae0: 0x40f809  jalr        $v0
label_46fae4:
    if (ctx->pc == 0x46FAE4u) {
        ctx->pc = 0x46FAE8u;
        goto label_46fae8;
    }
    ctx->pc = 0x46FAE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46FAE8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46FAE0u, 0x46FAE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46FAE8u;
label_46fae8:
    // 0x46fae8: 0xaf82b328  sw          $v0, -0x4CD8($gp)
    ctx->pc = 0x46fae8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947624), GPR_U32(ctx, 2));
label_46faec:
    // 0x46faec: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x46faecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_46faf0:
    // 0x46faf0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_46faf4:
    if (ctx->pc == 0x46FAF4u) {
        ctx->pc = 0x46FAF8u;
        goto label_46faf8;
    }
    ctx->pc = 0x46FAF0u;
    {
        const bool branch_taken_0x46faf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46faf0) {
            ctx->pc = 0x46FB00u;
            goto label_46fb00;
        }
    }
    ctx->pc = 0x46FAF8u;
label_46faf8:
    // 0x46faf8: 0xd  break       0
    ctx->pc = 0x46faf8u;
    runtime->handleBreak(rdram, ctx);
label_46fafc:
    // 0x46fafc: 0x0  nop
    ctx->pc = 0x46fafcu;
    // NOP
label_46fb00:
    // 0x46fb00: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x46fb00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_46fb04:
    // 0x46fb04: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46fb04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_46fb08:
    // 0x46fb08: 0xc11392c  jal         func_44E4B0
label_46fb0c:
    if (ctx->pc == 0x46FB0Cu) {
        ctx->pc = 0x46FB10u;
        goto label_46fb10;
    }
    ctx->pc = 0x46FB08u;
    SET_GPR_U32(ctx, 31, 0x46FB10u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x46FB08u, 0x46FB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46FB10u;
label_46fb10:
    // 0x46fb10: 0x8fa20520  lw          $v0, 0x520($sp)
    ctx->pc = 0x46fb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1312)));
label_46fb14:
    // 0x46fb14: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x46fb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46fb18:
    // 0x46fb18: 0x10400093  beqz        $v0, . + 4 + (0x93 << 2)
label_46fb1c:
    if (ctx->pc == 0x46FB1Cu) {
        ctx->pc = 0x46FB20u;
        goto label_46fb20;
    }
    ctx->pc = 0x46FB18u;
    {
        const bool branch_taken_0x46fb18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46fb18) {
            ctx->pc = 0x46FD68u;
            goto label_46fd68;
        }
    }
    ctx->pc = 0x46FB20u;
label_46fb20:
    // 0x46fb20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x46fb20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_46fb24:
    // 0x46fb24: 0x0  nop
    ctx->pc = 0x46fb24u;
    // NOP
label_46fb28:
    // 0x46fb28: 0xe7a00260  swc1        $f0, 0x260($sp)
    ctx->pc = 0x46fb28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 608), bits); }
label_46fb2c:
    // 0x46fb2c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x46fb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_46fb30:
    // 0x46fb30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x46fb30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_46fb34:
    // 0x46fb34: 0x0  nop
    ctx->pc = 0x46fb34u;
    // NOP
label_46fb38:
    // 0x46fb38: 0xe7a00264  swc1        $f0, 0x264($sp)
    ctx->pc = 0x46fb38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 612), bits); }
label_46fb3c:
    // 0x46fb3c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x46fb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_46fb40:
    // 0x46fb40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x46fb40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_46fb44:
    // 0x46fb44: 0x0  nop
    ctx->pc = 0x46fb44u;
    // NOP
label_46fb48:
    // 0x46fb48: 0xe7a00268  swc1        $f0, 0x268($sp)
    ctx->pc = 0x46fb48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 616), bits); }
label_46fb4c:
    // 0x46fb4c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x46fb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_46fb50:
    // 0x46fb50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x46fb50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_46fb54:
    // 0x46fb54: 0x0  nop
    ctx->pc = 0x46fb54u;
    // NOP
label_46fb58:
    // 0x46fb58: 0xe7a0026c  swc1        $f0, 0x26C($sp)
    ctx->pc = 0x46fb58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 620), bits); }
label_46fb5c:
    // 0x46fb5c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x46fb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_46fb60:
    // 0x46fb60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x46fb60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_46fb64:
    // 0x46fb64: 0x0  nop
    ctx->pc = 0x46fb64u;
    // NOP
label_46fb68:
    // 0x46fb68: 0xe7a00270  swc1        $f0, 0x270($sp)
    ctx->pc = 0x46fb68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 624), bits); }
label_46fb6c:
    // 0x46fb6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x46fb6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_46fb70:
    // 0x46fb70: 0x0  nop
    ctx->pc = 0x46fb70u;
    // NOP
label_46fb74:
    // 0x46fb74: 0xe7a00274  swc1        $f0, 0x274($sp)
    ctx->pc = 0x46fb74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 628), bits); }
label_46fb78:
    // 0x46fb78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x46fb78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_46fb7c:
    // 0x46fb7c: 0x0  nop
    ctx->pc = 0x46fb7cu;
    // NOP
label_46fb80:
    // 0x46fb80: 0xe7a00278  swc1        $f0, 0x278($sp)
    ctx->pc = 0x46fb80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 632), bits); }
label_46fb84:
    // 0x46fb84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x46fb84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_46fb88:
    // 0x46fb88: 0x0  nop
    ctx->pc = 0x46fb88u;
    // NOP
label_46fb8c:
    // 0x46fb8c: 0xe7a0027c  swc1        $f0, 0x27C($sp)
    ctx->pc = 0x46fb8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 636), bits); }
label_46fb90:
    // 0x46fb90: 0x8fa20520  lw          $v0, 0x520($sp)
    ctx->pc = 0x46fb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1312)));
label_46fb94:
    // 0x46fb94: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x46fb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_46fb98:
    // 0x46fb98: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_46fb9c:
    if (ctx->pc == 0x46FB9Cu) {
        ctx->pc = 0x46FBA0u;
        goto label_46fba0;
    }
    ctx->pc = 0x46FB98u;
    {
        const bool branch_taken_0x46fb98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46fb98) {
            ctx->pc = 0x46FC08u;
            goto label_46fc08;
        }
    }
    ctx->pc = 0x46FBA0u;
label_46fba0:
    // 0x46fba0: 0x27a20260  addiu       $v0, $sp, 0x260
    ctx->pc = 0x46fba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_46fba4:
    // 0x46fba4: 0x27a304f8  addiu       $v1, $sp, 0x4F8
    ctx->pc = 0x46fba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1272));
label_46fba8:
    // 0x46fba8: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x46fba8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_46fbac:
    // 0x46fbac: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x46fbacu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_46fbb0:
    // 0x46fbb0: 0x27a30278  addiu       $v1, $sp, 0x278
    ctx->pc = 0x46fbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 632));
label_46fbb4:
    // 0x46fbb4: 0x27a204f0  addiu       $v0, $sp, 0x4F0
    ctx->pc = 0x46fbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
label_46fbb8:
    // 0x46fbb8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x46fbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_46fbbc:
    // 0x46fbbc: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x46fbbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_46fbc0:
    // 0x46fbc0: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x46fbc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_46fbc4:
    // 0x46fbc4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x46fbc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_46fbc8:
    // 0x46fbc8: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x46fbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_46fbcc:
    // 0x46fbcc: 0x27a50268  addiu       $a1, $sp, 0x268
    ctx->pc = 0x46fbccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 616));
label_46fbd0:
    // 0x46fbd0: 0xc05db24  jal         func_176C90
label_46fbd4:
    if (ctx->pc == 0x46FBD4u) {
        ctx->pc = 0x46FBD8u;
        goto label_46fbd8;
    }
    ctx->pc = 0x46FBD0u;
    SET_GPR_U32(ctx, 31, 0x46FBD8u);
    ctx->pc = 0x176C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C90u, 0x46FBD0u, 0x46FBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46FBD8u;
label_46fbd8:
    // 0x46fbd8: 0x27a40278  addiu       $a0, $sp, 0x278
    ctx->pc = 0x46fbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 632));
label_46fbdc:
    // 0x46fbdc: 0x27a50270  addiu       $a1, $sp, 0x270
    ctx->pc = 0x46fbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_46fbe0:
    // 0x46fbe0: 0xc05db24  jal         func_176C90
label_46fbe4:
    if (ctx->pc == 0x46FBE4u) {
        ctx->pc = 0x46FBE8u;
        goto label_46fbe8;
    }
    ctx->pc = 0x46FBE0u;
    SET_GPR_U32(ctx, 31, 0x46FBE8u);
    ctx->pc = 0x176C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C90u, 0x46FBE0u, 0x46FBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46FBE8u;
label_46fbe8:
    // 0x46fbe8: 0x27a40268  addiu       $a0, $sp, 0x268
    ctx->pc = 0x46fbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 616));
label_46fbec:
    // 0x46fbec: 0x27a504f8  addiu       $a1, $sp, 0x4F8
    ctx->pc = 0x46fbecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1272));
label_46fbf0:
    // 0x46fbf0: 0xc05db24  jal         func_176C90
label_46fbf4:
    if (ctx->pc == 0x46FBF4u) {
        ctx->pc = 0x46FBF8u;
        goto label_46fbf8;
    }
    ctx->pc = 0x46FBF0u;
    SET_GPR_U32(ctx, 31, 0x46FBF8u);
    ctx->pc = 0x176C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C90u, 0x46FBF0u, 0x46FBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46FBF8u;
label_46fbf8:
    // 0x46fbf8: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x46fbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_46fbfc:
    // 0x46fbfc: 0x27a504f0  addiu       $a1, $sp, 0x4F0
    ctx->pc = 0x46fbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
label_46fc00:
    // 0x46fc00: 0xc05db24  jal         func_176C90
label_46fc04:
    if (ctx->pc == 0x46FC04u) {
        ctx->pc = 0x46FC08u;
        goto label_46fc08;
    }
    ctx->pc = 0x46FC00u;
    SET_GPR_U32(ctx, 31, 0x46FC08u);
    ctx->pc = 0x176C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C90u, 0x46FC00u, 0x46FC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46FC08u;
label_46fc08:
    // 0x46fc08: 0x8fa20520  lw          $v0, 0x520($sp)
    ctx->pc = 0x46fc08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1312)));
label_46fc0c:
    // 0x46fc0c: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x46fc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_46fc10:
    // 0x46fc10: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_46fc14:
    if (ctx->pc == 0x46FC14u) {
        ctx->pc = 0x46FC18u;
        goto label_46fc18;
    }
    ctx->pc = 0x46FC10u;
    {
        const bool branch_taken_0x46fc10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46fc10) {
            ctx->pc = 0x46FC80u;
            goto label_46fc80;
        }
    }
    ctx->pc = 0x46FC18u;
label_46fc18:
    // 0x46fc18: 0x27a20260  addiu       $v0, $sp, 0x260
    ctx->pc = 0x46fc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_46fc1c:
    // 0x46fc1c: 0x27a304e8  addiu       $v1, $sp, 0x4E8
    ctx->pc = 0x46fc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1256));
label_46fc20:
    // 0x46fc20: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x46fc20u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_46fc24:
    // 0x46fc24: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x46fc24u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_46fc28:
    // 0x46fc28: 0x27a30268  addiu       $v1, $sp, 0x268
    ctx->pc = 0x46fc28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 616));
label_46fc2c:
    // 0x46fc2c: 0x27a204e0  addiu       $v0, $sp, 0x4E0
    ctx->pc = 0x46fc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
label_46fc30:
    // 0x46fc30: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x46fc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_46fc34:
    // 0x46fc34: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x46fc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_46fc38:
    // 0x46fc38: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x46fc38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_46fc3c:
    // 0x46fc3c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x46fc3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_46fc40:
    // 0x46fc40: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x46fc40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_46fc44:
    // 0x46fc44: 0x27a50278  addiu       $a1, $sp, 0x278
    ctx->pc = 0x46fc44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 632));
label_46fc48:
    // 0x46fc48: 0xc05db24  jal         func_176C90
label_46fc4c:
    if (ctx->pc == 0x46FC4Cu) {
        ctx->pc = 0x46FC50u;
        goto label_46fc50;
    }
    ctx->pc = 0x46FC48u;
    SET_GPR_U32(ctx, 31, 0x46FC50u);
    ctx->pc = 0x176C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C90u, 0x46FC48u, 0x46FC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46FC50u;
label_46fc50:
    // 0x46fc50: 0x27a40268  addiu       $a0, $sp, 0x268
    ctx->pc = 0x46fc50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 616));
label_46fc54:
    // 0x46fc54: 0x27a50270  addiu       $a1, $sp, 0x270
    ctx->pc = 0x46fc54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_46fc58:
    // 0x46fc58: 0xc05db24  jal         func_176C90
label_46fc5c:
    if (ctx->pc == 0x46FC5Cu) {
        ctx->pc = 0x46FC60u;
        goto label_46fc60;
    }
    ctx->pc = 0x46FC58u;
    SET_GPR_U32(ctx, 31, 0x46FC60u);
    ctx->pc = 0x176C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C90u, 0x46FC58u, 0x46FC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46FC60u;
label_46fc60:
    // 0x46fc60: 0x27a40278  addiu       $a0, $sp, 0x278
    ctx->pc = 0x46fc60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 632));
label_46fc64:
    // 0x46fc64: 0x27a504e8  addiu       $a1, $sp, 0x4E8
    ctx->pc = 0x46fc64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1256));
label_46fc68:
    // 0x46fc68: 0xc05db24  jal         func_176C90
label_46fc6c:
    if (ctx->pc == 0x46FC6Cu) {
        ctx->pc = 0x46FC70u;
        goto label_46fc70;
    }
    ctx->pc = 0x46FC68u;
    SET_GPR_U32(ctx, 31, 0x46FC70u);
    ctx->pc = 0x176C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C90u, 0x46FC68u, 0x46FC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46FC70u;
label_46fc70:
    // 0x46fc70: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x46fc70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_46fc74:
    // 0x46fc74: 0x27a504e0  addiu       $a1, $sp, 0x4E0
    ctx->pc = 0x46fc74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
label_46fc78:
    // 0x46fc78: 0xc05db24  jal         func_176C90
label_46fc7c:
    if (ctx->pc == 0x46FC7Cu) {
        ctx->pc = 0x46FC80u;
        goto label_46fc80;
    }
    ctx->pc = 0x46FC78u;
    SET_GPR_U32(ctx, 31, 0x46FC80u);
    ctx->pc = 0x176C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C90u, 0x46FC78u, 0x46FC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46FC80u;
label_46fc80:
    // 0x46fc80: 0x8fa20520  lw          $v0, 0x520($sp)
    ctx->pc = 0x46fc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1312)));
label_46fc84:
    // 0x46fc84: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x46fc84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46fc88:
    // 0x46fc88: 0x27a50260  addiu       $a1, $sp, 0x260
    ctx->pc = 0x46fc88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_46fc8c:
    // 0x46fc8c: 0x27a60268  addiu       $a2, $sp, 0x268
    ctx->pc = 0x46fc8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 616));
label_46fc90:
    // 0x46fc90: 0x27a70270  addiu       $a3, $sp, 0x270
    ctx->pc = 0x46fc90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_46fc94:
    // 0x46fc94: 0x27a80278  addiu       $t0, $sp, 0x278
    ctx->pc = 0x46fc94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 632));
label_46fc98:
    // 0x46fc98: 0xc0e9ecc  jal         func_3A7B30
label_46fc9c:
    if (ctx->pc == 0x46FC9Cu) {
        ctx->pc = 0x46FCA0u;
        goto label_46fca0;
    }
    ctx->pc = 0x46FC98u;
    SET_GPR_U32(ctx, 31, 0x46FCA0u);
    ctx->pc = 0x3A7B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7B30u, 0x46FC98u, 0x46FCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46FCA0u;
label_46fca0:
    // 0x46fca0: 0x8fa30520  lw          $v1, 0x520($sp)
    ctx->pc = 0x46fca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1312)));
label_46fca4:
    // 0x46fca4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x46fca4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_46fca8:
    // 0x46fca8: 0x8fa20520  lw          $v0, 0x520($sp)
    ctx->pc = 0x46fca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1312)));
label_46fcac:
    // 0x46fcac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x46fcacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46fcb0:
    // 0x46fcb0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x46fcb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_46fcb4:
    // 0x46fcb4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x46fcb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_46fcb8:
    // 0x46fcb8: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_46fcbc:
    if (ctx->pc == 0x46FCBCu) {
        ctx->pc = 0x46FCC0u;
        goto label_46fcc0;
    }
    ctx->pc = 0x46FCB8u;
    {
        const bool branch_taken_0x46fcb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46fcb8) {
            ctx->pc = 0x46FD68u;
            goto label_46fd68;
        }
    }
    ctx->pc = 0x46FCC0u;
label_46fcc0:
    // 0x46fcc0: 0x8f82b32c  lw          $v0, -0x4CD4($gp)
    ctx->pc = 0x46fcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947628)));
label_46fcc4:
    // 0x46fcc4: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_46fcc8:
    if (ctx->pc == 0x46FCC8u) {
        ctx->pc = 0x46FCCCu;
        goto label_46fccc;
    }
    ctx->pc = 0x46FCC4u;
    {
        const bool branch_taken_0x46fcc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46fcc4) {
            ctx->pc = 0x46FD68u;
            goto label_46fd68;
        }
    }
    ctx->pc = 0x46FCCCu;
label_46fccc:
    // 0x46fccc: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x46fcccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_46fcd0:
    // 0x46fcd0: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x46fcd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_46fcd4:
    // 0x46fcd4: 0x27a604d0  addiu       $a2, $sp, 0x4D0
    ctx->pc = 0x46fcd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
label_46fcd8:
    // 0x46fcd8: 0xc115ee8  jal         func_457BA0
label_46fcdc:
    if (ctx->pc == 0x46FCDCu) {
        ctx->pc = 0x46FCE0u;
        goto label_46fce0;
    }
    ctx->pc = 0x46FCD8u;
    SET_GPR_U32(ctx, 31, 0x46FCE0u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x46FCD8u, 0x46FCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46FCE0u;
label_46fce0:
    // 0x46fce0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_46fce4:
    if (ctx->pc == 0x46FCE4u) {
        ctx->pc = 0x46FCE8u;
        goto label_46fce8;
    }
    ctx->pc = 0x46FCE0u;
    {
        const bool branch_taken_0x46fce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46fce0) {
            ctx->pc = 0x46FD68u;
            goto label_46fd68;
        }
    }
    ctx->pc = 0x46FCE8u;
label_46fce8:
    // 0x46fce8: 0x8fa204d8  lw          $v0, 0x4D8($sp)
    ctx->pc = 0x46fce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1240)));
label_46fcec:
    // 0x46fcec: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_46fcf0:
    if (ctx->pc == 0x46FCF0u) {
        ctx->pc = 0x46FCF4u;
        goto label_46fcf4;
    }
    ctx->pc = 0x46FCECu;
    {
        const bool branch_taken_0x46fcec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46fcec) {
            ctx->pc = 0x46FD68u;
            goto label_46fd68;
        }
    }
    ctx->pc = 0x46FCF4u;
label_46fcf4:
    // 0x46fcf4: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x46fcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_46fcf8:
    // 0x46fcf8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x46fcf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_46fcfc:
    // 0x46fcfc: 0x8fa604d4  lw          $a2, 0x4D4($sp)
    ctx->pc = 0x46fcfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1236)));
label_46fd00:
    // 0x46fd00: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x46fd00u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_46fd04:
    // 0x46fd04: 0x24e7fbf0  addiu       $a3, $a3, -0x410
    ctx->pc = 0x46fd04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966256));
label_46fd08:
    // 0x46fd08: 0x240800a9  addiu       $t0, $zero, 0xA9
    ctx->pc = 0x46fd08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
label_46fd0c:
    // 0x46fd0c: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x46fd0cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_46fd10:
    // 0x46fd10: 0x2529fc80  addiu       $t1, $t1, -0x380
    ctx->pc = 0x46fd10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966400));
label_46fd14:
    // 0x46fd14: 0xc113940  jal         func_44E500
label_46fd18:
    if (ctx->pc == 0x46FD18u) {
        ctx->pc = 0x46FD1Cu;
        goto label_46fd1c;
    }
    ctx->pc = 0x46FD14u;
    SET_GPR_U32(ctx, 31, 0x46FD1Cu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x46FD14u, 0x46FD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46FD1Cu;
label_46fd1c:
    // 0x46fd1c: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x46fd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_46fd20:
    // 0x46fd20: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x46fd20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_46fd24:
    // 0x46fd24: 0x24a5fd10  addiu       $a1, $a1, -0x2F0
    ctx->pc = 0x46fd24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966544));
label_46fd28:
    // 0x46fd28: 0xc115c24  jal         func_457090
label_46fd2c:
    if (ctx->pc == 0x46FD2Cu) {
        ctx->pc = 0x46FD30u;
        goto label_46fd30;
    }
    ctx->pc = 0x46FD28u;
    SET_GPR_U32(ctx, 31, 0x46FD30u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x46FD28u, 0x46FD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46FD30u;
label_46fd30:
    // 0x46fd30: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x46fd30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_46fd34:
    // 0x46fd34: 0x8fa204d8  lw          $v0, 0x4D8($sp)
    ctx->pc = 0x46fd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1240)));
label_46fd38:
    // 0x46fd38: 0x40f809  jalr        $v0
label_46fd3c:
    if (ctx->pc == 0x46FD3Cu) {
        ctx->pc = 0x46FD40u;
        goto label_46fd40;
    }
    ctx->pc = 0x46FD38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46FD40u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46FD38u, 0x46FD40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46FD40u;
label_46fd40:
    // 0x46fd40: 0xaf82b32c  sw          $v0, -0x4CD4($gp)
    ctx->pc = 0x46fd40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947628), GPR_U32(ctx, 2));
label_46fd44:
    // 0x46fd44: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x46fd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_46fd48:
    // 0x46fd48: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_46fd4c:
    if (ctx->pc == 0x46FD4Cu) {
        ctx->pc = 0x46FD50u;
        goto label_46fd50;
    }
    ctx->pc = 0x46FD48u;
    {
        const bool branch_taken_0x46fd48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46fd48) {
            ctx->pc = 0x46FD58u;
            goto label_46fd58;
        }
    }
    ctx->pc = 0x46FD50u;
label_46fd50:
    // 0x46fd50: 0xd  break       0
    ctx->pc = 0x46fd50u;
    runtime->handleBreak(rdram, ctx);
label_46fd54:
    // 0x46fd54: 0x0  nop
    ctx->pc = 0x46fd54u;
    // NOP
label_46fd58:
    // 0x46fd58: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x46fd58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_46fd5c:
    // 0x46fd5c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46fd5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_46fd60:
    // 0x46fd60: 0xc11392c  jal         func_44E4B0
label_46fd64:
    if (ctx->pc == 0x46FD64u) {
        ctx->pc = 0x46FD68u;
        goto label_46fd68;
    }
    ctx->pc = 0x46FD60u;
    SET_GPR_U32(ctx, 31, 0x46FD68u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x46FD60u, 0x46FD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46FD68u;
label_46fd68:
    // 0x46fd68: 0x8fa40520  lw          $a0, 0x520($sp)
    ctx->pc = 0x46fd68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1312)));
label_46fd6c:
    // 0x46fd6c: 0x8fa50520  lw          $a1, 0x520($sp)
    ctx->pc = 0x46fd6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1312)));
label_46fd70:
    // 0x46fd70: 0x8fa60520  lw          $a2, 0x520($sp)
    ctx->pc = 0x46fd70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1312)));
label_46fd74:
    // 0x46fd74: 0x8fa30520  lw          $v1, 0x520($sp)
    ctx->pc = 0x46fd74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1312)));
label_46fd78:
    // 0x46fd78: 0x8fa20520  lw          $v0, 0x520($sp)
    ctx->pc = 0x46fd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1312)));
label_46fd7c:
    // 0x46fd7c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x46fd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46fd80:
    // 0x46fd80: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x46fd80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_46fd84:
    // 0x46fd84: 0x24c60014  addiu       $a2, $a2, 0x14
    ctx->pc = 0x46fd84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
label_46fd88:
    // 0x46fd88: 0x24670018  addiu       $a3, $v1, 0x18
    ctx->pc = 0x46fd88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_46fd8c:
    // 0x46fd8c: 0x2448001c  addiu       $t0, $v0, 0x1C
    ctx->pc = 0x46fd8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
label_46fd90:
    // 0x46fd90: 0xc0e9e76  jal         func_3A79D8
label_46fd94:
    if (ctx->pc == 0x46FD94u) {
        ctx->pc = 0x46FD98u;
        goto label_46fd98;
    }
    ctx->pc = 0x46FD90u;
    SET_GPR_U32(ctx, 31, 0x46FD98u);
    ctx->pc = 0x3A79D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A79D8u, 0x46FD90u, 0x46FD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46FD98u;
label_46fd98:
    // 0x46fd98: 0x8fa30520  lw          $v1, 0x520($sp)
    ctx->pc = 0x46fd98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1312)));
label_46fd9c:
    // 0x46fd9c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x46fd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_46fda0:
    // 0x46fda0: 0x8fa20520  lw          $v0, 0x520($sp)
    ctx->pc = 0x46fda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1312)));
label_46fda4:
    // 0x46fda4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x46fda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46fda8:
    // 0x46fda8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x46fda8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_46fdac:
    // 0x46fdac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x46fdacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_46fdb0:
    // 0x46fdb0: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_46fdb4:
    if (ctx->pc == 0x46FDB4u) {
        ctx->pc = 0x46FDB8u;
        goto label_46fdb8;
    }
    ctx->pc = 0x46FDB0u;
    {
        const bool branch_taken_0x46fdb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46fdb0) {
            ctx->pc = 0x46FE60u;
            goto label_46fe60;
        }
    }
    ctx->pc = 0x46FDB8u;
label_46fdb8:
    // 0x46fdb8: 0x8f82b330  lw          $v0, -0x4CD0($gp)
    ctx->pc = 0x46fdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947632)));
label_46fdbc:
    // 0x46fdbc: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_46fdc0:
    if (ctx->pc == 0x46FDC0u) {
        ctx->pc = 0x46FDC4u;
        goto label_46fdc4;
    }
    ctx->pc = 0x46FDBCu;
    {
        const bool branch_taken_0x46fdbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46fdbc) {
            ctx->pc = 0x46FE60u;
            goto label_46fe60;
        }
    }
    ctx->pc = 0x46FDC4u;
label_46fdc4:
    // 0x46fdc4: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x46fdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_46fdc8:
    // 0x46fdc8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x46fdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_46fdcc:
    // 0x46fdcc: 0x27a604c0  addiu       $a2, $sp, 0x4C0
    ctx->pc = 0x46fdccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
label_46fdd0:
    // 0x46fdd0: 0xc115ee8  jal         func_457BA0
label_46fdd4:
    if (ctx->pc == 0x46FDD4u) {
        ctx->pc = 0x46FDD8u;
        goto label_46fdd8;
    }
    ctx->pc = 0x46FDD0u;
    SET_GPR_U32(ctx, 31, 0x46FDD8u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x46FDD0u, 0x46FDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46FDD8u;
label_46fdd8:
    // 0x46fdd8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_46fddc:
    if (ctx->pc == 0x46FDDCu) {
        ctx->pc = 0x46FDE0u;
        goto label_46fde0;
    }
    ctx->pc = 0x46FDD8u;
    {
        const bool branch_taken_0x46fdd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46fdd8) {
            ctx->pc = 0x46FE60u;
            goto label_46fe60;
        }
    }
    ctx->pc = 0x46FDE0u;
label_46fde0:
    // 0x46fde0: 0x8fa204c8  lw          $v0, 0x4C8($sp)
    ctx->pc = 0x46fde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1224)));
label_46fde4:
    // 0x46fde4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_46fde8:
    if (ctx->pc == 0x46FDE8u) {
        ctx->pc = 0x46FDECu;
        goto label_46fdec;
    }
    ctx->pc = 0x46FDE4u;
    {
        const bool branch_taken_0x46fde4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46fde4) {
            ctx->pc = 0x46FE60u;
            goto label_46fe60;
        }
    }
    ctx->pc = 0x46FDECu;
label_46fdec:
    // 0x46fdec: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x46fdecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_46fdf0:
    // 0x46fdf0: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x46fdf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_46fdf4:
    // 0x46fdf4: 0x8fa604c4  lw          $a2, 0x4C4($sp)
    ctx->pc = 0x46fdf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1220)));
label_46fdf8:
    // 0x46fdf8: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x46fdf8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_46fdfc:
    // 0x46fdfc: 0x24e7fbf0  addiu       $a3, $a3, -0x410
    ctx->pc = 0x46fdfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966256));
label_46fe00:
    // 0x46fe00: 0x240800b0  addiu       $t0, $zero, 0xB0
    ctx->pc = 0x46fe00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_46fe04:
    // 0x46fe04: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x46fe04u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_46fe08:
    // 0x46fe08: 0x2529fc80  addiu       $t1, $t1, -0x380
    ctx->pc = 0x46fe08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966400));
label_46fe0c:
    // 0x46fe0c: 0xc113940  jal         func_44E500
label_46fe10:
    if (ctx->pc == 0x46FE10u) {
        ctx->pc = 0x46FE14u;
        goto label_46fe14;
    }
    ctx->pc = 0x46FE0Cu;
    SET_GPR_U32(ctx, 31, 0x46FE14u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x46FE0Cu, 0x46FE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46FE14u;
label_46fe14:
    // 0x46fe14: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x46fe14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_46fe18:
    // 0x46fe18: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x46fe18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_46fe1c:
    // 0x46fe1c: 0x24a5fd40  addiu       $a1, $a1, -0x2C0
    ctx->pc = 0x46fe1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966592));
label_46fe20:
    // 0x46fe20: 0xc115c24  jal         func_457090
label_46fe24:
    if (ctx->pc == 0x46FE24u) {
        ctx->pc = 0x46FE28u;
        goto label_46fe28;
    }
    ctx->pc = 0x46FE20u;
    SET_GPR_U32(ctx, 31, 0x46FE28u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x46FE20u, 0x46FE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46FE28u;
label_46fe28:
    // 0x46fe28: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x46fe28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_46fe2c:
    // 0x46fe2c: 0x8fa204c8  lw          $v0, 0x4C8($sp)
    ctx->pc = 0x46fe2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1224)));
label_46fe30:
    // 0x46fe30: 0x40f809  jalr        $v0
label_46fe34:
    if (ctx->pc == 0x46FE34u) {
        ctx->pc = 0x46FE38u;
        goto label_46fe38;
    }
    ctx->pc = 0x46FE30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46FE38u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46FE30u, 0x46FE38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46FE38u;
label_46fe38:
    // 0x46fe38: 0xaf82b330  sw          $v0, -0x4CD0($gp)
    ctx->pc = 0x46fe38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947632), GPR_U32(ctx, 2));
label_46fe3c:
    // 0x46fe3c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x46fe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_46fe40:
    // 0x46fe40: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_46fe44:
    if (ctx->pc == 0x46FE44u) {
        ctx->pc = 0x46FE48u;
        goto label_46fe48;
    }
    ctx->pc = 0x46FE40u;
    {
        const bool branch_taken_0x46fe40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46fe40) {
            ctx->pc = 0x46FE50u;
            goto label_46fe50;
        }
    }
    ctx->pc = 0x46FE48u;
label_46fe48:
    // 0x46fe48: 0xd  break       0
    ctx->pc = 0x46fe48u;
    runtime->handleBreak(rdram, ctx);
label_46fe4c:
    // 0x46fe4c: 0x0  nop
    ctx->pc = 0x46fe4cu;
    // NOP
label_46fe50:
    // 0x46fe50: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x46fe50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_46fe54:
    // 0x46fe54: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46fe54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_46fe58:
    // 0x46fe58: 0xc11392c  jal         func_44E4B0
label_46fe5c:
    if (ctx->pc == 0x46FE5Cu) {
        ctx->pc = 0x46FE60u;
        goto label_46fe60;
    }
    ctx->pc = 0x46FE58u;
    SET_GPR_U32(ctx, 31, 0x46FE60u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x46FE58u, 0x46FE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46FE60u;
label_46fe60:
    // 0x46fe60: 0x8fa30520  lw          $v1, 0x520($sp)
    ctx->pc = 0x46fe60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1312)));
label_46fe64:
    // 0x46fe64: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x46fe64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_46fe68:
    // 0x46fe68: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x46fe68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_46fe6c:
    // 0x46fe6c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x46fe6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_46fe70:
    // 0x46fe70: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x46fe70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_46fe74:
    // 0x46fe74: 0x8fa20520  lw          $v0, 0x520($sp)
    ctx->pc = 0x46fe74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1312)));
label_46fe78:
    // 0x46fe78: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x46fe78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46fe7c:
    // 0x46fe7c: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x46fe7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
label_46fe80:
    // 0x46fe80: 0x8fb00520  lw          $s0, 0x520($sp)
    ctx->pc = 0x46fe80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1312)));
label_46fe84:
    // 0x46fe84: 0x8fa20520  lw          $v0, 0x520($sp)
    ctx->pc = 0x46fe84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1312)));
label_46fe88:
    // 0x46fe88: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x46fe88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_46fe8c:
    // 0x46fe8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46fe8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46fe90:
    // 0x46fe90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x46fe90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_46fe94:
    // 0x46fe94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46fe94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_46fe98:
    // 0x46fe98: 0x27bd0530  addiu       $sp, $sp, 0x530
    ctx->pc = 0x46fe98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1328));
label_46fe9c:
    // 0x46fe9c: 0x3e00008  jr          $ra
label_46fea0:
    if (ctx->pc == 0x46FEA0u) {
        ctx->pc = 0x46FEA4u;
        goto label_46fea4;
    }
    ctx->pc = 0x46FE9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46FE9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46FEA4u;
label_46fea4:
    // 0x46fea4: 0x0  nop
    ctx->pc = 0x46fea4u;
    // NOP
label_46fea8:
    // 0x46fea8: 0x0  nop
    ctx->pc = 0x46fea8u;
    // NOP
label_46feac:
    // 0x46feac: 0x0  nop
    ctx->pc = 0x46feacu;
    // NOP
    ctx->pc = 0x46feb0u;
}
